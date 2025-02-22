﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/connect-contact-lens/ConnectContactLensServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/connect-contact-lens/ConnectContactLensErrorMarshaller.h>

namespace Aws
{
namespace ConnectContactLens
{
  AWS_CONNECTCONTACTLENS_API extern const char SERVICE_NAME[];
  /**
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Operations_Amazon_Connect_Contact_Lens.html">Contact
   * Lens actions</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Types_Amazon_Connect_Contact_Lens.html">Contact
   * Lens data types</a> </p> </li> </ul> <p>Amazon Connect Contact Lens enables you
   * to analyze conversations between customer and agents, by using speech
   * transcription, natural language processing, and intelligent search capabilities.
   * It performs sentiment analysis, detects issues, and enables you to automatically
   * categorize contacts.</p> <p>Amazon Connect Contact Lens provides both real-time
   * and post-call analytics of customer-agent conversations. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/analyze-conversations.html">Analyze
   * conversations using speech analytics</a> in the <i>Amazon Connect Administrator
   * Guide</i>. </p>
   */
  class AWS_CONNECTCONTACTLENS_API ConnectContactLensClient : smithy::client::AwsSmithyClientT<Aws::ConnectContactLens::SERVICE_NAME,
      Aws::ConnectContactLens::ConnectContactLensClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      ConnectContactLensEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::ConnectContactLensErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<ConnectContactLensClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Connect Contact Lens"; }

      typedef ConnectContactLensClientConfiguration ClientConfigurationType;
      typedef ConnectContactLensEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration = Aws::ConnectContactLens::ConnectContactLensClientConfiguration(),
                                 std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration = Aws::ConnectContactLens::ConnectContactLensClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectContactLensClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration = Aws::ConnectContactLens::ConnectContactLensClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectContactLensClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectContactLensClient();

        /**
         * <p>Provides a list of analysis segments for a real-time analysis
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/ListRealtimeContactAnalysisSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRealtimeContactAnalysisSegmentsOutcome ListRealtimeContactAnalysisSegments(const Model::ListRealtimeContactAnalysisSegmentsRequest& request) const;

        /**
         * A Callable wrapper for ListRealtimeContactAnalysisSegments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRealtimeContactAnalysisSegmentsRequestT = Model::ListRealtimeContactAnalysisSegmentsRequest>
        Model::ListRealtimeContactAnalysisSegmentsOutcomeCallable ListRealtimeContactAnalysisSegmentsCallable(const ListRealtimeContactAnalysisSegmentsRequestT& request) const
        {
            return SubmitCallable(&ConnectContactLensClient::ListRealtimeContactAnalysisSegments, request);
        }

        /**
         * An Async wrapper for ListRealtimeContactAnalysisSegments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRealtimeContactAnalysisSegmentsRequestT = Model::ListRealtimeContactAnalysisSegmentsRequest>
        void ListRealtimeContactAnalysisSegmentsAsync(const ListRealtimeContactAnalysisSegmentsRequestT& request, const ListRealtimeContactAnalysisSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectContactLensClient::ListRealtimeContactAnalysisSegments, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectContactLensEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectContactLensClient>;

  };

} // namespace ConnectContactLens
} // namespace Aws
