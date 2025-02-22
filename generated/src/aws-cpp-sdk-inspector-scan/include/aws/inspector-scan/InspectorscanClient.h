﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/inspector-scan/InspectorscanServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/inspector-scan/InspectorscanErrorMarshaller.h>

namespace Aws
{
namespace inspectorscan
{
  AWS_INSPECTORSCAN_API extern const char SERVICE_NAME[];
  /**
   * <p>Amazon Inspector Scan is a vulnerability discovery service that scans a
   * provided Software Bill of Materials (SBOM) for security vulnerabilities.</p>
   */
  class AWS_INSPECTORSCAN_API InspectorscanClient : smithy::client::AwsSmithyClientT<Aws::inspectorscan::SERVICE_NAME,
      Aws::inspectorscan::InspectorscanClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      InspectorscanEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::InspectorscanErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<InspectorscanClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Inspector Scan"; }

      typedef InspectorscanClientConfiguration ClientConfigurationType;
      typedef InspectorscanEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorscanClient(const Aws::inspectorscan::InspectorscanClientConfiguration& clientConfiguration = Aws::inspectorscan::InspectorscanClientConfiguration(),
                            std::shared_ptr<InspectorscanEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorscanClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<InspectorscanEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::inspectorscan::InspectorscanClientConfiguration& clientConfiguration = Aws::inspectorscan::InspectorscanClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InspectorscanClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<InspectorscanEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::inspectorscan::InspectorscanClientConfiguration& clientConfiguration = Aws::inspectorscan::InspectorscanClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorscanClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorscanClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InspectorscanClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~InspectorscanClient();

        /**
         * <p>Scans a provided CycloneDX 1.5 SBOM and reports on any vulnerabilities
         * discovered in that SBOM. You can generate compatible SBOMs for your resources
         * using the <a href="">Amazon Inspector SBOM generator</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-scan-2023-08-08/ScanSbom">AWS
         * API Reference</a></p>
         */
        virtual Model::ScanSbomOutcome ScanSbom(const Model::ScanSbomRequest& request) const;

        /**
         * A Callable wrapper for ScanSbom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ScanSbomRequestT = Model::ScanSbomRequest>
        Model::ScanSbomOutcomeCallable ScanSbomCallable(const ScanSbomRequestT& request) const
        {
            return SubmitCallable(&InspectorscanClient::ScanSbom, request);
        }

        /**
         * An Async wrapper for ScanSbom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ScanSbomRequestT = Model::ScanSbomRequest>
        void ScanSbomAsync(const ScanSbomRequestT& request, const ScanSbomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorscanClient::ScanSbom, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<InspectorscanEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<InspectorscanClient>;

  };

} // namespace inspectorscan
} // namespace Aws
