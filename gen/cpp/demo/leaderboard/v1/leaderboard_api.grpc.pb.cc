// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: demo/leaderboard/v1/leaderboard_api.proto

#include "demo/leaderboard/v1/leaderboard_api.pb.h"
#include "demo/leaderboard/v1/leaderboard_api.grpc.pb.h"

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
namespace leaderboard {
namespace v1 {

static const char* LeaderboardAPI_method_names[] = {
  "/demo.leaderboard.v1.LeaderboardAPI/CreateLeaderboard",
  "/demo.leaderboard.v1.LeaderboardAPI/GetLeaderboard",
  "/demo.leaderboard.v1.LeaderboardAPI/DeleteLeaderboard",
  "/demo.leaderboard.v1.LeaderboardAPI/SubmitScores",
  "/demo.leaderboard.v1.LeaderboardAPI/GetScores",
  "/demo.leaderboard.v1.LeaderboardAPI/ResetScores",
};

std::unique_ptr< LeaderboardAPI::Stub> LeaderboardAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< LeaderboardAPI::Stub> stub(new LeaderboardAPI::Stub(channel));
  return stub;
}

LeaderboardAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateLeaderboard_(LeaderboardAPI_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetLeaderboard_(LeaderboardAPI_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteLeaderboard_(LeaderboardAPI_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SubmitScores_(LeaderboardAPI_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetScores_(LeaderboardAPI_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ResetScores_(LeaderboardAPI_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status LeaderboardAPI::Stub::CreateLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::CreateLeaderboardRequest& request, ::demo::leaderboard::v1::CreateLeaderboardResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateLeaderboard_, context, request, response);
}

void LeaderboardAPI::Stub::experimental_async::CreateLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::CreateLeaderboardRequest* request, ::demo::leaderboard::v1::CreateLeaderboardResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateLeaderboard_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::CreateLeaderboard(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::CreateLeaderboardResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateLeaderboard_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::CreateLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::CreateLeaderboardRequest* request, ::demo::leaderboard::v1::CreateLeaderboardResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateLeaderboard_, context, request, response, reactor);
}

void LeaderboardAPI::Stub::experimental_async::CreateLeaderboard(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::CreateLeaderboardResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateLeaderboard_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::CreateLeaderboardResponse>* LeaderboardAPI::Stub::AsyncCreateLeaderboardRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::CreateLeaderboardRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::CreateLeaderboardResponse>::Create(channel_.get(), cq, rpcmethod_CreateLeaderboard_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::CreateLeaderboardResponse>* LeaderboardAPI::Stub::PrepareAsyncCreateLeaderboardRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::CreateLeaderboardRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::CreateLeaderboardResponse>::Create(channel_.get(), cq, rpcmethod_CreateLeaderboard_, context, request, false);
}

::grpc::Status LeaderboardAPI::Stub::GetLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetLeaderboardRequest& request, ::demo::leaderboard::v1::GetLeaderboardResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetLeaderboard_, context, request, response);
}

void LeaderboardAPI::Stub::experimental_async::GetLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetLeaderboardRequest* request, ::demo::leaderboard::v1::GetLeaderboardResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetLeaderboard_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::GetLeaderboard(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::GetLeaderboardResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetLeaderboard_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::GetLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetLeaderboardRequest* request, ::demo::leaderboard::v1::GetLeaderboardResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetLeaderboard_, context, request, response, reactor);
}

void LeaderboardAPI::Stub::experimental_async::GetLeaderboard(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::GetLeaderboardResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetLeaderboard_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::GetLeaderboardResponse>* LeaderboardAPI::Stub::AsyncGetLeaderboardRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetLeaderboardRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::GetLeaderboardResponse>::Create(channel_.get(), cq, rpcmethod_GetLeaderboard_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::GetLeaderboardResponse>* LeaderboardAPI::Stub::PrepareAsyncGetLeaderboardRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetLeaderboardRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::GetLeaderboardResponse>::Create(channel_.get(), cq, rpcmethod_GetLeaderboard_, context, request, false);
}

::grpc::Status LeaderboardAPI::Stub::DeleteLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::DeleteLeaderboardRequest& request, ::demo::leaderboard::v1::DeleteLeaderboardResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteLeaderboard_, context, request, response);
}

void LeaderboardAPI::Stub::experimental_async::DeleteLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::DeleteLeaderboardRequest* request, ::demo::leaderboard::v1::DeleteLeaderboardResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteLeaderboard_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::DeleteLeaderboard(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::DeleteLeaderboardResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteLeaderboard_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::DeleteLeaderboard(::grpc::ClientContext* context, const ::demo::leaderboard::v1::DeleteLeaderboardRequest* request, ::demo::leaderboard::v1::DeleteLeaderboardResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteLeaderboard_, context, request, response, reactor);
}

void LeaderboardAPI::Stub::experimental_async::DeleteLeaderboard(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::DeleteLeaderboardResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteLeaderboard_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::DeleteLeaderboardResponse>* LeaderboardAPI::Stub::AsyncDeleteLeaderboardRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::DeleteLeaderboardRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::DeleteLeaderboardResponse>::Create(channel_.get(), cq, rpcmethod_DeleteLeaderboard_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::DeleteLeaderboardResponse>* LeaderboardAPI::Stub::PrepareAsyncDeleteLeaderboardRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::DeleteLeaderboardRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::DeleteLeaderboardResponse>::Create(channel_.get(), cq, rpcmethod_DeleteLeaderboard_, context, request, false);
}

::grpc::Status LeaderboardAPI::Stub::SubmitScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::SubmitScoresRequest& request, ::demo::leaderboard::v1::SubmitScoresResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SubmitScores_, context, request, response);
}

