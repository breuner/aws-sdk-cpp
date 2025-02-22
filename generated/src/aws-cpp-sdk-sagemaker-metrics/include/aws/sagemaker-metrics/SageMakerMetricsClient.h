﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/sagemaker-metrics/SageMakerMetricsServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/sagemaker-metrics/SageMakerMetricsErrorMarshaller.h>

namespace Aws
{
namespace SageMakerMetrics
{
  AWS_SAGEMAKERMETRICS_API extern const char SERVICE_NAME[];
  /**
   * <p>Contains all data plane API operations and data types for Amazon SageMaker
   * Metrics. Use these APIs to put and retrieve (get) features related to your
   * training run.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_metrics_BatchPutMetrics.html">BatchPutMetrics</a>
   * </p> </li> </ul>
   */
  class AWS_SAGEMAKERMETRICS_API SageMakerMetricsClient : smithy::client::AwsSmithyClientT<Aws::SageMakerMetrics::SERVICE_NAME,
      Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      SageMakerMetricsEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::SageMakerMetricsErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<SageMakerMetricsClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "SageMaker Metrics"; }

      typedef SageMakerMetricsClientConfiguration ClientConfigurationType;
      typedef SageMakerMetricsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration& clientConfiguration = Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration(),
                               std::shared_ptr<SageMakerMetricsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<SageMakerMetricsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration& clientConfiguration = Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerMetricsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<SageMakerMetricsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration& clientConfiguration = Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerMetricsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerMetricsClient();

        /**
         * <p>Used to retrieve training metrics from SageMaker.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-metrics-2022-09-30/BatchGetMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetMetricsOutcome BatchGetMetrics(const Model::BatchGetMetricsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetMetricsRequestT = Model::BatchGetMetricsRequest>
        Model::BatchGetMetricsOutcomeCallable BatchGetMetricsCallable(const BatchGetMetricsRequestT& request) const
        {
            return SubmitCallable(&SageMakerMetricsClient::BatchGetMetrics, request);
        }

        /**
         * An Async wrapper for BatchGetMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetMetricsRequestT = Model::BatchGetMetricsRequest>
        void BatchGetMetricsAsync(const BatchGetMetricsRequestT& request, const BatchGetMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerMetricsClient::BatchGetMetrics, request, handler, context);
        }

        /**
         * <p>Used to ingest training metrics into SageMaker. These metrics can be
         * visualized in SageMaker Studio. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-metrics-2022-09-30/BatchPutMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutMetricsOutcome BatchPutMetrics(const Model::BatchPutMetricsRequest& request) const;

        /**
         * A Callable wrapper for BatchPutMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutMetricsRequestT = Model::BatchPutMetricsRequest>
        Model::BatchPutMetricsOutcomeCallable BatchPutMetricsCallable(const BatchPutMetricsRequestT& request) const
        {
            return SubmitCallable(&SageMakerMetricsClient::BatchPutMetrics, request);
        }

        /**
         * An Async wrapper for BatchPutMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutMetricsRequestT = Model::BatchPutMetricsRequest>
        void BatchPutMetricsAsync(const BatchPutMetricsRequestT& request, const BatchPutMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerMetricsClient::BatchPutMetrics, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerMetricsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerMetricsClient>;

  };

} // namespace SageMakerMetrics
} // namespace Aws
