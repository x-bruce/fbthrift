/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/gen/module_types_h.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/transitive_types.h"

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Included;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef int64_t IncludedInt64;
typedef  ::cpp2::Foo TransitiveFoo;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Included final : private apache::thrift::detail::st::ComparisonOperators<Included> {
 public:

  Included() :
      MyIntField(0LL),
      MyTransitiveField(::apache::thrift::detail::make_constant< ::cpp2::Foo>(::apache::thrift::detail::wrap_argument<1>(2LL))) {}
  // FragileConstructor for use in initialization lists only.
  Included(apache::thrift::FragileConstructor, int64_t MyIntField__arg,  ::cpp2::Foo MyTransitiveField__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    MyIntField = arg.extract();
    __isset.MyIntField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    MyTransitiveField = arg.extract();
    __isset.MyTransitiveField = true;
  }

  Included(Included&&) = default;

  Included(const Included&) = default;

  Included& operator=(Included&&) = default;

  Included& operator=(const Included&) = default;
  void __clear();
  int64_t MyIntField;
   ::cpp2::Foo MyTransitiveField;

  struct __isset {
    bool MyIntField;
    bool MyTransitiveField;
  } __isset = {};
  bool operator==(const Included& rhs) const;
  bool operator<(const Included& rhs) const;

  int64_t get_MyIntField() const {
    return MyIntField;
  }

  int64_t& set_MyIntField(int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }
  const  ::cpp2::Foo& get_MyTransitiveField() const&;
   ::cpp2::Foo get_MyTransitiveField() &&;

  template <typename T_Included_MyTransitiveField_struct_setter =  ::cpp2::Foo>
   ::cpp2::Foo& set_MyTransitiveField(T_Included_MyTransitiveField_struct_setter&& MyTransitiveField_) {
    MyTransitiveField = std::forward<T_Included_MyTransitiveField_struct_setter>(MyTransitiveField_);
    __isset.MyTransitiveField = true;
    return MyTransitiveField;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Included >;
};

void swap(Included& a, Included& b);

template <class Protocol_>
uint32_t Included::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
