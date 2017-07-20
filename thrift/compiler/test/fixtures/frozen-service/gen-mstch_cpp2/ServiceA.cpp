/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/frozen-service/gen-cpp2/ServiceA.h"

#include "thrift/compiler/test/fixtures/frozen-service/gen-cpp2/ServiceA.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Frozen2Protocol.h>
namespace some { namespace ns {

std::unique_ptr<apache::thrift::AsyncProcessor> ServiceASvIf::getProcessor() {
  return std::make_unique<ServiceAAsyncProcessor>(this);
}

void ServiceASvIf::moduleAMethod(std::unique_ptr< ::some::ns::ModuleA> /*modArg*/) {
  throw apache::thrift::TApplicationException("Function moduleAMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_moduleAMethod(std::unique_ptr< ::some::ns::ModuleA> modArg) {
  return apache::thrift::detail::si::future([&] { return moduleAMethod(std::move(modArg)); });
}

void ServiceASvIf::async_tm_moduleAMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr< ::some::ns::ModuleA> modArg) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_moduleAMethod(std::move(modArg)); });
}

void ServiceASvIf::moduleBMethod(std::unique_ptr< ::some::ns::ModuleB> /*modArg*/) {
  throw apache::thrift::TApplicationException("Function moduleBMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_moduleBMethod(std::unique_ptr< ::some::ns::ModuleB> modArg) {
  return apache::thrift::detail::si::future([&] { return moduleBMethod(std::move(modArg)); });
}

void ServiceASvIf::async_tm_moduleBMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr< ::some::ns::ModuleB> modArg) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_moduleBMethod(std::move(modArg)); });
}

void ServiceASvIf::i32StrDoubleMethod(int32_t /*i32Arg*/, std::unique_ptr<std::string> /*strArg*/, double /*doubleArg*/) {
  throw apache::thrift::TApplicationException("Function i32StrDoubleMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_i32StrDoubleMethod(int32_t i32Arg, std::unique_ptr<std::string> strArg, double doubleArg) {
  return apache::thrift::detail::si::future([&] { return i32StrDoubleMethod(i32Arg, std::move(strArg), doubleArg); });
}

void ServiceASvIf::async_tm_i32StrDoubleMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t i32Arg, std::unique_ptr<std::string> strArg, double doubleArg) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_i32StrDoubleMethod(i32Arg, std::move(strArg), doubleArg); });
}

void ServiceASvIf::versioningMethod(int32_t /*i32Arg*/, std::unique_ptr<std::string> /*strArg*/, double /*doubleArg*/) {
  throw apache::thrift::TApplicationException("Function versioningMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_versioningMethod(int32_t i32Arg, std::unique_ptr<std::string> strArg, double doubleArg) {
  return apache::thrift::detail::si::future([&] { return versioningMethod(i32Arg, std::move(strArg), doubleArg); });
}

void ServiceASvIf::async_tm_versioningMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t i32Arg, std::unique_ptr<std::string> strArg, double doubleArg) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_versioningMethod(i32Arg, std::move(strArg), doubleArg); });
}

int32_t ServiceASvIf::retI32Method() {
  throw apache::thrift::TApplicationException("Function retI32Method is unimplemented");
}

folly::Future<int32_t> ServiceASvIf::future_retI32Method() {
  return apache::thrift::detail::si::future([&] { return retI32Method(); });
}

void ServiceASvIf::async_tm_retI32Method(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_retI32Method(); });
}

void ServiceASvIf::retModAMethod( ::some::ns::ModuleA& /*_return*/) {
  throw apache::thrift::TApplicationException("Function retModAMethod is unimplemented");
}

folly::Future<std::unique_ptr< ::some::ns::ModuleA>> ServiceASvIf::future_retModAMethod() {
  return apache::thrift::detail::si::future_returning_uptr([&]( ::some::ns::ModuleA& _return) { retModAMethod(_return); });
}

void ServiceASvIf::async_tm_retModAMethod(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::ns::ModuleA>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_retModAMethod(); });
}

