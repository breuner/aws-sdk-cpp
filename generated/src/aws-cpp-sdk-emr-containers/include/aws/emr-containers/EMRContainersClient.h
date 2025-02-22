﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/emr-containers/EMRContainersServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/emr-containers/EMRContainersErrorMarshaller.h>

namespace Aws
{
namespace EMRContainers
{
  AWS_EMRCONTAINERS_API extern const char SERVICE_NAME[];
  /**
   * <p>Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you
   * to run open-source big data frameworks on Amazon Elastic Kubernetes Service
   * (Amazon EKS). With this deployment option, you can focus on running analytics
   * workloads while Amazon EMR on EKS builds, configures, and manages containers for
   * open-source applications. For more information about Amazon EMR on EKS concepts
   * and tasks, see <a
   * href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What
   * is Amazon EMR on EKS</a>.</p> <p> <i>Amazon EMR containers</i> is the API name
   * for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in the
   * following scenarios: </p> <ul> <li> <p>It is the prefix in the CLI commands for
   * Amazon EMR on EKS. For example, <code>aws emr-containers
   * start-job-run</code>.</p> </li> <li> <p>It is the prefix before IAM policy
   * actions for Amazon EMR on EKS. For example, <code>"Action": [
   * "emr-containers:StartJobRun"]</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
   * actions for Amazon EMR on EKS</a>.</p> </li> <li> <p>It is the prefix used in
   * Amazon EMR on EKS service endpoints. For example,
   * <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
   * EMR on EKSService Endpoints</a>.</p> </li> </ul>
   */
  class AWS_EMRCONTAINERS_API EMRContainersClient : smithy::client::AwsSmithyClientT<Aws::EMRContainers::SERVICE_NAME,
      Aws::EMRContainers::EMRContainersClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      EMRContainersEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::EMRContainersErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<EMRContainersClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "EMR containers"; }

      typedef EMRContainersClientConfiguration ClientConfigurationType;
      typedef EMRContainersEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::EMRContainers::EMRContainersClientConfiguration& clientConfiguration = Aws::EMRContainers::EMRContainersClientConfiguration(),
                            std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::EMRContainers::EMRContainersClientConfiguration& clientConfiguration = Aws::EMRContainers::EMRContainersClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRContainersClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::EMRContainers::EMRContainersClientConfiguration& clientConfiguration = Aws::EMRContainers::EMRContainersClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRContainersClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EMRContainersClient();

