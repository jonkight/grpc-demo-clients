// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: demo/leaderboard/v1/leaderboard_api.proto
// </auto-generated>
// Original file comments:
// Copyright (c) 2020 jonkight.
//
#pragma warning disable 0414, 1591
#region Designer generated code

using grpc = global::Grpc.Core;

namespace Demo.Leaderboard.V1 {
  /// <summary>
  /// Service API for interacting with leaderboards.
  /// </summary>
  public static partial class LeaderboardAPI
  {
    static readonly string __ServiceName = "demo.leaderboard.v1.LeaderboardAPI";

    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.CreateLeaderboardRequest> __Marshaller_demo_leaderboard_v1_CreateLeaderboardRequest = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.CreateLeaderboardRequest.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.CreateLeaderboardResponse> __Marshaller_demo_leaderboard_v1_CreateLeaderboardResponse = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.CreateLeaderboardResponse.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.GetLeaderboardRequest> __Marshaller_demo_leaderboard_v1_GetLeaderboardRequest = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.GetLeaderboardRequest.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.GetLeaderboardResponse> __Marshaller_demo_leaderboard_v1_GetLeaderboardResponse = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.GetLeaderboardResponse.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.DeleteLeaderboardRequest> __Marshaller_demo_leaderboard_v1_DeleteLeaderboardRequest = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.DeleteLeaderboardRequest.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.DeleteLeaderboardResponse> __Marshaller_demo_leaderboard_v1_DeleteLeaderboardResponse = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.DeleteLeaderboardResponse.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.SubmitScoresRequest> __Marshaller_demo_leaderboard_v1_SubmitScoresRequest = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.SubmitScoresRequest.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.SubmitScoresResponse> __Marshaller_demo_leaderboard_v1_SubmitScoresResponse = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.SubmitScoresResponse.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.GetScoresRequest> __Marshaller_demo_leaderboard_v1_GetScoresRequest = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.GetScoresRequest.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.GetScoresResponse> __Marshaller_demo_leaderboard_v1_GetScoresResponse = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.GetScoresResponse.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.ResetScoresRequest> __Marshaller_demo_leaderboard_v1_ResetScoresRequest = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.ResetScoresRequest.Parser.ParseFrom);
    static readonly grpc::Marshaller<global::Demo.Leaderboard.V1.ResetScoresResponse> __Marshaller_demo_leaderboard_v1_ResetScoresResponse = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Demo.Leaderboard.V1.ResetScoresResponse.Parser.ParseFrom);

    static readonly grpc::Method<global::Demo.Leaderboard.V1.CreateLeaderboardRequest, global::Demo.Leaderboard.V1.CreateLeaderboardResponse> __Method_CreateLeaderboard = new grpc::Method<global::Demo.Leaderboard.V1.CreateLeaderboardRequest, global::Demo.Leaderboard.V1.CreateLeaderboardResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "CreateLeaderboard",
        __Marshaller_demo_leaderboard_v1_CreateLeaderboardRequest,
        __Marshaller_demo_leaderboard_v1_CreateLeaderboardResponse);

    static readonly grpc::Method<global::Demo.Leaderboard.V1.GetLeaderboardRequest, global::Demo.Leaderboard.V1.GetLeaderboardResponse> __Method_GetLeaderboard = new grpc::Method<global::Demo.Leaderboard.V1.GetLeaderboardRequest, global::Demo.Leaderboard.V1.GetLeaderboardResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "GetLeaderboard",
        __Marshaller_demo_leaderboard_v1_GetLeaderboardRequest,
        __Marshaller_demo_leaderboard_v1_GetLeaderboardResponse);

    static readonly grpc::Method<global::Demo.Leaderboard.V1.DeleteLeaderboardRequest, global::Demo.Leaderboard.V1.DeleteLeaderboardResponse> __Method_DeleteLeaderboard = new grpc::Method<global::Demo.Leaderboard.V1.DeleteLeaderboardRequest, global::Demo.Leaderboard.V1.DeleteLeaderboardResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "DeleteLeaderboard",
        __Marshaller_demo_leaderboard_v1_DeleteLeaderboardRequest,
        __Marshaller_demo_leaderboard_v1_DeleteLeaderboardResponse);

    static readonly grpc::Method<global::Demo.Leaderboard.V1.SubmitScoresRequest, global::Demo.Leaderboard.V1.SubmitScoresResponse> __Method_SubmitScores = new grpc::Method<global::Demo.Leaderboard.V1.SubmitScoresRequest, global::Demo.Leaderboard.V1.SubmitScoresResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "SubmitScores",
        __Marshaller_demo_leaderboard_v1_SubmitScoresRequest,
        __Marshaller_demo_leaderboard_v1_SubmitScoresResponse);

    static readonly grpc::Method<global::Demo.Leaderboard.V1.GetScoresRequest, global::Demo.Leaderboard.V1.GetScoresResponse> __Method_GetScores = new grpc::Method<global::Demo.Leaderboard.V1.GetScoresRequest, global::Demo.Leaderboard.V1.GetScoresResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "GetScores",
        __Marshaller_demo_leaderboard_v1_GetScoresRequest,
        __Marshaller_demo_leaderboard_v1_GetScoresResponse);

    static readonly grpc::Method<global::Demo.Leaderboard.V1.ResetScoresRequest, global::Demo.Leaderboard.V1.ResetScoresResponse> __Method_ResetScores = new grpc::Method<global::Demo.Leaderboard.V1.ResetScoresRequest, global::Demo.Leaderboard.V1.ResetScoresResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "ResetScores",
        __Marshaller_demo_leaderboard_v1_ResetScoresRequest,
        __Marshaller_demo_leaderboard_v1_ResetScoresResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Demo.Leaderboard.V1.LeaderboardApiReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of LeaderboardAPI</summary>
    [grpc::BindServiceMethod(typeof(LeaderboardAPI), "BindService")]
    public abstract partial class LeaderboardAPIBase
    {
      /// <summary>
      /// Creates a leaderboard.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      public virtual global::System.Threading.Tasks.Task<global::Demo.Leaderboard.V1.CreateLeaderboardResponse> CreateLeaderboard(global::Demo.Leaderboard.V1.CreateLeaderboardRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Retrieves a leaderboard definition.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      public virtual global::System.Threading.Tasks.Task<global::Demo.Leaderboard.V1.GetLeaderboardResponse> GetLeaderboard(global::Demo.Leaderboard.V1.GetLeaderboardRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Deletes a leaderboard definition.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      public virtual global::System.Threading.Tasks.Task<global::Demo.Leaderboard.V1.DeleteLeaderboardResponse> DeleteLeaderboard(global::Demo.Leaderboard.V1.DeleteLeaderboardRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Submit scores to a leaderboard.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      public virtual global::System.Threading.Tasks.Task<global::Demo.Leaderboard.V1.SubmitScoresResponse> SubmitScores(global::Demo.Leaderboard.V1.SubmitScoresRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Retrieves the scores from a leaderboard.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      public virtual global::System.Threading.Tasks.Task<global::Demo.Leaderboard.V1.GetScoresResponse> GetScores(global::Demo.Leaderboard.V1.GetScoresRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Resets a leaderboard by removing all scores.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      public virtual global::System.Threading.Tasks.Task<global::Demo.Leaderboard.V1.ResetScoresResponse> ResetScores(global::Demo.Leaderboard.V1.ResetScoresRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

    }

    /// <summary>Client for LeaderboardAPI</summary>
    public partial class LeaderboardAPIClient : grpc::ClientBase<LeaderboardAPIClient>
    {
      /// <summary>Creates a new client for LeaderboardAPI</summary>
      /// <param name="channel">The channel to use to make remote calls.</param>
      public LeaderboardAPIClient(grpc::ChannelBase channel) : base(channel)
      {
      }
      /// <summary>Creates a new client for LeaderboardAPI that uses a custom <c>CallInvoker</c>.</summary>
      /// <param name="callInvoker">The callInvoker to use to make remote calls.</param>
      public LeaderboardAPIClient(grpc::CallInvoker callInvoker) : base(callInvoker)
      {
      }
      /// <summary>Protected parameterless constructor to allow creation of test doubles.</summary>
      protected LeaderboardAPIClient() : base()
      {
      }
      /// <summary>Protected constructor to allow creation of configured clients.</summary>
      /// <param name="configuration">The client configuration.</param>
      protected LeaderboardAPIClient(ClientBaseConfiguration configuration) : base(configuration)
      {
      }

      /// <summary>
      /// Creates a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.CreateLeaderboardResponse CreateLeaderboard(global::Demo.Leaderboard.V1.CreateLeaderboardRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreateLeaderboard(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Creates a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.CreateLeaderboardResponse CreateLeaderboard(global::Demo.Leaderboard.V1.CreateLeaderboardRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_CreateLeaderboard, null, options, request);
      }
      /// <summary>
      /// Creates a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.CreateLeaderboardResponse> CreateLeaderboardAsync(global::Demo.Leaderboard.V1.CreateLeaderboardRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreateLeaderboardAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Creates a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.CreateLeaderboardResponse> CreateLeaderboardAsync(global::Demo.Leaderboard.V1.CreateLeaderboardRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_CreateLeaderboard, null, options, request);
      }
      /// <summary>
      /// Retrieves a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.GetLeaderboardResponse GetLeaderboard(global::Demo.Leaderboard.V1.GetLeaderboardRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return GetLeaderboard(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.GetLeaderboardResponse GetLeaderboard(global::Demo.Leaderboard.V1.GetLeaderboardRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_GetLeaderboard, null, options, request);
      }
      /// <summary>
      /// Retrieves a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.GetLeaderboardResponse> GetLeaderboardAsync(global::Demo.Leaderboard.V1.GetLeaderboardRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return GetLeaderboardAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.GetLeaderboardResponse> GetLeaderboardAsync(global::Demo.Leaderboard.V1.GetLeaderboardRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_GetLeaderboard, null, options, request);
      }
      /// <summary>
      /// Deletes a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.DeleteLeaderboardResponse DeleteLeaderboard(global::Demo.Leaderboard.V1.DeleteLeaderboardRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return DeleteLeaderboard(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Deletes a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.DeleteLeaderboardResponse DeleteLeaderboard(global::Demo.Leaderboard.V1.DeleteLeaderboardRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_DeleteLeaderboard, null, options, request);
      }
      /// <summary>
      /// Deletes a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.DeleteLeaderboardResponse> DeleteLeaderboardAsync(global::Demo.Leaderboard.V1.DeleteLeaderboardRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return DeleteLeaderboardAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Deletes a leaderboard definition.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.DeleteLeaderboardResponse> DeleteLeaderboardAsync(global::Demo.Leaderboard.V1.DeleteLeaderboardRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_DeleteLeaderboard, null, options, request);
      }
      /// <summary>
      /// Submit scores to a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.SubmitScoresResponse SubmitScores(global::Demo.Leaderboard.V1.SubmitScoresRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return SubmitScores(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Submit scores to a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.SubmitScoresResponse SubmitScores(global::Demo.Leaderboard.V1.SubmitScoresRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_SubmitScores, null, options, request);
      }
      /// <summary>
      /// Submit scores to a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.SubmitScoresResponse> SubmitScoresAsync(global::Demo.Leaderboard.V1.SubmitScoresRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return SubmitScoresAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Submit scores to a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.SubmitScoresResponse> SubmitScoresAsync(global::Demo.Leaderboard.V1.SubmitScoresRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_SubmitScores, null, options, request);
      }
      /// <summary>
      /// Retrieves the scores from a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.GetScoresResponse GetScores(global::Demo.Leaderboard.V1.GetScoresRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return GetScores(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves the scores from a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.GetScoresResponse GetScores(global::Demo.Leaderboard.V1.GetScoresRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_GetScores, null, options, request);
      }
      /// <summary>
      /// Retrieves the scores from a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.GetScoresResponse> GetScoresAsync(global::Demo.Leaderboard.V1.GetScoresRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return GetScoresAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves the scores from a leaderboard.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.GetScoresResponse> GetScoresAsync(global::Demo.Leaderboard.V1.GetScoresRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_GetScores, null, options, request);
      }
      /// <summary>
      /// Resets a leaderboard by removing all scores.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.ResetScoresResponse ResetScores(global::Demo.Leaderboard.V1.ResetScoresRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return ResetScores(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Resets a leaderboard by removing all scores.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      public virtual global::Demo.Leaderboard.V1.ResetScoresResponse ResetScores(global::Demo.Leaderboard.V1.ResetScoresRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_ResetScores, null, options, request);
      }
      /// <summary>
      /// Resets a leaderboard by removing all scores.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.ResetScoresResponse> ResetScoresAsync(global::Demo.Leaderboard.V1.ResetScoresRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return ResetScoresAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Resets a leaderboard by removing all scores.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      public virtual grpc::AsyncUnaryCall<global::Demo.Leaderboard.V1.ResetScoresResponse> ResetScoresAsync(global::Demo.Leaderboard.V1.ResetScoresRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_ResetScores, null, options, request);
      }
      /// <summary>Creates a new instance of client from given <c>ClientBaseConfiguration</c>.</summary>
      protected override LeaderboardAPIClient NewInstance(ClientBaseConfiguration configuration)
      {
        return new LeaderboardAPIClient(configuration);
      }
    }

    /// <summary>Creates service definition that can be registered with a server</summary>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    public static grpc::ServerServiceDefinition BindService(LeaderboardAPIBase serviceImpl)
    {
      return grpc::ServerServiceDefinition.CreateBuilder()
          .AddMethod(__Method_CreateLeaderboard, serviceImpl.CreateLeaderboard)
          .AddMethod(__Method_GetLeaderboard, serviceImpl.GetLeaderboard)
          .AddMethod(__Method_DeleteLeaderboard, serviceImpl.DeleteLeaderboard)
          .AddMethod(__Method_SubmitScores, serviceImpl.SubmitScores)
          .AddMethod(__Method_GetScores, serviceImpl.GetScores)
          .AddMethod(__Method_ResetScores, serviceImpl.ResetScores).Build();
    }

    /// <summary>Register service method with a service binder with or without implementation. Useful when customizing the  service binding logic.
    /// Note: this method is part of an experimental API that can change or be removed without any prior notice.</summary>
    /// <param name="serviceBinder">Service methods will be bound by calling <c>AddMethod</c> on this object.</param>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    public static void BindService(grpc::ServiceBinderBase serviceBinder, LeaderboardAPIBase serviceImpl)
    {
      serviceBinder.AddMethod(__Method_CreateLeaderboard, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Demo.Leaderboard.V1.CreateLeaderboardRequest, global::Demo.Leaderboard.V1.CreateLeaderboardResponse>(serviceImpl.CreateLeaderboard));
      serviceBinder.AddMethod(__Method_GetLeaderboard, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Demo.Leaderboard.V1.GetLeaderboardRequest, global::Demo.Leaderboard.V1.GetLeaderboardResponse>(serviceImpl.GetLeaderboard));
      serviceBinder.AddMethod(__Method_DeleteLeaderboard, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Demo.Leaderboard.V1.DeleteLeaderboardRequest, global::Demo.Leaderboard.V1.DeleteLeaderboardResponse>(serviceImpl.DeleteLeaderboard));
      serviceBinder.AddMethod(__Method_SubmitScores, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Demo.Leaderboard.V1.SubmitScoresRequest, global::Demo.Leaderboard.V1.SubmitScoresResponse>(serviceImpl.SubmitScores));
      serviceBinder.AddMethod(__Method_GetScores, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Demo.Leaderboard.V1.GetScoresRequest, global::Demo.Leaderboard.V1.GetScoresResponse>(serviceImpl.GetScores));
      serviceBinder.AddMethod(__Method_ResetScores, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Demo.Leaderboard.V1.ResetScoresRequest, global::Demo.Leaderboard.V1.ResetScoresResponse>(serviceImpl.ResetScores));
    }

  }
}
#endregion