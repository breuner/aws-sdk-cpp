﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/networkmonitor/NetworkMonitorServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/networkmonitor/NetworkMonitorErrorMarshaller.h>

namespace Aws
{
namespace NetworkMonitor
{
  AWS_NETWORKMONITOR_API extern const char SERVICE_NAME[];
  /**
   * <p>Amazon CloudWatch Network Monitor is an Amazon Web Services active network
   * monitoring service that identifies if a network issues exists within the Amazon
   * Web Services network or your own company network. Within Network Monitor you'll
   * choose the source VPCs and subnets from the Amazon Web Services network in which
   * you operate and then you'll choose the destination IP addresses from your
   * on-premises network. From these sources and destinations, Network Monitor
   * creates a monitor containing all the possible source and destination
   * combinations, each of which is called a probe, within a single monitor. These
   * probes then monitor network traffic to help you identify where network issues
   * might be affecting your traffic.</p> <p>Before you begin, ensure the Amazon Web
   * Services CLI is configured in the Amazon Web Services Account where you will
   * create the Network Monitor resource. Network Monitor doesn’t support creation on
   * cross-account resources, but you can create a Network Monitor in any subnet
   * belonging to a VPC owned by your Account.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/what-is-network-monitor.html">Using
   * Amazon CloudWatch Network Monitor</a> in the <i>Amazon CloudWatch User
   * Guide</i>.</p>
   */
  class AWS_NETWORKMONITOR_API NetworkMonitorClient : smithy::client::AwsSmithyClientT<Aws::NetworkMonitor::SERVICE_NAME,
      Aws::NetworkMonitor::NetworkMonitorClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      NetworkMonitorEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::NetworkMonitorErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<NetworkMonitorClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "NetworkMonitor"; }

