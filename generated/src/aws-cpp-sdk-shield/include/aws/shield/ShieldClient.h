﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/shield/ShieldServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/shield/ShieldErrorMarshaller.h>

namespace Aws
{
namespace Shield
{
  AWS_SHIELD_API extern const char SERVICE_NAME[];
  /**
   * <fullname>Shield Advanced</fullname> <p>This is the <i>Shield Advanced API
   * Reference</i>. This guide is for developers who need detailed information about
   * the Shield Advanced API actions, data types, and errors. For detailed
   * information about WAF and Shield Advanced features and an overview of how to use
   * the WAF and Shield Advanced APIs, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield
   * Developer Guide</a>.</p>
   */
  class AWS_SHIELD_API ShieldClient : smithy::client::AwsSmithyClientT<Aws::Shield::SERVICE_NAME,
      Aws::Shield::ShieldClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      ShieldEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::ShieldErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<ShieldClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Shield"; }

      typedef ShieldClientConfiguration ClientConfigurationType;
      typedef ShieldEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Shield::ShieldClientConfiguration& clientConfiguration = Aws::Shield::ShieldClientConfiguration(),
                     std::shared_ptr<ShieldEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<ShieldEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Shield::ShieldClientConfiguration& clientConfiguration = Aws::Shield::ShieldClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ShieldClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<ShieldEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Shield::ShieldClientConfiguration& clientConfiguration = Aws::Shield::ShieldClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ShieldClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ShieldClient();

