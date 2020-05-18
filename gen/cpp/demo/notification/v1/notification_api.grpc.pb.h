// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: demo/notification/v1/notification_api.proto
// Original file comments:
// Copyright (c) 2020 jonkight.
//
#ifndef GRPC_demo_2fnotification_2fv1_2fnotification_5fapi_2eproto__INCLUDED
#define GRPC_demo_2fnotification_2fv1_2fnotification_5fapi_2eproto__INCLUDED

#include "demo/notification/v1/notification_api.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

namespace demo {
namespace notification {
namespace v1 {

// Service API for receiving notifications from the platform.
class NotificationApi final {
 public:
  static constexpr char const* service_full_name() {
    return "demo.notification.v1.NotificationApi";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::demo::notification::v1::Notification>> Subscribe(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::demo::notification::v1::Notification>>(SubscribeRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::demo::notification::v1::Notification>> AsyncSubscribe(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::demo::notification::v1::Notification>>(AsyncSubscribeRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::demo::notification::v1::Notification>> PrepareAsyncSubscribe(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::demo::notification::v1::Notification>>(PrepareAsyncSubscribeRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Subscribe(::grpc::ClientContext* context, ::demo::notification::v1::SubscribeRequest* request, ::grpc::experimental::ClientReadReactor< ::demo::notification::v1::Notification>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderInterface< ::demo::notification::v1::Notification>* SubscribeRaw(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::demo::notification::v1::Notification>* AsyncSubscribeRaw(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::demo::notification::v1::Notification>* PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::demo::notification::v1::Notification>> Subscribe(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::demo::notification::v1::Notification>>(SubscribeRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::demo::notification::v1::Notification>> AsyncSubscribe(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::demo::notification::v1::Notification>>(AsyncSubscribeRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::demo::notification::v1::Notification>> PrepareAsyncSubscribe(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::demo::notification::v1::Notification>>(PrepareAsyncSubscribeRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Subscribe(::grpc::ClientContext* context, ::demo::notification::v1::SubscribeRequest* request, ::grpc::experimental::ClientReadReactor< ::demo::notification::v1::Notification>* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReader< ::demo::notification::v1::Notification>* SubscribeRaw(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request) override;
    ::grpc::ClientAsyncReader< ::demo::notification::v1::Notification>* AsyncSubscribeRaw(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::demo::notification::v1::Notification>* PrepareAsyncSubscribeRaw(::grpc::ClientContext* context, const ::demo::notification::v1::SubscribeRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Subscribe_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Subscribe(::grpc::ServerContext* context, const ::demo::notification::v1::SubscribeRequest* request, ::grpc::ServerWriter< ::demo::notification::v1::Notification>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Subscribe() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* /*context*/, const ::demo::notification::v1::SubscribeRequest* /*request*/, ::grpc::ServerWriter< ::demo::notification::v1::Notification>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribe(::grpc::ServerContext* context, ::demo::notification::v1::SubscribeRequest* request, ::grpc::ServerAsyncWriter< ::demo::notification::v1::Notification>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Subscribe<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Subscribe() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackServerStreamingHandler< ::demo::notification::v1::SubscribeRequest, ::demo::notification::v1::Notification>(
          [this] { return this->Subscribe(); }));
    }
    ~ExperimentalWithCallbackMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* /*context*/, const ::demo::notification::v1::SubscribeRequest* /*request*/, ::grpc::ServerWriter< ::demo::notification::v1::Notification>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::demo::notification::v1::SubscribeRequest, ::demo::notification::v1::Notification>* Subscribe() {
      return new ::grpc_impl::internal::UnimplementedWriteReactor<
        ::demo::notification::v1::SubscribeRequest, ::demo::notification::v1::Notification>;}
  };
  typedef ExperimentalWithCallbackMethod_Subscribe<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Subscribe() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* /*context*/, const ::demo::notification::v1::SubscribeRequest* /*request*/, ::grpc::ServerWriter< ::demo::notification::v1::Notification>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Subscribe() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* /*context*/, const ::demo::notification::v1::SubscribeRequest* /*request*/, ::grpc::ServerWriter< ::demo::notification::v1::Notification>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribe(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Subscribe() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->Subscribe(); }));
    }
    ~ExperimentalWithRawCallbackMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* /*context*/, const ::demo::notification::v1::SubscribeRequest* /*request*/, ::grpc::ServerWriter< ::demo::notification::v1::Notification>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* Subscribe() {
      return new ::grpc_impl::internal::UnimplementedWriteReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_Subscribe() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::demo::notification::v1::SubscribeRequest, ::demo::notification::v1::Notification>(std::bind(&WithSplitStreamingMethod_Subscribe<BaseClass>::StreamedSubscribe, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_Subscribe() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* /*context*/, const ::demo::notification::v1::SubscribeRequest* /*request*/, ::grpc::ServerWriter< ::demo::notification::v1::Notification>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedSubscribe(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::demo::notification::v1::SubscribeRequest,::demo::notification::v1::Notification>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_Subscribe<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_Subscribe<Service > StreamedService;
};

}  // namespace v1
}  // namespace notification
}  // namespace demo


#endif  // GRPC_demo_2fnotification_2fv1_2fnotification_5fapi_2eproto__INCLUDED