void LeaderboardAPI::Stub::experimental_async::SubmitScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::SubmitScoresRequest* request, ::demo::leaderboard::v1::SubmitScoresResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SubmitScores_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::SubmitScores(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::SubmitScoresResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SubmitScores_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::SubmitScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::SubmitScoresRequest* request, ::demo::leaderboard::v1::SubmitScoresResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SubmitScores_, context, request, response, reactor);
}

void LeaderboardAPI::Stub::experimental_async::SubmitScores(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::SubmitScoresResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SubmitScores_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::SubmitScoresResponse>* LeaderboardAPI::Stub::AsyncSubmitScoresRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::SubmitScoresRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::SubmitScoresResponse>::Create(channel_.get(), cq, rpcmethod_SubmitScores_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::SubmitScoresResponse>* LeaderboardAPI::Stub::PrepareAsyncSubmitScoresRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::SubmitScoresRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::SubmitScoresResponse>::Create(channel_.get(), cq, rpcmethod_SubmitScores_, context, request, false);
}

::grpc::Status LeaderboardAPI::Stub::GetScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetScoresRequest& request, ::demo::leaderboard::v1::GetScoresResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetScores_, context, request, response);
}

void LeaderboardAPI::Stub::experimental_async::GetScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetScoresRequest* request, ::demo::leaderboard::v1::GetScoresResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetScores_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::GetScores(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::GetScoresResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetScores_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::GetScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetScoresRequest* request, ::demo::leaderboard::v1::GetScoresResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetScores_, context, request, response, reactor);
}

void LeaderboardAPI::Stub::experimental_async::GetScores(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::GetScoresResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetScores_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::GetScoresResponse>* LeaderboardAPI::Stub::AsyncGetScoresRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetScoresRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::GetScoresResponse>::Create(channel_.get(), cq, rpcmethod_GetScores_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::GetScoresResponse>* LeaderboardAPI::Stub::PrepareAsyncGetScoresRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::GetScoresRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::GetScoresResponse>::Create(channel_.get(), cq, rpcmethod_GetScores_, context, request, false);
}

::grpc::Status LeaderboardAPI::Stub::ResetScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::ResetScoresRequest& request, ::demo::leaderboard::v1::ResetScoresResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ResetScores_, context, request, response);
}

void LeaderboardAPI::Stub::experimental_async::ResetScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::ResetScoresRequest* request, ::demo::leaderboard::v1::ResetScoresResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ResetScores_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::ResetScores(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::ResetScoresResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ResetScores_, context, request, response, std::move(f));
}