        /**
         * <p>Authorizes the Shield Response Team (SRT) to access the specified Amazon S3
         * bucket containing log data such as Application Load Balancer access logs,
         * CloudFront logs, or logs from third party sources. You can associate up to 10
         * Amazon S3 buckets with your subscription.</p> <p>To use the services of the SRT
         * and make an <code>AssociateDRTLogBucket</code> request, you must be subscribed
         * to the <a href="http://aws.amazon.com/premiumsupport/business-support/">Business
         * Support plan</a> or the <a
         * href="http://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTLogBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDRTLogBucketOutcome AssociateDRTLogBucket(const Model::AssociateDRTLogBucketRequest& request) const;

        /**
         * A Callable wrapper for AssociateDRTLogBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateDRTLogBucketRequestT = Model::AssociateDRTLogBucketRequest>
        Model::AssociateDRTLogBucketOutcomeCallable AssociateDRTLogBucketCallable(const AssociateDRTLogBucketRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::AssociateDRTLogBucket, request);
        }

        /**
         * An Async wrapper for AssociateDRTLogBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDRTLogBucketRequestT = Model::AssociateDRTLogBucketRequest>
        void AssociateDRTLogBucketAsync(const AssociateDRTLogBucketRequestT& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::AssociateDRTLogBucket, request, handler, context);
        }

        /**
         * <p>Authorizes the Shield Response Team (SRT) using the specified role, to access
         * your Amazon Web Services account to assist with DDoS attack mitigation during
         * potential attacks. This enables the SRT to inspect your WAF configuration and
         * create or update WAF rules and web ACLs.</p> <p>You can associate only one
         * <code>RoleArn</code> with your subscription. If you submit an
         * <code>AssociateDRTRole</code> request for an account that already has an
         * associated role, the new <code>RoleArn</code> will replace the existing
         * <code>RoleArn</code>. </p> <p>Prior to making the <code>AssociateDRTRole</code>
         * request, you must attach the <code>AWSShieldDRTAccessPolicy</code> managed
         * policy to the role that you'll specify in the request. You can access this
         * policy in the IAM console at <a
         * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>.
         * For more information see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Adding
         * and removing IAM identity permissions</a>. The role must also trust the service
         * principal <code>drt.shield.amazonaws.com</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
         * JSON policy elements: Principal</a>.</p> <p>The SRT will have access only to
         * your WAF and Shield resources. By submitting this request, you authorize the SRT
         * to inspect your WAF and Shield configuration and create and update WAF rules and
         * web ACLs on your behalf. The SRT takes these actions only if explicitly
         * authorized by you.</p> <p>You must have the <code>iam:PassRole</code> permission
         * to make an <code>AssociateDRTRole</code> request. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">Granting
         * a user permissions to pass a role to an Amazon Web Services service</a>. </p>
         * <p>To use the services of the SRT and make an <code>AssociateDRTRole</code>
         * request, you must be subscribed to the <a
         * href="http://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="http://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDRTRoleOutcome AssociateDRTRole(const Model::AssociateDRTRoleRequest& request) const;

        /**
         * A Callable wrapper for AssociateDRTRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateDRTRoleRequestT = Model::AssociateDRTRoleRequest>
        Model::AssociateDRTRoleOutcomeCallable AssociateDRTRoleCallable(const AssociateDRTRoleRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::AssociateDRTRole, request);
        }

        /**
         * An Async wrapper for AssociateDRTRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDRTRoleRequestT = Model::AssociateDRTRoleRequest>
        void AssociateDRTRoleAsync(const AssociateDRTRoleRequestT& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::AssociateDRTRole, request, handler, context);
        }

        /**
         * <p>Adds health-based detection to the Shield Advanced protection for a resource.
         * Shield Advanced health-based detection uses the health of your Amazon Web
         * Services resource to improve responsiveness and accuracy in attack detection and
         * response. </p> <p>You define the health check in Route 53 and then associate it
         * with your Shield Advanced protection. For more information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-overview.html#ddos-advanced-health-check-option">Shield
         * Advanced Health-Based Detection</a> in the <i>WAF Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateHealthCheckOutcome AssociateHealthCheck(const Model::AssociateHealthCheckRequest& request) const;

        /**
         * A Callable wrapper for AssociateHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateHealthCheckRequestT = Model::AssociateHealthCheckRequest>
        Model::AssociateHealthCheckOutcomeCallable AssociateHealthCheckCallable(const AssociateHealthCheckRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::AssociateHealthCheck, request);
        }

        /**
         * An Async wrapper for AssociateHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateHealthCheckRequestT = Model::AssociateHealthCheckRequest>
        void AssociateHealthCheckAsync(const AssociateHealthCheckRequestT& request, const AssociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::AssociateHealthCheck, request, handler, context);
        }

        /**
         * <p>Initializes proactive engagement and sets the list of contacts for the Shield
         * Response Team (SRT) to use. You must provide at least one phone number in the
         * emergency contact list. </p> <p>After you have initialized proactive engagement
         * using this call, to disable or enable proactive engagement, use the calls
         * <code>DisableProactiveEngagement</code> and
         * <code>EnableProactiveEngagement</code>. </p>  <p>This call defines the
         * list of email addresses and phone numbers that the SRT can use to contact you
         * for escalations to the SRT and to initiate proactive customer support.</p>
         * <p>The contacts that you provide in the request replace any contacts that were
         * already defined. If you already have contacts defined and want to use them,
         * retrieve the list using <code>DescribeEmergencyContactSettings</code> and then
         * provide it to this call. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateProactiveEngagementDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProactiveEngagementDetailsOutcome AssociateProactiveEngagementDetails(const Model::AssociateProactiveEngagementDetailsRequest& request) const;

        /**
         * A Callable wrapper for AssociateProactiveEngagementDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateProactiveEngagementDetailsRequestT = Model::AssociateProactiveEngagementDetailsRequest>
        Model::AssociateProactiveEngagementDetailsOutcomeCallable AssociateProactiveEngagementDetailsCallable(const AssociateProactiveEngagementDetailsRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::AssociateProactiveEngagementDetails, request);
        }

        /**
         * An Async wrapper for AssociateProactiveEngagementDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateProactiveEngagementDetailsRequestT = Model::AssociateProactiveEngagementDetailsRequest>
        void AssociateProactiveEngagementDetailsAsync(const AssociateProactiveEngagementDetailsRequestT& request, const AssociateProactiveEngagementDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::AssociateProactiveEngagementDetails, request, handler, context);
        }

        /**
         * <p>Enables Shield Advanced for a specific Amazon Web Services resource. The
         * resource can be an Amazon CloudFront distribution, Amazon Route 53 hosted zone,
         * Global Accelerator standard accelerator, Elastic IP Address, Application Load
         * Balancer, or a Classic Load Balancer. You can protect Amazon EC2 instances and
         * Network Load Balancers by association with protected Amazon EC2 Elastic IP
         * addresses.</p> <p>You can add protection to only a single resource with each
         * <code>CreateProtection</code> request. You can add protection to multiple
         * resources at once through the Shield Advanced console at <a
         * href="https://console.aws.amazon.com/wafv2/shieldv2#/">https://console.aws.amazon.com/wafv2/shieldv2#/</a>.
         * For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
         * Started with Shield Advanced</a> and <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/configure-new-protection.html">Adding
         * Shield Advanced protection to Amazon Web Services resources</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProtectionOutcome CreateProtection(const Model::CreateProtectionRequest& request) const;

        /**
         * A Callable wrapper for CreateProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProtectionRequestT = Model::CreateProtectionRequest>
        Model::CreateProtectionOutcomeCallable CreateProtectionCallable(const CreateProtectionRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::CreateProtection, request);
        }

        /**
         * An Async wrapper for CreateProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProtectionRequestT = Model::CreateProtectionRequest>
        void CreateProtectionAsync(const CreateProtectionRequestT& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::CreateProtection, request, handler, context);
        }

        /**
         * <p>Creates a grouping of protected resources so they can be handled as a
         * collective. This resource grouping improves the accuracy of detection and
         * reduces false positives. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProtectionGroupOutcome CreateProtectionGroup(const Model::CreateProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProtectionGroupRequestT = Model::CreateProtectionGroupRequest>
        Model::CreateProtectionGroupOutcomeCallable CreateProtectionGroupCallable(const CreateProtectionGroupRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::CreateProtectionGroup, request);
        }

        /**
         * An Async wrapper for CreateProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProtectionGroupRequestT = Model::CreateProtectionGroupRequest>
        void CreateProtectionGroupAsync(const CreateProtectionGroupRequestT& request, const CreateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::CreateProtectionGroup, request, handler, context);
        }

        /**
         * <p>Activates Shield Advanced for an account.</p>  <p>For accounts that are
         * members of an Organizations organization, Shield Advanced subscriptions are
         * billed against the organization's payer account, regardless of whether the payer
         * account itself is subscribed. </p>  <p>When you initially create a
         * subscription, your subscription is set to be automatically renewed at the end of
         * the existing subscription period. You can change this by submitting an
         * <code>UpdateSubscription</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
        Model::CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const CreateSubscriptionRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::CreateSubscription, request);
        }

        /**
         * An Async wrapper for CreateSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
        void CreateSubscriptionAsync(const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateSubscriptionRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::CreateSubscription, request, handler, context);
        }

        /**
         * <p>Deletes an Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionOutcome DeleteProtection(const Model::DeleteProtectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProtectionRequestT = Model::DeleteProtectionRequest>
        Model::DeleteProtectionOutcomeCallable DeleteProtectionCallable(const DeleteProtectionRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::DeleteProtection, request);
        }

        /**
         * An Async wrapper for DeleteProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProtectionRequestT = Model::DeleteProtectionRequest>
        void DeleteProtectionAsync(const DeleteProtectionRequestT& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::DeleteProtection, request, handler, context);
        }

        /**
         * <p>Removes the specified protection group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionGroupOutcome DeleteProtectionGroup(const Model::DeleteProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProtectionGroupRequestT = Model::DeleteProtectionGroupRequest>
        Model::DeleteProtectionGroupOutcomeCallable DeleteProtectionGroupCallable(const DeleteProtectionGroupRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::DeleteProtectionGroup, request);
        }

        /**
         * An Async wrapper for DeleteProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProtectionGroupRequestT = Model::DeleteProtectionGroupRequest>
        void DeleteProtectionGroupAsync(const DeleteProtectionGroupRequestT& request, const DeleteProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::DeleteProtectionGroup, request, handler, context);
        }

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttackOutcome DescribeAttack(const Model::DescribeAttackRequest& request) const;

        /**
         * A Callable wrapper for DescribeAttack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAttackRequestT = Model::DescribeAttackRequest>
        Model::DescribeAttackOutcomeCallable DescribeAttackCallable(const DescribeAttackRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::DescribeAttack, request);
        }

        /**
         * An Async wrapper for DescribeAttack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAttackRequestT = Model::DescribeAttackRequest>
        void DescribeAttackAsync(const DescribeAttackRequestT& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::DescribeAttack, request, handler, context);
        }

        /**
         * <p>Provides information about the number and type of attacks Shield has detected
         * in the last year for all resources that belong to your account, regardless of
         * whether you've defined Shield protections for them. This operation is available
         * to Shield customers as well as to Shield Advanced customers.</p> <p>The
         * operation returns data for the time range of midnight UTC, one year ago, to
         * midnight UTC, today. For example, if the current time is <code>2020-10-26
         * 15:39:32 PDT</code>, equal to <code>2020-10-26 22:39:32 UTC</code>, then the
         * time range for the attack data returned is from <code>2019-10-26 00:00:00
         * UTC</code> to <code>2020-10-26 00:00:00 UTC</code>. </p> <p>The time range
         * indicates the period covered by the attack statistics data items.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttackStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttackStatisticsOutcome DescribeAttackStatistics(const Model::DescribeAttackStatisticsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeAttackStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAttackStatisticsRequestT = Model::DescribeAttackStatisticsRequest>
        Model::DescribeAttackStatisticsOutcomeCallable DescribeAttackStatisticsCallable(const DescribeAttackStatisticsRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::DescribeAttackStatistics, request);
        }

        /**
         * An Async wrapper for DescribeAttackStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAttackStatisticsRequestT = Model::DescribeAttackStatisticsRequest>
        void DescribeAttackStatisticsAsync(const DescribeAttackStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeAttackStatisticsRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::DescribeAttackStatistics, request, handler, context);
        }

        /**
         * <p>Returns the current role and list of Amazon S3 log buckets used by the Shield
         * Response Team (SRT) to access your Amazon Web Services account while assisting
         * with attack mitigation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeDRTAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDRTAccessOutcome DescribeDRTAccess(const Model::DescribeDRTAccessRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeDRTAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDRTAccessRequestT = Model::DescribeDRTAccessRequest>
        Model::DescribeDRTAccessOutcomeCallable DescribeDRTAccessCallable(const DescribeDRTAccessRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::DescribeDRTAccess, request);
        }

        /**
         * An Async wrapper for DescribeDRTAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDRTAccessRequestT = Model::DescribeDRTAccessRequest>
        void DescribeDRTAccessAsync(const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeDRTAccessRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::DescribeDRTAccess, request, handler, context);
        }

        /**
         * <p>A list of email addresses and phone numbers that the Shield Response Team
         * (SRT) can use to contact you if you have proactive engagement enabled, for
         * escalations to the SRT and to initiate proactive customer support.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeEmergencyContactSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEmergencyContactSettingsOutcome DescribeEmergencyContactSettings(const Model::DescribeEmergencyContactSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeEmergencyContactSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEmergencyContactSettingsRequestT = Model::DescribeEmergencyContactSettingsRequest>
        Model::DescribeEmergencyContactSettingsOutcomeCallable DescribeEmergencyContactSettingsCallable(const DescribeEmergencyContactSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::DescribeEmergencyContactSettings, request);
        }

        /**
         * An Async wrapper for DescribeEmergencyContactSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEmergencyContactSettingsRequestT = Model::DescribeEmergencyContactSettingsRequest>
        void DescribeEmergencyContactSettingsAsync(const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeEmergencyContactSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::DescribeEmergencyContactSettings, request, handler, context);
        }

        /**
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectionOutcome DescribeProtection(const Model::DescribeProtectionRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProtectionRequestT = Model::DescribeProtectionRequest>
        Model::DescribeProtectionOutcomeCallable DescribeProtectionCallable(const DescribeProtectionRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::DescribeProtection, request);
        }

        /**
         * An Async wrapper for DescribeProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProtectionRequestT = Model::DescribeProtectionRequest>
        void DescribeProtectionAsync(const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeProtectionRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::DescribeProtection, request, handler, context);
        }

        /**
         * <p>Returns the specification for the specified protection group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectionGroupOutcome DescribeProtectionGroup(const Model::DescribeProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProtectionGroupRequestT = Model::DescribeProtectionGroupRequest>
        Model::DescribeProtectionGroupOutcomeCallable DescribeProtectionGroupCallable(const DescribeProtectionGroupRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::DescribeProtectionGroup, request);
        }

        /**
         * An Async wrapper for DescribeProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProtectionGroupRequestT = Model::DescribeProtectionGroupRequest>
        void DescribeProtectionGroupAsync(const DescribeProtectionGroupRequestT& request, const DescribeProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::DescribeProtectionGroup, request, handler, context);
        }

        /**
         * <p>Provides details about the Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscriptionOutcome DescribeSubscription(const Model::DescribeSubscriptionRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSubscriptionRequestT = Model::DescribeSubscriptionRequest>
        Model::DescribeSubscriptionOutcomeCallable DescribeSubscriptionCallable(const DescribeSubscriptionRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::DescribeSubscription, request);
        }

        /**
         * An Async wrapper for DescribeSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSubscriptionRequestT = Model::DescribeSubscriptionRequest>
        void DescribeSubscriptionAsync(const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSubscriptionRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::DescribeSubscription, request, handler, context);
        }

        /**
         * <p>Disable the Shield Advanced automatic application layer DDoS mitigation
         * feature for the protected resource. This stops Shield Advanced from creating,
         * verifying, and applying WAF rules for attacks that it detects for the resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisableApplicationLayerAutomaticResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableApplicationLayerAutomaticResponseOutcome DisableApplicationLayerAutomaticResponse(const Model::DisableApplicationLayerAutomaticResponseRequest& request) const;

        /**
         * A Callable wrapper for DisableApplicationLayerAutomaticResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableApplicationLayerAutomaticResponseRequestT = Model::DisableApplicationLayerAutomaticResponseRequest>
        Model::DisableApplicationLayerAutomaticResponseOutcomeCallable DisableApplicationLayerAutomaticResponseCallable(const DisableApplicationLayerAutomaticResponseRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::DisableApplicationLayerAutomaticResponse, request);
        }

        /**
         * An Async wrapper for DisableApplicationLayerAutomaticResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableApplicationLayerAutomaticResponseRequestT = Model::DisableApplicationLayerAutomaticResponseRequest>
        void DisableApplicationLayerAutomaticResponseAsync(const DisableApplicationLayerAutomaticResponseRequestT& request, const DisableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::DisableApplicationLayerAutomaticResponse, request, handler, context);
        }

        /**
         * <p>Removes authorization from the Shield Response Team (SRT) to notify contacts
         * about escalations to the SRT and to initiate proactive customer
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisableProactiveEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableProactiveEngagementOutcome DisableProactiveEngagement(const Model::DisableProactiveEngagementRequest& request = {}) const;

        /**
         * A Callable wrapper for DisableProactiveEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableProactiveEngagementRequestT = Model::DisableProactiveEngagementRequest>
        Model::DisableProactiveEngagementOutcomeCallable DisableProactiveEngagementCallable(const DisableProactiveEngagementRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::DisableProactiveEngagement, request);
        }

        /**
         * An Async wrapper for DisableProactiveEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableProactiveEngagementRequestT = Model::DisableProactiveEngagementRequest>
        void DisableProactiveEngagementAsync(const DisableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DisableProactiveEngagementRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::DisableProactiveEngagement, request, handler, context);
        }

        /**
         * <p>Removes the Shield Response Team's (SRT) access to the specified Amazon S3
         * bucket containing the logs that you shared previously.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTLogBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTLogBucketOutcome DisassociateDRTLogBucket(const Model::DisassociateDRTLogBucketRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDRTLogBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateDRTLogBucketRequestT = Model::DisassociateDRTLogBucketRequest>
        Model::DisassociateDRTLogBucketOutcomeCallable DisassociateDRTLogBucketCallable(const DisassociateDRTLogBucketRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::DisassociateDRTLogBucket, request);
        }

        /**
         * An Async wrapper for DisassociateDRTLogBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateDRTLogBucketRequestT = Model::DisassociateDRTLogBucketRequest>
        void DisassociateDRTLogBucketAsync(const DisassociateDRTLogBucketRequestT& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::DisassociateDRTLogBucket, request, handler, context);
        }

        /**
         * <p>Removes the Shield Response Team's (SRT) access to your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTRoleOutcome DisassociateDRTRole(const Model::DisassociateDRTRoleRequest& request = {}) const;

        /**
         * A Callable wrapper for DisassociateDRTRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateDRTRoleRequestT = Model::DisassociateDRTRoleRequest>
        Model::DisassociateDRTRoleOutcomeCallable DisassociateDRTRoleCallable(const DisassociateDRTRoleRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::DisassociateDRTRole, request);
        }

        /**
         * An Async wrapper for DisassociateDRTRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateDRTRoleRequestT = Model::DisassociateDRTRoleRequest>
        void DisassociateDRTRoleAsync(const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DisassociateDRTRoleRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::DisassociateDRTRole, request, handler, context);
        }

        /**
         * <p>Removes health-based detection from the Shield Advanced protection for a
         * resource. Shield Advanced health-based detection uses the health of your Amazon
         * Web Services resource to improve responsiveness and accuracy in attack detection
         * and response. </p> <p>You define the health check in Route 53 and then associate
         * or disassociate it with your Shield Advanced protection. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-overview.html#ddos-advanced-health-check-option">Shield
         * Advanced Health-Based Detection</a> in the <i>WAF Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateHealthCheckOutcome DisassociateHealthCheck(const Model::DisassociateHealthCheckRequest& request) const;

        /**
         * A Callable wrapper for DisassociateHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateHealthCheckRequestT = Model::DisassociateHealthCheckRequest>
        Model::DisassociateHealthCheckOutcomeCallable DisassociateHealthCheckCallable(const DisassociateHealthCheckRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::DisassociateHealthCheck, request);
        }

        /**
         * An Async wrapper for DisassociateHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateHealthCheckRequestT = Model::DisassociateHealthCheckRequest>
        void DisassociateHealthCheckAsync(const DisassociateHealthCheckRequestT& request, const DisassociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::DisassociateHealthCheck, request, handler, context);
        }

        /**
         * <p>Enable the Shield Advanced automatic application layer DDoS mitigation for
         * the protected resource. </p>  <p>This feature is available for Amazon
         * CloudFront distributions and Application Load Balancers only.</p> 
         * <p>This causes Shield Advanced to create, verify, and apply WAF rules for DDoS
         * attacks that it detects for the resource. Shield Advanced applies the rules in a
         * Shield rule group inside the web ACL that you've associated with the resource.
         * For information about how automatic mitigation works and the requirements for
         * using it, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-advanced-automatic-app-layer-response.html">Shield
         * Advanced automatic application layer DDoS mitigation</a>.</p>  <p>Don't
         * use this action to make changes to automatic mitigation settings when it's
         * already enabled for a resource. Instead, use
         * <a>UpdateApplicationLayerAutomaticResponse</a>.</p>  <p>To use this
         * feature, you must associate a web ACL with the protected resource. The web ACL
         * must be created using the latest version of WAF (v2). You can associate the web
         * ACL through the Shield Advanced console at <a
         * href="https://console.aws.amazon.com/wafv2/shieldv2#/">https://console.aws.amazon.com/wafv2/shieldv2#/</a>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
         * Started with Shield Advanced</a>. You can also associate the web ACL to the
         * resource through the WAF console or the WAF API, but you must manage Shield
         * Advanced automatic mitigation through Shield Advanced. For information about
         * WAF, see <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/EnableApplicationLayerAutomaticResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableApplicationLayerAutomaticResponseOutcome EnableApplicationLayerAutomaticResponse(const Model::EnableApplicationLayerAutomaticResponseRequest& request) const;

        /**
         * A Callable wrapper for EnableApplicationLayerAutomaticResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableApplicationLayerAutomaticResponseRequestT = Model::EnableApplicationLayerAutomaticResponseRequest>
        Model::EnableApplicationLayerAutomaticResponseOutcomeCallable EnableApplicationLayerAutomaticResponseCallable(const EnableApplicationLayerAutomaticResponseRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::EnableApplicationLayerAutomaticResponse, request);
        }

        /**
         * An Async wrapper for EnableApplicationLayerAutomaticResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableApplicationLayerAutomaticResponseRequestT = Model::EnableApplicationLayerAutomaticResponseRequest>
        void EnableApplicationLayerAutomaticResponseAsync(const EnableApplicationLayerAutomaticResponseRequestT& request, const EnableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::EnableApplicationLayerAutomaticResponse, request, handler, context);
        }

        /**
         * <p>Authorizes the Shield Response Team (SRT) to use email and phone to notify
         * contacts about escalations to the SRT and to initiate proactive customer
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/EnableProactiveEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableProactiveEngagementOutcome EnableProactiveEngagement(const Model::EnableProactiveEngagementRequest& request = {}) const;

        /**
         * A Callable wrapper for EnableProactiveEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableProactiveEngagementRequestT = Model::EnableProactiveEngagementRequest>
        Model::EnableProactiveEngagementOutcomeCallable EnableProactiveEngagementCallable(const EnableProactiveEngagementRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::EnableProactiveEngagement, request);
        }

        /**
         * An Async wrapper for EnableProactiveEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableProactiveEngagementRequestT = Model::EnableProactiveEngagementRequest>
        void EnableProactiveEngagementAsync(const EnableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const EnableProactiveEngagementRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::EnableProactiveEngagement, request, handler, context);
        }

        /**
         * <p>Returns the <code>SubscriptionState</code>, either <code>Active</code> or
         * <code>Inactive</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/GetSubscriptionState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionStateOutcome GetSubscriptionState(const Model::GetSubscriptionStateRequest& request = {}) const;

        /**
         * A Callable wrapper for GetSubscriptionState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionStateRequestT = Model::GetSubscriptionStateRequest>
        Model::GetSubscriptionStateOutcomeCallable GetSubscriptionStateCallable(const GetSubscriptionStateRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::GetSubscriptionState, request);
        }

        /**
         * An Async wrapper for GetSubscriptionState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionStateRequestT = Model::GetSubscriptionStateRequest>
        void GetSubscriptionStateAsync(const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetSubscriptionStateRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::GetSubscriptionState, request, handler, context);
        }

        /**
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttacksOutcome ListAttacks(const Model::ListAttacksRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAttacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttacksRequestT = Model::ListAttacksRequest>
        Model::ListAttacksOutcomeCallable ListAttacksCallable(const ListAttacksRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::ListAttacks, request);
        }

        /**
         * An Async wrapper for ListAttacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttacksRequestT = Model::ListAttacksRequest>
        void ListAttacksAsync(const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAttacksRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::ListAttacks, request, handler, context);
        }

        /**
         * <p>Retrieves <a>ProtectionGroup</a> objects for the account. You can retrieve
         * all protection groups or you can provide filtering criteria and retrieve just
         * the subset of protection groups that match the criteria. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtectionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectionGroupsOutcome ListProtectionGroups(const Model::ListProtectionGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListProtectionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProtectionGroupsRequestT = Model::ListProtectionGroupsRequest>
        Model::ListProtectionGroupsOutcomeCallable ListProtectionGroupsCallable(const ListProtectionGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::ListProtectionGroups, request);
        }

        /**
         * An Async wrapper for ListProtectionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProtectionGroupsRequestT = Model::ListProtectionGroupsRequest>
        void ListProtectionGroupsAsync(const ListProtectionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListProtectionGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::ListProtectionGroups, request, handler, context);
        }

        /**
         * <p>Retrieves <a>Protection</a> objects for the account. You can retrieve all
         * protections or you can provide filtering criteria and retrieve just the subset
         * of protections that match the criteria. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectionsOutcome ListProtections(const Model::ListProtectionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListProtections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProtectionsRequestT = Model::ListProtectionsRequest>
        Model::ListProtectionsOutcomeCallable ListProtectionsCallable(const ListProtectionsRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::ListProtections, request);
        }

        /**
         * An Async wrapper for ListProtections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProtectionsRequestT = Model::ListProtectionsRequest>
        void ListProtectionsAsync(const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListProtectionsRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::ListProtections, request, handler, context);
        }

        /**
         * <p>Retrieves the resources that are included in the protection group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListResourcesInProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesInProtectionGroupOutcome ListResourcesInProtectionGroup(const Model::ListResourcesInProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for ListResourcesInProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourcesInProtectionGroupRequestT = Model::ListResourcesInProtectionGroupRequest>
        Model::ListResourcesInProtectionGroupOutcomeCallable ListResourcesInProtectionGroupCallable(const ListResourcesInProtectionGroupRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::ListResourcesInProtectionGroup, request);
        }

        /**
         * An Async wrapper for ListResourcesInProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourcesInProtectionGroupRequestT = Model::ListResourcesInProtectionGroupRequest>
        void ListResourcesInProtectionGroupAsync(const ListResourcesInProtectionGroupRequestT& request, const ListResourcesInProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::ListResourcesInProtectionGroup, request, handler, context);
        }

        /**
         * <p>Gets information about Amazon Web Services tags for a specified Amazon
         * Resource Name (ARN) in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds or updates tags for a resource in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Shield Advanced automatic application layer DDoS
         * mitigation configuration for the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateApplicationLayerAutomaticResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationLayerAutomaticResponseOutcome UpdateApplicationLayerAutomaticResponse(const Model::UpdateApplicationLayerAutomaticResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationLayerAutomaticResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationLayerAutomaticResponseRequestT = Model::UpdateApplicationLayerAutomaticResponseRequest>
        Model::UpdateApplicationLayerAutomaticResponseOutcomeCallable UpdateApplicationLayerAutomaticResponseCallable(const UpdateApplicationLayerAutomaticResponseRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::UpdateApplicationLayerAutomaticResponse, request);
        }

        /**
         * An Async wrapper for UpdateApplicationLayerAutomaticResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationLayerAutomaticResponseRequestT = Model::UpdateApplicationLayerAutomaticResponseRequest>
        void UpdateApplicationLayerAutomaticResponseAsync(const UpdateApplicationLayerAutomaticResponseRequestT& request, const UpdateApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::UpdateApplicationLayerAutomaticResponse, request, handler, context);
        }

        /**
         * <p>Updates the details of the list of email addresses and phone numbers that the
         * Shield Response Team (SRT) can use to contact you if you have proactive
         * engagement enabled, for escalations to the SRT and to initiate proactive
         * customer support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateEmergencyContactSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmergencyContactSettingsOutcome UpdateEmergencyContactSettings(const Model::UpdateEmergencyContactSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateEmergencyContactSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEmergencyContactSettingsRequestT = Model::UpdateEmergencyContactSettingsRequest>
        Model::UpdateEmergencyContactSettingsOutcomeCallable UpdateEmergencyContactSettingsCallable(const UpdateEmergencyContactSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::UpdateEmergencyContactSettings, request);
        }

        /**
         * An Async wrapper for UpdateEmergencyContactSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEmergencyContactSettingsRequestT = Model::UpdateEmergencyContactSettingsRequest>
        void UpdateEmergencyContactSettingsAsync(const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateEmergencyContactSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::UpdateEmergencyContactSettings, request, handler, context);
        }

        /**
         * <p>Updates an existing protection group. A protection group is a grouping of
         * protected resources so they can be handled as a collective. This resource
         * grouping improves the accuracy of detection and reduces false positives.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProtectionGroupOutcome UpdateProtectionGroup(const Model::UpdateProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProtectionGroupRequestT = Model::UpdateProtectionGroupRequest>
        Model::UpdateProtectionGroupOutcomeCallable UpdateProtectionGroupCallable(const UpdateProtectionGroupRequestT& request) const
        {
            return SubmitCallable(&ShieldClient::UpdateProtectionGroup, request);
        }

        /**
         * An Async wrapper for UpdateProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProtectionGroupRequestT = Model::UpdateProtectionGroupRequest>
        void UpdateProtectionGroupAsync(const UpdateProtectionGroupRequestT& request, const UpdateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ShieldClient::UpdateProtectionGroup, request, handler, context);
        }

        /**
         * <p>Updates the details of an existing subscription. Only enter values for
         * parameters you want to change. Empty parameters are not updated.</p> 
         * <p>For accounts that are members of an Organizations organization, Shield
         * Advanced subscriptions are billed against the organization's payer account,
         * regardless of whether the payer account itself is subscribed. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionOutcome UpdateSubscription(const Model::UpdateSubscriptionRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriptionRequestT = Model::UpdateSubscriptionRequest>
        Model::UpdateSubscriptionOutcomeCallable UpdateSubscriptionCallable(const UpdateSubscriptionRequestT& request = {}) const
        {
            return SubmitCallable(&ShieldClient::UpdateSubscription, request);
        }

        /**
         * An Async wrapper for UpdateSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriptionRequestT = Model::UpdateSubscriptionRequest>
        void UpdateSubscriptionAsync(const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateSubscriptionRequestT& request = {}) const
        {
            return SubmitAsync(&ShieldClient::UpdateSubscription, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ShieldEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ShieldClient>;

  };

} // namespace Shield
} // namespace Aws