void ServiceASvIf::throwMethod() {
  throw apache::thrift::TApplicationException("Function throwMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_throwMethod() {
  return apache::thrift::detail::si::future([&] { return throwMethod(); });
}

void ServiceASvIf::async_tm_throwMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_throwMethod(); });
}

void ServiceASvIf::multiThrowMethod() {
  throw apache::thrift::TApplicationException("Function multiThrowMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_multiThrowMethod() {
  return apache::thrift::detail::si::future([&] { return multiThrowMethod(); });
}

void ServiceASvIf::async_tm_multiThrowMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_multiThrowMethod(); });
}

void ServiceASvIf::i32ThrowMethod(int32_t /*i32Arg*/) {
  throw apache::thrift::TApplicationException("Function i32ThrowMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_i32ThrowMethod(int32_t i32Arg) {
  return apache::thrift::detail::si::future([&] { return i32ThrowMethod(i32Arg); });
}

void ServiceASvIf::async_tm_i32ThrowMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t i32Arg) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_i32ThrowMethod(i32Arg); });
}

void ServiceASvIf::moduleAThrowMethod(std::unique_ptr< ::some::ns::ModuleA> /*modArg*/) {
  throw apache::thrift::TApplicationException("Function moduleAThrowMethod is unimplemented");
}

folly::Future<folly::Unit> ServiceASvIf::future_moduleAThrowMethod(std::unique_ptr< ::some::ns::ModuleA> modArg) {
  return apache::thrift::detail::si::future([&] { return moduleAThrowMethod(std::move(modArg)); });
}

void ServiceASvIf::async_tm_moduleAThrowMethod(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr< ::some::ns::ModuleA> modArg) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_moduleAThrowMethod(std::move(modArg)); });
}

void ServiceASvIf::mixedMethod(std::string& /*_return*/, std::unique_ptr<std::string> /*strArg*/, int32_t /*i32Arg*/, std::unique_ptr< ::some::ns::ModuleB> /*modArg*/) {
  throw apache::thrift::TApplicationException("Function mixedMethod is unimplemented");
}

folly::Future<std::unique_ptr<std::string>> ServiceASvIf::future_mixedMethod(std::unique_ptr<std::string> strArg, int32_t i32Arg, std::unique_ptr< ::some::ns::ModuleB> modArg) {
  return apache::thrift::detail::si::future_returning_uptr([&](std::string& _return) { mixedMethod(_return, std::move(strArg), i32Arg, std::move(modArg)); });
}

void ServiceASvIf::async_tm_mixedMethod(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback, std::unique_ptr<std::string> strArg, int32_t i32Arg, std::unique_ptr< ::some::ns::ModuleB> modArg) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_mixedMethod(std::move(strArg), i32Arg, std::move(modArg)); });
}

void ServiceASvNull::moduleAMethod(std::unique_ptr< ::some::ns::ModuleA> /*modArg*/) {}

void ServiceASvNull::moduleBMethod(std::unique_ptr< ::some::ns::ModuleB> /*modArg*/) {}

void ServiceASvNull::i32StrDoubleMethod(int32_t /*i32Arg*/, std::unique_ptr<std::string> /*strArg*/, double /*doubleArg*/) {}

void ServiceASvNull::versioningMethod(int32_t /*i32Arg*/, std::unique_ptr<std::string> /*strArg*/, double /*doubleArg*/) {}

int32_t ServiceASvNull::retI32Method() {
  return 0;
}

void ServiceASvNull::retModAMethod( ::some::ns::ModuleA& /*_return*/) {}

void ServiceASvNull::throwMethod() {}

void ServiceASvNull::multiThrowMethod() {}

void ServiceASvNull::i32ThrowMethod(int32_t /*i32Arg*/) {}

void ServiceASvNull::moduleAThrowMethod(std::unique_ptr< ::some::ns::ModuleA> /*modArg*/) {}

void ServiceASvNull::mixedMethod(std::string& /*_return*/, std::unique_ptr<std::string> /*strArg*/, int32_t /*i32Arg*/, std::unique_ptr< ::some::ns::ModuleB> /*modArg*/) {}

const char* ServiceAAsyncProcessor::getServiceName() {
  return "ServiceA";
}