void LeaderboardAPI::Stub::experimental_async::ResetScores(::grpc::ClientContext* context, const ::demo::leaderboard::v1::ResetScoresRequest* request, ::demo::leaderboard::v1::ResetScoresResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ResetScores_, context, request, response, reactor);
}

void LeaderboardAPI::Stub::experimental_async::ResetScores(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::demo::leaderboard::v1::ResetScoresResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ResetScores_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::ResetScoresResponse>* LeaderboardAPI::Stub::AsyncResetScoresRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::ResetScoresRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::ResetScoresResponse>::Create(channel_.get(), cq, rpcmethod_ResetScores_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::demo::leaderboard::v1::ResetScoresResponse>* LeaderboardAPI::Stub::PrepareAsyncResetScoresRaw(::grpc::ClientContext* context, const ::demo::leaderboard::v1::ResetScoresRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::demo::leaderboard::v1::ResetScoresResponse>::Create(channel_.get(), cq, rpcmethod_ResetScores_, context, request, false);
}

LeaderboardAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LeaderboardAPI_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LeaderboardAPI::Service, ::demo::leaderboard::v1::CreateLeaderboardRequest, ::demo::leaderboard::v1::CreateLeaderboardResponse>(
          std::mem_fn(&LeaderboardAPI::Service::CreateLeaderboard), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LeaderboardAPI_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LeaderboardAPI::Service, ::demo::leaderboard::v1::GetLeaderboardRequest, ::demo::leaderboard::v1::GetLeaderboardResponse>(
          std::mem_fn(&LeaderboardAPI::Service::GetLeaderboard), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LeaderboardAPI_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LeaderboardAPI::Service, ::demo::leaderboard::v1::DeleteLeaderboardRequest, ::demo::leaderboard::v1::DeleteLeaderboardResponse>(
          std::mem_fn(&LeaderboardAPI::Service::DeleteLeaderboard), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LeaderboardAPI_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LeaderboardAPI::Service, ::demo::leaderboard::v1::SubmitScoresRequest, ::demo::leaderboard::v1::SubmitScoresResponse>(
          std::mem_fn(&LeaderboardAPI::Service::SubmitScores), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LeaderboardAPI_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LeaderboardAPI::Service, ::demo::leaderboard::v1::GetScoresRequest, ::demo::leaderboard::v1::GetScoresResponse>(
          std::mem_fn(&LeaderboardAPI::Service::GetScores), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LeaderboardAPI_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LeaderboardAPI::Service, ::demo::leaderboard::v1::ResetScoresRequest, ::demo::leaderboard::v1::ResetScoresResponse>(
          std::mem_fn(&LeaderboardAPI::Service::ResetScores), this)));
}

LeaderboardAPI::Service::~Service() {
}

::grpc::Status LeaderboardAPI::Service::CreateLeaderboard(::grpc::ServerContext* context, const ::demo::leaderboard::v1::CreateLeaderboardRequest* request, ::demo::leaderboard::v1::CreateLeaderboardResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LeaderboardAPI::Service::GetLeaderboard(::grpc::ServerContext* context, const ::demo::leaderboard::v1::GetLeaderboardRequest* request, ::demo::leaderboard::v1::GetLeaderboardResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LeaderboardAPI::Service::DeleteLeaderboard(::grpc::ServerContext* context, const ::demo::leaderboard::v1::DeleteLeaderboardRequest* request, ::demo::leaderboard::v1::DeleteLeaderboardResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LeaderboardAPI::Service::SubmitScores(::grpc::ServerContext* context, const ::demo::leaderboard::v1::SubmitScoresRequest* request, ::demo::leaderboard::v1::SubmitScoresResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LeaderboardAPI::Service::GetScores(::grpc::ServerContext* context, const ::demo::leaderboard::v1::GetScoresRequest* request, ::demo::leaderboard::v1::GetScoresResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LeaderboardAPI::Service::ResetScores(::grpc::ServerContext* context, const ::demo::leaderboard::v1::ResetScoresRequest* request, ::demo::leaderboard::v1::ResetScoresResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace demo
}  // namespace leaderboard
}  // namespace v1

