﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrorMarshaller.h>

namespace Aws
{
namespace EC2InstanceConnect
{
  AWS_EC2INSTANCECONNECT_API extern const char SERVICE_NAME[];
  /**
   * <p>This is the <i> Amazon EC2 Instance Connect API Reference</i>. It provides
   * descriptions, syntax, and usage examples for each of the actions for Amazon EC2
   * Instance Connect. Amazon EC2 Instance Connect enables system administrators to
   * publish one-time use SSH public keys to EC2, providing users a simple and secure
   * way to connect to their instances.</p> <p>To view the Amazon EC2 Instance
   * Connect content in the <i> Amazon EC2 User Guide</i>, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Connect-using-EC2-Instance-Connect.html">Connect
   * to your Linux instance using EC2 Instance Connect</a>.</p> <p>For Amazon EC2
   * APIs, see the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Welcome.html">Amazon
   * EC2 API Reference</a>.</p>
   */
  class AWS_EC2INSTANCECONNECT_API EC2InstanceConnectClient : smithy::client::AwsSmithyClientT<Aws::EC2InstanceConnect::SERVICE_NAME,
      Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      EC2InstanceConnectEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::EC2InstanceConnectErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<EC2InstanceConnectClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "EC2 Instance Connect"; }

      typedef EC2InstanceConnectClientConfiguration ClientConfigurationType;
      typedef EC2InstanceConnectEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration = Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration(),
                                 std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration = Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2InstanceConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration = Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2InstanceConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EC2InstanceConnectClient();

        /**
         * <p>Pushes an SSH public key to the specified EC2 instance for use by the
         * specified user. The key remains for 60 seconds. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Connect-using-EC2-Instance-Connect.html">Connect
         * to your Linux instance using EC2 Instance Connect</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::SendSSHPublicKeyOutcome SendSSHPublicKey(const Model::SendSSHPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for SendSSHPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendSSHPublicKeyRequestT = Model::SendSSHPublicKeyRequest>
        Model::SendSSHPublicKeyOutcomeCallable SendSSHPublicKeyCallable(const SendSSHPublicKeyRequestT& request) const
        {
            return SubmitCallable(&EC2InstanceConnectClient::SendSSHPublicKey, request);
        }

        /**
         * An Async wrapper for SendSSHPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendSSHPublicKeyRequestT = Model::SendSSHPublicKeyRequest>
        void SendSSHPublicKeyAsync(const SendSSHPublicKeyRequestT& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EC2InstanceConnectClient::SendSSHPublicKey, request, handler, context);
        }

        /**
         * <p>Pushes an SSH public key to the specified EC2 instance. The key remains for
         * 60 seconds, which gives you 60 seconds to establish a serial console connection
         * to the instance using SSH. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-serial-console.html">EC2
         * Serial Console</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSerialConsoleSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::SendSerialConsoleSSHPublicKeyOutcome SendSerialConsoleSSHPublicKey(const Model::SendSerialConsoleSSHPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for SendSerialConsoleSSHPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendSerialConsoleSSHPublicKeyRequestT = Model::SendSerialConsoleSSHPublicKeyRequest>
        Model::SendSerialConsoleSSHPublicKeyOutcomeCallable SendSerialConsoleSSHPublicKeyCallable(const SendSerialConsoleSSHPublicKeyRequestT& request) const
        {
            return SubmitCallable(&EC2InstanceConnectClient::SendSerialConsoleSSHPublicKey, request);
        }

        /**
         * An Async wrapper for SendSerialConsoleSSHPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendSerialConsoleSSHPublicKeyRequestT = Model::SendSerialConsoleSSHPublicKeyRequest>
        void SendSerialConsoleSSHPublicKeyAsync(const SendSerialConsoleSSHPublicKeyRequestT& request, const SendSerialConsoleSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EC2InstanceConnectClient::SendSerialConsoleSSHPublicKey, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EC2InstanceConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EC2InstanceConnectClient>;

  };

} // namespace EC2InstanceConnect
} // namespace Aws