        /**
         * <p>Cancels a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CancelJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobRunOutcome CancelJobRun(const Model::CancelJobRunRequest& request) const;

        /**
         * A Callable wrapper for CancelJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRunRequestT = Model::CancelJobRunRequest>
        Model::CancelJobRunOutcomeCallable CancelJobRunCallable(const CancelJobRunRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::CancelJobRun, request);
        }

        /**
         * An Async wrapper for CancelJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRunRequestT = Model::CancelJobRunRequest>
        void CancelJobRunAsync(const CancelJobRunRequestT& request, const CancelJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::CancelJobRun, request, handler, context);
        }

        /**
         * <p>Creates a job template. Job template stores values of StartJobRun API request
         * in a template and can be used to start a job run. Job template allows two use
         * cases: avoid repeating recurring StartJobRun API request values, enforcing
         * certain values in StartJobRun API request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobTemplateOutcome CreateJobTemplate(const Model::CreateJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobTemplateRequestT = Model::CreateJobTemplateRequest>
        Model::CreateJobTemplateOutcomeCallable CreateJobTemplateCallable(const CreateJobTemplateRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::CreateJobTemplate, request);
        }

        /**
         * An Async wrapper for CreateJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobTemplateRequestT = Model::CreateJobTemplateRequest>
        void CreateJobTemplateAsync(const CreateJobTemplateRequestT& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::CreateJobTemplate, request, handler, context);
        }

        /**
         * <p>Creates a managed endpoint. A managed endpoint is a gateway that connects
         * Amazon EMR Studio to Amazon EMR on EKS so that Amazon EMR Studio can communicate
         * with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateManagedEndpointOutcome CreateManagedEndpoint(const Model::CreateManagedEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateManagedEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateManagedEndpointRequestT = Model::CreateManagedEndpointRequest>
        Model::CreateManagedEndpointOutcomeCallable CreateManagedEndpointCallable(const CreateManagedEndpointRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::CreateManagedEndpoint, request);
        }

        /**
         * An Async wrapper for CreateManagedEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateManagedEndpointRequestT = Model::CreateManagedEndpointRequest>
        void CreateManagedEndpointAsync(const CreateManagedEndpointRequestT& request, const CreateManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::CreateManagedEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a security configuration. Security configurations in Amazon EMR on
         * EKS are templates for different security setups. You can use security
         * configurations to configure the Lake Formation integration setup. You can also
         * create a security configuration to re-use a security setup each time you create
         * a virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityConfigurationOutcome CreateSecurityConfiguration(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSecurityConfigurationRequestT = Model::CreateSecurityConfigurationRequest>
        Model::CreateSecurityConfigurationOutcomeCallable CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::CreateSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for CreateSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecurityConfigurationRequestT = Model::CreateSecurityConfigurationRequest>
        void CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequestT& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::CreateSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateVirtualCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualClusterOutcome CreateVirtualCluster(const Model::CreateVirtualClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateVirtualCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVirtualClusterRequestT = Model::CreateVirtualClusterRequest>
        Model::CreateVirtualClusterOutcomeCallable CreateVirtualClusterCallable(const CreateVirtualClusterRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::CreateVirtualCluster, request);
        }

        /**
         * An Async wrapper for CreateVirtualCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVirtualClusterRequestT = Model::CreateVirtualClusterRequest>
        void CreateVirtualClusterAsync(const CreateVirtualClusterRequestT& request, const CreateVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::CreateVirtualCluster, request, handler, context);
        }

        /**
         * <p>Deletes a job template. Job template stores values of StartJobRun API request
         * in a template and can be used to start a job run. Job template allows two use
         * cases: avoid repeating recurring StartJobRun API request values, enforcing
         * certain values in StartJobRun API request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobTemplateRequestT = Model::DeleteJobTemplateRequest>
        Model::DeleteJobTemplateOutcomeCallable DeleteJobTemplateCallable(const DeleteJobTemplateRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DeleteJobTemplate, request);
        }

        /**
         * An Async wrapper for DeleteJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobTemplateRequestT = Model::DeleteJobTemplateRequest>
        void DeleteJobTemplateAsync(const DeleteJobTemplateRequestT& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DeleteJobTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a managed endpoint. A managed endpoint is a gateway that connects
         * Amazon EMR Studio to Amazon EMR on EKS so that Amazon EMR Studio can communicate
         * with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteManagedEndpointOutcome DeleteManagedEndpoint(const Model::DeleteManagedEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteManagedEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteManagedEndpointRequestT = Model::DeleteManagedEndpointRequest>
        Model::DeleteManagedEndpointOutcomeCallable DeleteManagedEndpointCallable(const DeleteManagedEndpointRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DeleteManagedEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteManagedEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteManagedEndpointRequestT = Model::DeleteManagedEndpointRequest>
        void DeleteManagedEndpointAsync(const DeleteManagedEndpointRequestT& request, const DeleteManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DeleteManagedEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteVirtualCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualClusterOutcome DeleteVirtualCluster(const Model::DeleteVirtualClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteVirtualCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVirtualClusterRequestT = Model::DeleteVirtualClusterRequest>
        Model::DeleteVirtualClusterOutcomeCallable DeleteVirtualClusterCallable(const DeleteVirtualClusterRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DeleteVirtualCluster, request);
        }

        /**
         * An Async wrapper for DeleteVirtualCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVirtualClusterRequestT = Model::DeleteVirtualClusterRequest>
        void DeleteVirtualClusterAsync(const DeleteVirtualClusterRequestT& request, const DeleteVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DeleteVirtualCluster, request, handler, context);
        }

        /**
         * <p>Displays detailed information about a job run. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobRunOutcome DescribeJobRun(const Model::DescribeJobRunRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobRunRequestT = Model::DescribeJobRunRequest>
        Model::DescribeJobRunOutcomeCallable DescribeJobRunCallable(const DescribeJobRunRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DescribeJobRun, request);
        }

        /**
         * An Async wrapper for DescribeJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobRunRequestT = Model::DescribeJobRunRequest>
        void DescribeJobRunAsync(const DescribeJobRunRequestT& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DescribeJobRun, request, handler, context);
        }

        /**
         * <p>Displays detailed information about a specified job template. Job template
         * stores values of StartJobRun API request in a template and can be used to start
         * a job run. Job template allows two use cases: avoid repeating recurring
         * StartJobRun API request values, enforcing certain values in StartJobRun API
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobTemplateOutcome DescribeJobTemplate(const Model::DescribeJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobTemplateRequestT = Model::DescribeJobTemplateRequest>
        Model::DescribeJobTemplateOutcomeCallable DescribeJobTemplateCallable(const DescribeJobTemplateRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DescribeJobTemplate, request);
        }

        /**
         * An Async wrapper for DescribeJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobTemplateRequestT = Model::DescribeJobTemplateRequest>
        void DescribeJobTemplateAsync(const DescribeJobTemplateRequestT& request, const DescribeJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DescribeJobTemplate, request, handler, context);
        }

        /**
         * <p>Displays detailed information about a managed endpoint. A managed endpoint is
         * a gateway that connects Amazon EMR Studio to Amazon EMR on EKS so that Amazon
         * EMR Studio can communicate with your virtual cluster.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedEndpointOutcome DescribeManagedEndpoint(const Model::DescribeManagedEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeManagedEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeManagedEndpointRequestT = Model::DescribeManagedEndpointRequest>
        Model::DescribeManagedEndpointOutcomeCallable DescribeManagedEndpointCallable(const DescribeManagedEndpointRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DescribeManagedEndpoint, request);
        }

        /**
         * An Async wrapper for DescribeManagedEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeManagedEndpointRequestT = Model::DescribeManagedEndpointRequest>
        void DescribeManagedEndpointAsync(const DescribeManagedEndpointRequestT& request, const DescribeManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DescribeManagedEndpoint, request, handler, context);
        }

        /**
         * <p>Displays detailed information about a specified security configuration.
         * Security configurations in Amazon EMR on EKS are templates for different
         * security setups. You can use security configurations to configure the Lake
         * Formation integration setup. You can also create a security configuration to
         * re-use a security setup each time you create a virtual cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityConfigurationOutcome DescribeSecurityConfiguration(const Model::DescribeSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSecurityConfigurationRequestT = Model::DescribeSecurityConfigurationRequest>
        Model::DescribeSecurityConfigurationOutcomeCallable DescribeSecurityConfigurationCallable(const DescribeSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DescribeSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSecurityConfigurationRequestT = Model::DescribeSecurityConfigurationRequest>
        void DescribeSecurityConfigurationAsync(const DescribeSecurityConfigurationRequestT& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DescribeSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Displays detailed information about a specified virtual cluster. Virtual
         * cluster is a managed entity on Amazon EMR on EKS. You can create, describe, list
         * and delete virtual clusters. They do not consume any additional resource in your
         * system. A single virtual cluster maps to a single Kubernetes namespace. Given
         * this relationship, you can model virtual clusters the same way you model
         * Kubernetes namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeVirtualCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualClusterOutcome DescribeVirtualCluster(const Model::DescribeVirtualClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVirtualClusterRequestT = Model::DescribeVirtualClusterRequest>
        Model::DescribeVirtualClusterOutcomeCallable DescribeVirtualClusterCallable(const DescribeVirtualClusterRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::DescribeVirtualCluster, request);
        }

        /**
         * An Async wrapper for DescribeVirtualCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVirtualClusterRequestT = Model::DescribeVirtualClusterRequest>
        void DescribeVirtualClusterAsync(const DescribeVirtualClusterRequestT& request, const DescribeVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::DescribeVirtualCluster, request, handler, context);
        }

        /**
         * <p>Generate a session token to connect to a managed endpoint. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/GetManagedEndpointSessionCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedEndpointSessionCredentialsOutcome GetManagedEndpointSessionCredentials(const Model::GetManagedEndpointSessionCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetManagedEndpointSessionCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedEndpointSessionCredentialsRequestT = Model::GetManagedEndpointSessionCredentialsRequest>
        Model::GetManagedEndpointSessionCredentialsOutcomeCallable GetManagedEndpointSessionCredentialsCallable(const GetManagedEndpointSessionCredentialsRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::GetManagedEndpointSessionCredentials, request);
        }

        /**
         * An Async wrapper for GetManagedEndpointSessionCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedEndpointSessionCredentialsRequestT = Model::GetManagedEndpointSessionCredentialsRequest>
        void GetManagedEndpointSessionCredentialsAsync(const GetManagedEndpointSessionCredentialsRequestT& request, const GetManagedEndpointSessionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::GetManagedEndpointSessionCredentials, request, handler, context);
        }

        /**
         * <p>Lists job runs based on a set of parameters. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;

        /**
         * A Callable wrapper for ListJobRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        Model::ListJobRunsOutcomeCallable ListJobRunsCallable(const ListJobRunsRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::ListJobRuns, request);
        }

        /**
         * An Async wrapper for ListJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobRunsRequestT = Model::ListJobRunsRequest>
        void ListJobRunsAsync(const ListJobRunsRequestT& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::ListJobRuns, request, handler, context);
        }

        /**
         * <p>Lists job templates based on a set of parameters. Job template stores values
         * of StartJobRun API request in a template and can be used to start a job run. Job
         * template allows two use cases: avoid repeating recurring StartJobRun API request
         * values, enforcing certain values in StartJobRun API request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListJobTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobTemplatesOutcome ListJobTemplates(const Model::ListJobTemplatesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListJobTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobTemplatesRequestT = Model::ListJobTemplatesRequest>
        Model::ListJobTemplatesOutcomeCallable ListJobTemplatesCallable(const ListJobTemplatesRequestT& request = {}) const
        {
            return SubmitCallable(&EMRContainersClient::ListJobTemplates, request);
        }

        /**
         * An Async wrapper for ListJobTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobTemplatesRequestT = Model::ListJobTemplatesRequest>
        void ListJobTemplatesAsync(const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListJobTemplatesRequestT& request = {}) const
        {
            return SubmitAsync(&EMRContainersClient::ListJobTemplates, request, handler, context);
        }

        /**
         * <p>Lists managed endpoints based on a set of parameters. A managed endpoint is a
         * gateway that connects Amazon EMR Studio to Amazon EMR on EKS so that Amazon EMR
         * Studio can communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListManagedEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedEndpointsOutcome ListManagedEndpoints(const Model::ListManagedEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListManagedEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedEndpointsRequestT = Model::ListManagedEndpointsRequest>
        Model::ListManagedEndpointsOutcomeCallable ListManagedEndpointsCallable(const ListManagedEndpointsRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::ListManagedEndpoints, request);
        }

        /**
         * An Async wrapper for ListManagedEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedEndpointsRequestT = Model::ListManagedEndpointsRequest>
        void ListManagedEndpointsAsync(const ListManagedEndpointsRequestT& request, const ListManagedEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::ListManagedEndpoints, request, handler, context);
        }

        /**
         * <p>Lists security configurations based on a set of parameters. Security
         * configurations in Amazon EMR on EKS are templates for different security setups.
         * You can use security configurations to configure the Lake Formation integration
         * setup. You can also create a security configuration to re-use a security setup
         * each time you create a virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListSecurityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityConfigurationsOutcome ListSecurityConfigurations(const Model::ListSecurityConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSecurityConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityConfigurationsRequestT = Model::ListSecurityConfigurationsRequest>
        Model::ListSecurityConfigurationsOutcomeCallable ListSecurityConfigurationsCallable(const ListSecurityConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&EMRContainersClient::ListSecurityConfigurations, request);
        }

        /**
         * An Async wrapper for ListSecurityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityConfigurationsRequestT = Model::ListSecurityConfigurationsRequest>
        void ListSecurityConfigurationsAsync(const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSecurityConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&EMRContainersClient::ListSecurityConfigurations, request, handler, context);
        }

        /**
         * <p>Lists the tags assigned to the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists information about the specified virtual cluster. Virtual cluster is a
         * managed entity on Amazon EMR on EKS. You can create, describe, list and delete
         * virtual clusters. They do not consume any additional resource in your system. A
         * single virtual cluster maps to a single Kubernetes namespace. Given this
         * relationship, you can model virtual clusters the same way you model Kubernetes
         * namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListVirtualClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualClustersOutcome ListVirtualClusters(const Model::ListVirtualClustersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListVirtualClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVirtualClustersRequestT = Model::ListVirtualClustersRequest>
        Model::ListVirtualClustersOutcomeCallable ListVirtualClustersCallable(const ListVirtualClustersRequestT& request = {}) const
        {
            return SubmitCallable(&EMRContainersClient::ListVirtualClusters, request);
        }

        /**
         * An Async wrapper for ListVirtualClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVirtualClustersRequestT = Model::ListVirtualClustersRequest>
        void ListVirtualClustersAsync(const ListVirtualClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListVirtualClustersRequestT& request = {}) const
        {
            return SubmitAsync(&EMRContainersClient::ListVirtualClusters, request, handler, context);
        }

        /**
         * <p>Starts a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * A Callable wrapper for StartJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        Model::StartJobRunOutcomeCallable StartJobRunCallable(const StartJobRunRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::StartJobRun, request);
        }

        /**
         * An Async wrapper for StartJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        void StartJobRunAsync(const StartJobRunRequestT& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::StartJobRun, request, handler, context);
        }

        /**
         * <p>Assigns tags to resources. A tag is a label that you assign to an Amazon Web
         * Services resource. Each tag consists of a key and an optional value, both of
         * which you define. Tags enable you to categorize your Amazon Web Services
         * resources by attributes such as purpose, owner, or environment. When you have
         * many resources of the same type, you can quickly identify a specific resource
         * based on the tags you've assigned to it. For example, you can define a set of
         * tags for your Amazon EMR on EKS clusters to help you track each cluster's owner
         * and stack level. We recommend that you devise a consistent set of tag keys for
         * each resource type. You can then search and filter the resources based on the
         * tags that you add.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&EMRContainersClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRContainersClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EMRContainersEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EMRContainersClient>;

  };

} // namespace EMRContainers
} // namespace Aws