      typedef NetworkMonitorClientConfiguration ClientConfigurationType;
      typedef NetworkMonitorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkMonitorClient(const Aws::NetworkMonitor::NetworkMonitorClientConfiguration& clientConfiguration = Aws::NetworkMonitor::NetworkMonitorClientConfiguration(),
                             std::shared_ptr<NetworkMonitorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkMonitorClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<NetworkMonitorEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::NetworkMonitor::NetworkMonitorClientConfiguration& clientConfiguration = Aws::NetworkMonitor::NetworkMonitorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkMonitorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<NetworkMonitorEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::NetworkMonitor::NetworkMonitorClientConfiguration& clientConfiguration = Aws::NetworkMonitor::NetworkMonitorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkMonitorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkMonitorClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkMonitorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NetworkMonitorClient();

        /**
         * <p>Creates a monitor between a source subnet and destination IP address. Within
         * a monitor you'll create one or more probes that monitor network traffic between
         * your source Amazon Web Services VPC subnets and your destination IP addresses.
         * Each probe then aggregates and sends metrics to Amazon CloudWatch.</p> <p>You
         * can also create a monitor with probes using this command. For each probe, you
         * define the following:</p> <ul> <li> <p> <code>source</code>—The subnet IDs where
         * the probes will be created.</p> </li> <li> <p> <code>destination</code>— The
         * target destination IP address for the probe.</p> </li> <li> <p>
         * <code>destinationPort</code>—Required only if the protocol is
         * <code>TCP</code>.</p> </li> <li> <p> <code>protocol</code>—The communication
         * protocol between the source and destination. This will be either
         * <code>TCP</code> or <code>ICMP</code>.</p> </li> <li> <p>
         * <code>packetSize</code>—The size of the packets. This must be a number between
         * <code>56</code> and <code>8500</code>.</p> </li> <li> <p>(Optional)
         * <code>tags</code> —Key-value pairs created and assigned to the probe.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/CreateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitorOutcome CreateMonitor(const Model::CreateMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        Model::CreateMonitorOutcomeCallable CreateMonitorCallable(const CreateMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::CreateMonitor, request);
        }

        /**
         * An Async wrapper for CreateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        void CreateMonitorAsync(const CreateMonitorRequestT& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::CreateMonitor, request, handler, context);
        }

        /**
         * <p>Create a probe within a monitor. Once you create a probe, and it begins
         * monitoring your network traffic, you'll incur billing charges for that probe.
         * This action requires the <code>monitorName</code> parameter. Run
         * <code>ListMonitors</code> to get a list of monitor names. Note the name of the
         * <code>monitorName</code> you want to create the probe for.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/CreateProbe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProbeOutcome CreateProbe(const Model::CreateProbeRequest& request) const;

        /**
         * A Callable wrapper for CreateProbe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProbeRequestT = Model::CreateProbeRequest>
        Model::CreateProbeOutcomeCallable CreateProbeCallable(const CreateProbeRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::CreateProbe, request);
        }

        /**
         * An Async wrapper for CreateProbe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProbeRequestT = Model::CreateProbeRequest>
        void CreateProbeAsync(const CreateProbeRequestT& request, const CreateProbeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::CreateProbe, request, handler, context);
        }

        /**
         * <p>Deletes a specified monitor.</p> <p>This action requires the
         * <code>monitorName</code> parameter. Run <code>ListMonitors</code> to get a list
         * of monitor names. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/DeleteMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitorOutcome DeleteMonitor(const Model::DeleteMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        Model::DeleteMonitorOutcomeCallable DeleteMonitorCallable(const DeleteMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::DeleteMonitor, request);
        }

        /**
         * An Async wrapper for DeleteMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        void DeleteMonitorAsync(const DeleteMonitorRequestT& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::DeleteMonitor, request, handler, context);
        }

        /**
         * <p>Deletes the specified probe. Once a probe is deleted you'll no longer incur
         * any billing fees for that probe.</p> <p>This action requires both the
         * <code>monitorName</code> and <code>probeId</code> parameters. Run
         * <code>ListMonitors</code> to get a list of monitor names. Run
         * <code>GetMonitor</code> to get a list of probes and probe IDs. You can only
         * delete a single probe at a time using this action. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/DeleteProbe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProbeOutcome DeleteProbe(const Model::DeleteProbeRequest& request) const;

        /**
         * A Callable wrapper for DeleteProbe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProbeRequestT = Model::DeleteProbeRequest>
        Model::DeleteProbeOutcomeCallable DeleteProbeCallable(const DeleteProbeRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::DeleteProbe, request);
        }

        /**
         * An Async wrapper for DeleteProbe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProbeRequestT = Model::DeleteProbeRequest>
        void DeleteProbeAsync(const DeleteProbeRequestT& request, const DeleteProbeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::DeleteProbe, request, handler, context);
        }

        /**
         * <p>Returns details about a specific monitor. </p> <p>This action requires the
         * <code>monitorName</code> parameter. Run <code>ListMonitors</code> to get a list
         * of monitor names. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/GetMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMonitorOutcome GetMonitor(const Model::GetMonitorRequest& request) const;

        /**
         * A Callable wrapper for GetMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        Model::GetMonitorOutcomeCallable GetMonitorCallable(const GetMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::GetMonitor, request);
        }

        /**
         * An Async wrapper for GetMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        void GetMonitorAsync(const GetMonitorRequestT& request, const GetMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::GetMonitor, request, handler, context);
        }

        /**
         * <p>Returns the details about a probe. This action requires both the
         * <code>monitorName</code> and <code>probeId</code> parameters. Run
         * <code>ListMonitors</code> to get a list of monitor names. Run
         * <code>GetMonitor</code> to get a list of probes and probe IDs. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/GetProbe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProbeOutcome GetProbe(const Model::GetProbeRequest& request) const;

        /**
         * A Callable wrapper for GetProbe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProbeRequestT = Model::GetProbeRequest>
        Model::GetProbeOutcomeCallable GetProbeCallable(const GetProbeRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::GetProbe, request);
        }

        /**
         * An Async wrapper for GetProbe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProbeRequestT = Model::GetProbeRequest>
        void GetProbeAsync(const GetProbeRequestT& request, const GetProbeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::GetProbe, request, handler, context);
        }

        /**
         * <p>Returns a list of all of your monitors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/ListMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitorsOutcome ListMonitors(const Model::ListMonitorsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        Model::ListMonitorsOutcomeCallable ListMonitorsCallable(const ListMonitorsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkMonitorClient::ListMonitors, request);
        }

        /**
         * An Async wrapper for ListMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        void ListMonitorsAsync(const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMonitorsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkMonitorClient::ListMonitors, request, handler, context);
        }

        /**
         * <p>Lists the tags assigned to this resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds key-value pairs to a monitor or probe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a key-value pair from a monitor or probe.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the <code>aggregationPeriod</code> for a monitor. Monitors support an
         * <code>aggregationPeriod</code> of either <code>30</code> or <code>60</code>
         * seconds. This action requires the <code>monitorName</code> and
         * <code>probeId</code> parameter. Run <code>ListMonitors</code> to get a list of
         * monitor names. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/UpdateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitorOutcome UpdateMonitor(const Model::UpdateMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        Model::UpdateMonitorOutcomeCallable UpdateMonitorCallable(const UpdateMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::UpdateMonitor, request);
        }

        /**
         * An Async wrapper for UpdateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        void UpdateMonitorAsync(const UpdateMonitorRequestT& request, const UpdateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::UpdateMonitor, request, handler, context);
        }

        /**
         * <p>Updates a monitor probe. This action requires both the
         * <code>monitorName</code> and <code>probeId</code> parameters. Run
         * <code>ListMonitors</code> to get a list of monitor names. Run
         * <code>GetMonitor</code> to get a list of probes and probe IDs. </p> <p>You can
         * update the following para create a monitor with probes using this command. For
         * each probe, you define the following:</p> <ul> <li> <p> <code>state</code>—The
         * state of the probe.</p> </li> <li> <p> <code>destination</code>— The target
         * destination IP address for the probe.</p> </li> <li> <p>
         * <code>destinationPort</code>—Required only if the protocol is
         * <code>TCP</code>.</p> </li> <li> <p> <code>protocol</code>—The communication
         * protocol between the source and destination. This will be either
         * <code>TCP</code> or <code>ICMP</code>.</p> </li> <li> <p>
         * <code>packetSize</code>—The size of the packets. This must be a number between
         * <code>56</code> and <code>8500</code>.</p> </li> <li> <p>(Optional)
         * <code>tags</code> —Key-value pairs created and assigned to the probe.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/UpdateProbe">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProbeOutcome UpdateProbe(const Model::UpdateProbeRequest& request) const;

        /**
         * A Callable wrapper for UpdateProbe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProbeRequestT = Model::UpdateProbeRequest>
        Model::UpdateProbeOutcomeCallable UpdateProbeCallable(const UpdateProbeRequestT& request) const
        {
            return SubmitCallable(&NetworkMonitorClient::UpdateProbe, request);
        }

        /**
         * An Async wrapper for UpdateProbe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProbeRequestT = Model::UpdateProbeRequest>
        void UpdateProbeAsync(const UpdateProbeRequestT& request, const UpdateProbeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkMonitorClient::UpdateProbe, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NetworkMonitorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NetworkMonitorClient>;

  };

} // namespace NetworkMonitor
} // namespace Aws
