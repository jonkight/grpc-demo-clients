// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: demo/greeter/v1/geeter_api.proto

#include "demo/greeter/v1/geeter_api.pb.h"
#include "demo/greeter/v1/geeter_api.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace demo {
namespace greeter {
namespace v1 {

static const char* GreeterAPI_method_names[] = {
  "/demo.greeter.v1.GreeterAPI/SayHello",
};

std::unique_ptr< GreeterAPI::Stub> GreeterAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GreeterAPI::Stub> stub(new GreeterAPI::Stub(channel));
  return stub;
}

GreeterAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SayHello_(GreeterAPI_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GreeterAPI::Stub::SayHello(::grpc::ClientContext* context, const ::demo::greeter::v1::SayHelloRequest& request, ::demo::greeter::v1::SayHelloResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SayHello_, context, request, response);
}

void GreeterAPI::Stub::experimental_async::SayHello(::grpc::ClientContext* context, const ::demo::greeter::v1::SayHelloRequest* request, ::demo::greeter::v1::SayHelloResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, std::move(f));
}

void GreeterAPI::Stub::experimental_async::SayHello(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::greeter::v1::SayHelloResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, std::move(f));
}

void GreeterAPI::Stub::experimental_async::SayHello(::grpc::ClientContext* context, const ::demo::greeter::v1::SayHelloRequest* request, ::demo::greeter::v1::SayHelloResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, reactor);
}

void GreeterAPI::Stub::experimental_async::SayHello(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::greeter::v1::SayHelloResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::demo::greeter::v1::SayHelloResponse>* GreeterAPI::Stub::AsyncSayHelloRaw(::grpc::ClientContext* context, const ::demo::greeter::v1::SayHelloRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::greeter::v1::SayHelloResponse>::Create(channel_.get(), cq, rpcmethod_SayHello_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::demo::greeter::v1::SayHelloResponse>* GreeterAPI::Stub::PrepareAsyncSayHelloRaw(::grpc::ClientContext* context, const ::demo::greeter::v1::SayHelloRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::greeter::v1::SayHelloResponse>::Create(channel_.get(), cq, rpcmethod_SayHello_, context, request, false);
}

GreeterAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GreeterAPI_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GreeterAPI::Service, ::demo::greeter::v1::SayHelloRequest, ::demo::greeter::v1::SayHelloResponse>(
          std::mem_fn(&GreeterAPI::Service::SayHello), this)));
}

GreeterAPI::Service::~Service() {
}

::grpc::Status GreeterAPI::Service::SayHello(::grpc::ServerContext* context, const ::demo::greeter::v1::SayHelloRequest* request, ::demo::greeter::v1::SayHelloResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace demo
}  // namespace greeter
}  // namespace v1

