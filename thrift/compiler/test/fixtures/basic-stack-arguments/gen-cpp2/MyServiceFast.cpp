/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceFast.h"
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceFast.tcc"
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServiceFastSvIf::getProcessor() {
  return std::make_unique<MyServiceFastAsyncProcessor>(this);
}


void MyServiceFastSvIf::async_eb_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t /*id*/) {
  callback->exception(apache::thrift::TApplicationException("Function hasDataById is unimplemented"));
}

void MyServiceFastSvIf::async_eb_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<::std::string>> callback, int64_t /*id*/) {
  callback->exception(apache::thrift::TApplicationException("Function getDataById is unimplemented"));
}

void MyServiceFastSvIf::async_eb_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t /*id*/, const ::std::string& /*data*/) {
  callback->exception(apache::thrift::TApplicationException("Function putDataById is unimplemented"));
}

void MyServiceFastSvIf::async_eb_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> /*callback*/, int64_t /*id*/, const ::std::string& /*data*/) {
  LOG(DFATAL) << "Function lobDataById is unimplemented";
}



const char* MyServiceFastAsyncProcessor::getServiceName() {
  return "MyServiceFast";
}

void MyServiceFastAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyServiceFastSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void MyServiceFastAsyncProcessor::processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> MyServiceFastAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const MyServiceFastAsyncProcessor::ProcessMap& MyServiceFastAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyServiceFastAsyncProcessor::ProcessMap MyServiceFastAsyncProcessor::binaryProcessMap_ {
  {"hasDataById", &MyServiceFastAsyncProcessor::process_hasDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getDataById", &MyServiceFastAsyncProcessor::process_getDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"putDataById", &MyServiceFastAsyncProcessor::process_putDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"lobDataById", &MyServiceFastAsyncProcessor::process_lobDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyServiceFastAsyncProcessor::ProcessMap& MyServiceFastAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServiceFastAsyncProcessor::ProcessMap MyServiceFastAsyncProcessor::compactProcessMap_ {
  {"hasDataById", &MyServiceFastAsyncProcessor::process_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getDataById", &MyServiceFastAsyncProcessor::process_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"putDataById", &MyServiceFastAsyncProcessor::process_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"lobDataById", &MyServiceFastAsyncProcessor::process_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
