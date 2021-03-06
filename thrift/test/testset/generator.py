# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import argparse
import doctest
import os
from subprocess import check_output
from typing import Dict, List


THRIFT_HEADER = """
# This file is generated by `fbcode/thrift/test/testset:generator`
# {'@' + 'generated'}

namespace cpp2 apache.thrift.test

cpp_include "thrift/test/testset/PrintPath.h"
"""

FIELD_COUNT = 2  # Number of fields per structs


def format_dict(
    d: Dict[str, str], key_format: str, value_format: str
) -> Dict[str, str]:
    """ Format key/value of dict
    >>> result = format_dict({"foo_k": "foo_v", "bar_k": "bar_v"}, 'prefix_{}', "{}_suffix")
    >>> result == {'prefix_foo_k': 'foo_v_suffix', 'prefix_bar_k': 'bar_v_suffix'}
    True
    """
    return {key_format.format(k): value_format.format(d[k]) for k in d}


PRIMITIVE_TYPES = [
    "bool",
    "byte",
    "i16",
    "i32",
    "i64",
    "float",
    "double",
    "binary",
    "string",
]


def generate_names_to_types() -> Dict[str, str]:
    """ Generate display name to thrift type mapping. Display name will be used in file name, rule name, etc """
    ret = {t: t for t in PRIMITIVE_TYPES}
    ret.update(format_dict(ret, "set_{}", "set<{}>"))
    ret.update(format_dict(ret, "map_string_{}", "map<string, {}>"))
    ret.update(
        **format_dict(ret, "optional_{}", "optional {}"),
        **format_dict(ret, "required_{}", "required {}"),
    )
    ret.update(format_dict(ret, "{}_cpp_ref", "{} (cpp.ref = 'true')"))
    return ret


def generate_struct(name: str, types: List[str]) -> str:
    """ Generate thrift struct from types
    >>> print(generate_struct("Foo", ["i64", "optional string", "set<i32> (cpp.ref = 'true')"]))
    struct Foo {
      1: i64 field_1;
      2: optional string field_2;
      3: set<i32> (cpp.ref = 'true') field_3;
    }
    """
    lines = ["struct {} {{".format(name)]
    for i, t in enumerate(types):
        lines.append("  {0}: {1} field_{0};".format(i + 1, t))
    lines.append("}")
    return "\n".join(lines)


def gen_struct_all(path: str) -> None:
    with open(path, "w") as file:
        print(THRIFT_HEADER, file=file)

        structs = []
        for display_name, type in generate_names_to_types().items():
            struct_name = "struct_" + display_name
            structs.append(struct_name)
            print(generate_struct(struct_name, [type] * FIELD_COUNT), file=file)

        # Generate thrift files that contains all generated structures
        print(generate_struct("struct_all", structs), file=file)


def main() -> None:
    doctest.testmod()
    os.chdir(check_output(["buck", "root"]).strip())
    parser = argparse.ArgumentParser()
    parser.add_argument("--install_dir", required=True)
    parser.add_argument("--filename", required=True)
    args = parser.parse_args()
    gen_struct_all(os.path.join(args.install_dir, args.filename))


if __name__ == "__main__":
    main()