folly::Optional<std::string> ServiceAAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void ServiceAAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool ServiceAAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> ServiceAAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> ServiceAAsyncProcessor::cacheKeyMap_ {};
const ServiceAAsyncProcessor::BinaryProtocolProcessMap& ServiceAAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const ServiceAAsyncProcessor::BinaryProtocolProcessMap ServiceAAsyncProcessor::binaryProcessMap_ {
  {"moduleAMethod", &ServiceAAsyncProcessor::_processInThread_moduleAMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"moduleBMethod", &ServiceAAsyncProcessor::_processInThread_moduleBMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"i32StrDoubleMethod", &ServiceAAsyncProcessor::_processInThread_i32StrDoubleMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"versioningMethod", &ServiceAAsyncProcessor::_processInThread_versioningMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"retI32Method", &ServiceAAsyncProcessor::_processInThread_retI32Method<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"retModAMethod", &ServiceAAsyncProcessor::_processInThread_retModAMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"throwMethod", &ServiceAAsyncProcessor::_processInThread_throwMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"multiThrowMethod", &ServiceAAsyncProcessor::_processInThread_multiThrowMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"i32ThrowMethod", &ServiceAAsyncProcessor::_processInThread_i32ThrowMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"moduleAThrowMethod", &ServiceAAsyncProcessor::_processInThread_moduleAThrowMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mixedMethod", &ServiceAAsyncProcessor::_processInThread_mixedMethod<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const ServiceAAsyncProcessor::CompactProtocolProcessMap& ServiceAAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const ServiceAAsyncProcessor::CompactProtocolProcessMap ServiceAAsyncProcessor::compactProcessMap_ {
  {"moduleAMethod", &ServiceAAsyncProcessor::_processInThread_moduleAMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"moduleBMethod", &ServiceAAsyncProcessor::_processInThread_moduleBMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"i32StrDoubleMethod", &ServiceAAsyncProcessor::_processInThread_i32StrDoubleMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"versioningMethod", &ServiceAAsyncProcessor::_processInThread_versioningMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"retI32Method", &ServiceAAsyncProcessor::_processInThread_retI32Method<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"retModAMethod", &ServiceAAsyncProcessor::_processInThread_retModAMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"throwMethod", &ServiceAAsyncProcessor::_processInThread_throwMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"multiThrowMethod", &ServiceAAsyncProcessor::_processInThread_multiThrowMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"i32ThrowMethod", &ServiceAAsyncProcessor::_processInThread_i32ThrowMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"moduleAThrowMethod", &ServiceAAsyncProcessor::_processInThread_moduleAThrowMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mixedMethod", &ServiceAAsyncProcessor::_processInThread_mixedMethod<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

const ServiceAAsyncProcessor::Frozen2ProtocolProcessMap& ServiceAAsyncProcessor::getFrozen2ProtocolProcessMap() {
  return frozen2ProcessMap_;
}

const ServiceAAsyncProcessor::Frozen2ProtocolProcessMap ServiceAAsyncProcessor::frozen2ProcessMap_ {
  {"moduleAMethod", &ServiceAAsyncProcessor::_processInThread_moduleAMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"moduleBMethod", &ServiceAAsyncProcessor::_processInThread_moduleBMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"i32StrDoubleMethod", &ServiceAAsyncProcessor::_processInThread_i32StrDoubleMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"versioningMethod", &ServiceAAsyncProcessor::_processInThread_versioningMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"retI32Method", &ServiceAAsyncProcessor::_processInThread_retI32Method<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"retModAMethod", &ServiceAAsyncProcessor::_processInThread_retModAMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"throwMethod", &ServiceAAsyncProcessor::_processInThread_throwMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"multiThrowMethod", &ServiceAAsyncProcessor::_processInThread_multiThrowMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"i32ThrowMethod", &ServiceAAsyncProcessor::_processInThread_i32ThrowMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"moduleAThrowMethod", &ServiceAAsyncProcessor::_processInThread_moduleAThrowMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
  {"mixedMethod", &ServiceAAsyncProcessor::_processInThread_mixedMethod<apache::thrift::Frozen2ProtocolReader, apache::thrift::Frozen2ProtocolWriter>},
};

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
