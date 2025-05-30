/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/route53/Route53Client.h>
#include <aws/route53/Route53EndpointProvider.h>
#include <aws/route53/Route53EndpointRules.h>
#include <aws/route53/Route53ErrorMarshaller.h>
#include <aws/route53/Route53Errors.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53ServiceClientModel.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/AccountLimit.h>
#include <aws/route53/model/AccountLimitType.h>
#include <aws/route53/model/ActivateKeySigningKeyRequest.h>
#include <aws/route53/model/ActivateKeySigningKeyResult.h>
#include <aws/route53/model/AlarmIdentifier.h>
#include <aws/route53/model/AliasTarget.h>
#include <aws/route53/model/AssociateVPCWithHostedZoneRequest.h>
#include <aws/route53/model/AssociateVPCWithHostedZoneResult.h>
#include <aws/route53/model/Change.h>
#include <aws/route53/model/ChangeAction.h>
#include <aws/route53/model/ChangeBatch.h>
#include <aws/route53/model/ChangeCidrCollectionRequest.h>
#include <aws/route53/model/ChangeCidrCollectionResult.h>
#include <aws/route53/model/ChangeInfo.h>
#include <aws/route53/model/ChangeResourceRecordSetsRequest.h>
#include <aws/route53/model/ChangeResourceRecordSetsResult.h>
#include <aws/route53/model/ChangeStatus.h>
#include <aws/route53/model/ChangeTagsForResourceRequest.h>
#include <aws/route53/model/ChangeTagsForResourceResult.h>
#include <aws/route53/model/CidrBlockSummary.h>
#include <aws/route53/model/CidrCollection.h>
#include <aws/route53/model/CidrCollectionChange.h>
#include <aws/route53/model/CidrCollectionChangeAction.h>
#include <aws/route53/model/CidrRoutingConfig.h>
#include <aws/route53/model/CloudWatchAlarmConfiguration.h>
#include <aws/route53/model/CloudWatchRegion.h>
#include <aws/route53/model/CollectionSummary.h>
#include <aws/route53/model/ComparisonOperator.h>
#include <aws/route53/model/Coordinates.h>
#include <aws/route53/model/CreateCidrCollectionRequest.h>
#include <aws/route53/model/CreateCidrCollectionResult.h>
#include <aws/route53/model/CreateHealthCheckRequest.h>
#include <aws/route53/model/CreateHealthCheckResult.h>
#include <aws/route53/model/CreateHostedZoneRequest.h>
#include <aws/route53/model/CreateHostedZoneResult.h>
#include <aws/route53/model/CreateKeySigningKeyRequest.h>
#include <aws/route53/model/CreateKeySigningKeyResult.h>
#include <aws/route53/model/CreateQueryLoggingConfigRequest.h>
#include <aws/route53/model/CreateQueryLoggingConfigResult.h>
#include <aws/route53/model/CreateReusableDelegationSetRequest.h>
#include <aws/route53/model/CreateReusableDelegationSetResult.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceResult.h>
#include <aws/route53/model/CreateTrafficPolicyRequest.h>
#include <aws/route53/model/CreateTrafficPolicyResult.h>
#include <aws/route53/model/CreateTrafficPolicyVersionRequest.h>
#include <aws/route53/model/CreateTrafficPolicyVersionResult.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationResult.h>
#include <aws/route53/model/DNSSECStatus.h>
#include <aws/route53/model/DeactivateKeySigningKeyRequest.h>
#include <aws/route53/model/DeactivateKeySigningKeyResult.h>
#include <aws/route53/model/DelegationSet.h>
#include <aws/route53/model/DeleteCidrCollectionRequest.h>
#include <aws/route53/model/DeleteCidrCollectionResult.h>
#include <aws/route53/model/DeleteHealthCheckRequest.h>
#include <aws/route53/model/DeleteHealthCheckResult.h>
#include <aws/route53/model/DeleteHostedZoneRequest.h>
#include <aws/route53/model/DeleteHostedZoneResult.h>
#include <aws/route53/model/DeleteKeySigningKeyRequest.h>
#include <aws/route53/model/DeleteKeySigningKeyResult.h>
#include <aws/route53/model/DeleteQueryLoggingConfigRequest.h>
#include <aws/route53/model/DeleteQueryLoggingConfigResult.h>
#include <aws/route53/model/DeleteReusableDelegationSetRequest.h>
#include <aws/route53/model/DeleteReusableDelegationSetResult.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceResult.h>
#include <aws/route53/model/DeleteTrafficPolicyRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyResult.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationResult.h>
#include <aws/route53/model/Dimension.h>
#include <aws/route53/model/DisableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/DisableHostedZoneDNSSECResult.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneRequest.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneResult.h>
#include <aws/route53/model/EnableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/EnableHostedZoneDNSSECResult.h>
#include <aws/route53/model/GeoLocation.h>
#include <aws/route53/model/GeoLocationDetails.h>
#include <aws/route53/model/GeoProximityLocation.h>
#include <aws/route53/model/GetAccountLimitRequest.h>
#include <aws/route53/model/GetAccountLimitResult.h>
#include <aws/route53/model/GetChangeRequest.h>
#include <aws/route53/model/GetChangeResult.h>
#include <aws/route53/model/GetCheckerIpRangesRequest.h>
#include <aws/route53/model/GetCheckerIpRangesResult.h>
#include <aws/route53/model/GetDNSSECRequest.h>
#include <aws/route53/model/GetDNSSECResult.h>
#include <aws/route53/model/GetGeoLocationRequest.h>
#include <aws/route53/model/GetGeoLocationResult.h>
#include <aws/route53/model/GetHealthCheckCountRequest.h>
#include <aws/route53/model/GetHealthCheckCountResult.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonRequest.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonResult.h>
#include <aws/route53/model/GetHealthCheckRequest.h>
#include <aws/route53/model/GetHealthCheckResult.h>
#include <aws/route53/model/GetHealthCheckStatusRequest.h>
#include <aws/route53/model/GetHealthCheckStatusResult.h>
#include <aws/route53/model/GetHostedZoneCountRequest.h>
#include <aws/route53/model/GetHostedZoneCountResult.h>
#include <aws/route53/model/GetHostedZoneLimitRequest.h>
#include <aws/route53/model/GetHostedZoneLimitResult.h>
#include <aws/route53/model/GetHostedZoneRequest.h>
#include <aws/route53/model/GetHostedZoneResult.h>
#include <aws/route53/model/GetQueryLoggingConfigRequest.h>
#include <aws/route53/model/GetQueryLoggingConfigResult.h>
#include <aws/route53/model/GetReusableDelegationSetLimitRequest.h>
#include <aws/route53/model/GetReusableDelegationSetLimitResult.h>
#include <aws/route53/model/GetReusableDelegationSetRequest.h>
#include <aws/route53/model/GetReusableDelegationSetResult.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountResult.h>
#include <aws/route53/model/GetTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceResult.h>
#include <aws/route53/model/GetTrafficPolicyRequest.h>
#include <aws/route53/model/GetTrafficPolicyResult.h>
#include <aws/route53/model/HealthCheck.h>
#include <aws/route53/model/HealthCheckConfig.h>
#include <aws/route53/model/HealthCheckObservation.h>
#include <aws/route53/model/HealthCheckRegion.h>
#include <aws/route53/model/HealthCheckType.h>
#include <aws/route53/model/HostedZone.h>
#include <aws/route53/model/HostedZoneConfig.h>
#include <aws/route53/model/HostedZoneLimit.h>
#include <aws/route53/model/HostedZoneLimitType.h>
#include <aws/route53/model/HostedZoneOwner.h>
#include <aws/route53/model/HostedZoneSummary.h>
#include <aws/route53/model/HostedZoneType.h>
#include <aws/route53/model/InsufficientDataHealthStatus.h>
#include <aws/route53/model/InvalidChangeBatch.h>
#include <aws/route53/model/KeySigningKey.h>
#include <aws/route53/model/LinkedService.h>
#include <aws/route53/model/ListCidrBlocksRequest.h>
#include <aws/route53/model/ListCidrBlocksResult.h>
#include <aws/route53/model/ListCidrCollectionsRequest.h>
#include <aws/route53/model/ListCidrCollectionsResult.h>
#include <aws/route53/model/ListCidrLocationsRequest.h>
#include <aws/route53/model/ListCidrLocationsResult.h>
#include <aws/route53/model/ListGeoLocationsRequest.h>
#include <aws/route53/model/ListGeoLocationsResult.h>
#include <aws/route53/model/ListHealthChecksRequest.h>
#include <aws/route53/model/ListHealthChecksResult.h>
#include <aws/route53/model/ListHostedZonesByNameRequest.h>
#include <aws/route53/model/ListHostedZonesByNameResult.h>
#include <aws/route53/model/ListHostedZonesByVPCRequest.h>
#include <aws/route53/model/ListHostedZonesByVPCResult.h>
#include <aws/route53/model/ListHostedZonesRequest.h>
#include <aws/route53/model/ListHostedZonesResult.h>
#include <aws/route53/model/ListQueryLoggingConfigsRequest.h>
#include <aws/route53/model/ListQueryLoggingConfigsResult.h>
#include <aws/route53/model/ListResourceRecordSetsRequest.h>
#include <aws/route53/model/ListResourceRecordSetsResult.h>
#include <aws/route53/model/ListReusableDelegationSetsRequest.h>
#include <aws/route53/model/ListReusableDelegationSetsResult.h>
#include <aws/route53/model/ListTagsForResourceRequest.h>
#include <aws/route53/model/ListTagsForResourceResult.h>
#include <aws/route53/model/ListTagsForResourcesRequest.h>
#include <aws/route53/model/ListTagsForResourcesResult.h>
#include <aws/route53/model/ListTrafficPoliciesRequest.h>
#include <aws/route53/model/ListTrafficPoliciesResult.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneResult.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyResult.h>
#include <aws/route53/model/ListTrafficPolicyInstancesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesResult.h>
#include <aws/route53/model/ListTrafficPolicyVersionsRequest.h>
#include <aws/route53/model/ListTrafficPolicyVersionsResult.h>
#include <aws/route53/model/ListVPCAssociationAuthorizationsRequest.h>
#include <aws/route53/model/ListVPCAssociationAuthorizationsResult.h>
#include <aws/route53/model/LocationSummary.h>
#include <aws/route53/model/QueryLoggingConfig.h>
#include <aws/route53/model/RRType.h>
#include <aws/route53/model/ResettableElementName.h>
#include <aws/route53/model/ResourceRecord.h>
#include <aws/route53/model/ResourceRecordSet.h>
#include <aws/route53/model/ResourceRecordSetFailover.h>
#include <aws/route53/model/ResourceRecordSetRegion.h>
#include <aws/route53/model/ResourceTagSet.h>
#include <aws/route53/model/ReusableDelegationSetLimit.h>
#include <aws/route53/model/ReusableDelegationSetLimitType.h>
#include <aws/route53/model/Statistic.h>
#include <aws/route53/model/StatusReport.h>
#include <aws/route53/model/Tag.h>
#include <aws/route53/model/TagResourceType.h>
#include <aws/route53/model/TestDNSAnswerRequest.h>
#include <aws/route53/model/TestDNSAnswerResult.h>
#include <aws/route53/model/TrafficPolicy.h>
#include <aws/route53/model/TrafficPolicyInstance.h>
#include <aws/route53/model/TrafficPolicySummary.h>
#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/route53/model/UpdateHealthCheckResult.h>
#include <aws/route53/model/UpdateHostedZoneCommentRequest.h>
#include <aws/route53/model/UpdateHostedZoneCommentResult.h>
#include <aws/route53/model/UpdateTrafficPolicyCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyCommentResult.h>
#include <aws/route53/model/UpdateTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyInstanceResult.h>
#include <aws/route53/model/VPC.h>
#include <aws/route53/model/VPCRegion.h>

using Route53IncludeTest = ::testing::Test;

TEST_F(Route53IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Route53::Route53Client>("Route53IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
