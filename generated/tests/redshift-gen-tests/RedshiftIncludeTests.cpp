/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/RedshiftEndpointProvider.h>
#include <aws/redshift/RedshiftEndpointRules.h>
#include <aws/redshift/RedshiftErrorMarshaller.h>
#include <aws/redshift/RedshiftErrors.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/RedshiftServiceClientModel.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/AcceptReservedNodeExchangeRequest.h>
#include <aws/redshift/model/AcceptReservedNodeExchangeResult.h>
#include <aws/redshift/model/AccountAttribute.h>
#include <aws/redshift/model/AccountWithRestoreAccess.h>
#include <aws/redshift/model/ActionType.h>
#include <aws/redshift/model/AddPartnerRequest.h>
#include <aws/redshift/model/AddPartnerResult.h>
#include <aws/redshift/model/AquaConfiguration.h>
#include <aws/redshift/model/AquaConfigurationStatus.h>
#include <aws/redshift/model/AquaStatus.h>
#include <aws/redshift/model/AssociateDataShareConsumerRequest.h>
#include <aws/redshift/model/AssociateDataShareConsumerResult.h>
#include <aws/redshift/model/Association.h>
#include <aws/redshift/model/AttributeValueTarget.h>
#include <aws/redshift/model/AuthenticationProfile.h>
#include <aws/redshift/model/AuthorizationStatus.h>
#include <aws/redshift/model/AuthorizeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/AuthorizeClusterSecurityGroupIngressResult.h>
#include <aws/redshift/model/AuthorizeDataShareRequest.h>
#include <aws/redshift/model/AuthorizeDataShareResult.h>
#include <aws/redshift/model/AuthorizeEndpointAccessRequest.h>
#include <aws/redshift/model/AuthorizeEndpointAccessResult.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessRequest.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessResult.h>
#include <aws/redshift/model/AuthorizedTokenIssuer.h>
#include <aws/redshift/model/AvailabilityZone.h>
#include <aws/redshift/model/BatchDeleteClusterSnapshotsRequest.h>
#include <aws/redshift/model/BatchDeleteClusterSnapshotsResult.h>
#include <aws/redshift/model/BatchModifyClusterSnapshotsRequest.h>
#include <aws/redshift/model/BatchModifyClusterSnapshotsResult.h>
#include <aws/redshift/model/CancelResizeRequest.h>
#include <aws/redshift/model/CancelResizeResult.h>
#include <aws/redshift/model/CertificateAssociation.h>
#include <aws/redshift/model/Cluster.h>
#include <aws/redshift/model/ClusterAssociatedToSchedule.h>
#include <aws/redshift/model/ClusterDbRevision.h>
#include <aws/redshift/model/ClusterIamRole.h>
#include <aws/redshift/model/ClusterNode.h>
#include <aws/redshift/model/ClusterParameterGroup.h>
#include <aws/redshift/model/ClusterParameterGroupStatus.h>
#include <aws/redshift/model/ClusterParameterStatus.h>
#include <aws/redshift/model/ClusterSecurityGroup.h>
#include <aws/redshift/model/ClusterSecurityGroupMembership.h>
#include <aws/redshift/model/ClusterSnapshotCopyStatus.h>
#include <aws/redshift/model/ClusterSubnetGroup.h>
#include <aws/redshift/model/ClusterVersion.h>
#include <aws/redshift/model/CopyClusterSnapshotRequest.h>
#include <aws/redshift/model/CopyClusterSnapshotResult.h>
#include <aws/redshift/model/CreateAuthenticationProfileRequest.h>
#include <aws/redshift/model/CreateAuthenticationProfileResult.h>
#include <aws/redshift/model/CreateClusterParameterGroupRequest.h>
#include <aws/redshift/model/CreateClusterParameterGroupResult.h>
#include <aws/redshift/model/CreateClusterRequest.h>
#include <aws/redshift/model/CreateClusterResult.h>
#include <aws/redshift/model/CreateClusterSecurityGroupRequest.h>
#include <aws/redshift/model/CreateClusterSecurityGroupResult.h>
#include <aws/redshift/model/CreateClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateClusterSnapshotResult.h>
#include <aws/redshift/model/CreateClusterSubnetGroupRequest.h>
#include <aws/redshift/model/CreateClusterSubnetGroupResult.h>
#include <aws/redshift/model/CreateCustomDomainAssociationRequest.h>
#include <aws/redshift/model/CreateCustomDomainAssociationResult.h>
#include <aws/redshift/model/CreateEndpointAccessRequest.h>
#include <aws/redshift/model/CreateEndpointAccessResult.h>
#include <aws/redshift/model/CreateEventSubscriptionRequest.h>
#include <aws/redshift/model/CreateEventSubscriptionResult.h>
#include <aws/redshift/model/CreateHsmClientCertificateRequest.h>
#include <aws/redshift/model/CreateHsmClientCertificateResult.h>
#include <aws/redshift/model/CreateHsmConfigurationRequest.h>
#include <aws/redshift/model/CreateHsmConfigurationResult.h>
#include <aws/redshift/model/CreateIntegrationRequest.h>
#include <aws/redshift/model/CreateIntegrationResult.h>
#include <aws/redshift/model/CreateRedshiftIdcApplicationRequest.h>
#include <aws/redshift/model/CreateRedshiftIdcApplicationResult.h>
#include <aws/redshift/model/CreateScheduledActionRequest.h>
#include <aws/redshift/model/CreateScheduledActionResult.h>
#include <aws/redshift/model/CreateSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/CreateSnapshotCopyGrantResult.h>
#include <aws/redshift/model/CreateSnapshotScheduleRequest.h>
#include <aws/redshift/model/CreateSnapshotScheduleResult.h>
#include <aws/redshift/model/CreateTagsRequest.h>
#include <aws/redshift/model/CreateUsageLimitRequest.h>
#include <aws/redshift/model/CreateUsageLimitResult.h>
#include <aws/redshift/model/DataShare.h>
#include <aws/redshift/model/DataShareAssociation.h>
#include <aws/redshift/model/DataShareStatus.h>
#include <aws/redshift/model/DataShareStatusForConsumer.h>
#include <aws/redshift/model/DataShareStatusForProducer.h>
#include <aws/redshift/model/DataShareType.h>
#include <aws/redshift/model/DataTransferProgress.h>
#include <aws/redshift/model/DeauthorizeDataShareRequest.h>
#include <aws/redshift/model/DeauthorizeDataShareResult.h>
#include <aws/redshift/model/DefaultClusterParameters.h>
#include <aws/redshift/model/DeferredMaintenanceWindow.h>
#include <aws/redshift/model/DeleteAuthenticationProfileRequest.h>
#include <aws/redshift/model/DeleteAuthenticationProfileResult.h>
#include <aws/redshift/model/DeleteClusterParameterGroupRequest.h>
#include <aws/redshift/model/DeleteClusterRequest.h>
#include <aws/redshift/model/DeleteClusterResult.h>
#include <aws/redshift/model/DeleteClusterSecurityGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSnapshotMessage.h>
#include <aws/redshift/model/DeleteClusterSnapshotRequest.h>
#include <aws/redshift/model/DeleteClusterSnapshotResult.h>
#include <aws/redshift/model/DeleteClusterSubnetGroupRequest.h>
#include <aws/redshift/model/DeleteCustomDomainAssociationRequest.h>
#include <aws/redshift/model/DeleteEndpointAccessRequest.h>
#include <aws/redshift/model/DeleteEndpointAccessResult.h>
#include <aws/redshift/model/DeleteEventSubscriptionRequest.h>
#include <aws/redshift/model/DeleteHsmClientCertificateRequest.h>
#include <aws/redshift/model/DeleteHsmConfigurationRequest.h>
#include <aws/redshift/model/DeleteIntegrationRequest.h>
#include <aws/redshift/model/DeleteIntegrationResult.h>
#include <aws/redshift/model/DeletePartnerRequest.h>
#include <aws/redshift/model/DeletePartnerResult.h>
#include <aws/redshift/model/DeleteRedshiftIdcApplicationRequest.h>
#include <aws/redshift/model/DeleteResourcePolicyRequest.h>
#include <aws/redshift/model/DeleteScheduledActionRequest.h>
#include <aws/redshift/model/DeleteSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/DeleteSnapshotScheduleRequest.h>
#include <aws/redshift/model/DeleteTagsRequest.h>
#include <aws/redshift/model/DeleteUsageLimitRequest.h>
#include <aws/redshift/model/DeregisterNamespaceRequest.h>
#include <aws/redshift/model/DeregisterNamespaceResult.h>
#include <aws/redshift/model/DescribeAccountAttributesRequest.h>
#include <aws/redshift/model/DescribeAccountAttributesResult.h>
#include <aws/redshift/model/DescribeAuthenticationProfilesRequest.h>
#include <aws/redshift/model/DescribeAuthenticationProfilesResult.h>
#include <aws/redshift/model/DescribeClusterDbRevisionsRequest.h>
#include <aws/redshift/model/DescribeClusterDbRevisionsResult.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsResult.h>
#include <aws/redshift/model/DescribeClusterParametersRequest.h>
#include <aws/redshift/model/DescribeClusterParametersResult.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsResult.h>
#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/redshift/model/DescribeClusterSnapshotsResult.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsResult.h>
#include <aws/redshift/model/DescribeClusterTracksRequest.h>
#include <aws/redshift/model/DescribeClusterTracksResult.h>
#include <aws/redshift/model/DescribeClusterVersionsRequest.h>
#include <aws/redshift/model/DescribeClusterVersionsResult.h>
#include <aws/redshift/model/DescribeClustersRequest.h>
#include <aws/redshift/model/DescribeClustersResult.h>
#include <aws/redshift/model/DescribeCustomDomainAssociationsRequest.h>
#include <aws/redshift/model/DescribeCustomDomainAssociationsResult.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerRequest.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerResult.h>
#include <aws/redshift/model/DescribeDataSharesForProducerRequest.h>
#include <aws/redshift/model/DescribeDataSharesForProducerResult.h>
#include <aws/redshift/model/DescribeDataSharesRequest.h>
#include <aws/redshift/model/DescribeDataSharesResult.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersResult.h>
#include <aws/redshift/model/DescribeEndpointAccessRequest.h>
#include <aws/redshift/model/DescribeEndpointAccessResult.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationRequest.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationResult.h>
#include <aws/redshift/model/DescribeEventCategoriesRequest.h>
#include <aws/redshift/model/DescribeEventCategoriesResult.h>
#include <aws/redshift/model/DescribeEventSubscriptionsRequest.h>
#include <aws/redshift/model/DescribeEventSubscriptionsResult.h>
#include <aws/redshift/model/DescribeEventsRequest.h>
#include <aws/redshift/model/DescribeEventsResult.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesRequest.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesResult.h>
#include <aws/redshift/model/DescribeHsmConfigurationsRequest.h>
#include <aws/redshift/model/DescribeHsmConfigurationsResult.h>
#include <aws/redshift/model/DescribeInboundIntegrationsRequest.h>
#include <aws/redshift/model/DescribeInboundIntegrationsResult.h>
#include <aws/redshift/model/DescribeIntegrationsFilter.h>
#include <aws/redshift/model/DescribeIntegrationsFilterName.h>
#include <aws/redshift/model/DescribeIntegrationsRequest.h>
#include <aws/redshift/model/DescribeIntegrationsResult.h>
#include <aws/redshift/model/DescribeLoggingStatusRequest.h>
#include <aws/redshift/model/DescribeLoggingStatusResult.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsRequest.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsResult.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsRequest.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsResult.h>
#include <aws/redshift/model/DescribePartnersRequest.h>
#include <aws/redshift/model/DescribePartnersResult.h>
#include <aws/redshift/model/DescribeRedshiftIdcApplicationsRequest.h>
#include <aws/redshift/model/DescribeRedshiftIdcApplicationsResult.h>
#include <aws/redshift/model/DescribeReservedNodeExchangeStatusRequest.h>
#include <aws/redshift/model/DescribeReservedNodeExchangeStatusResult.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsRequest.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsResult.h>
#include <aws/redshift/model/DescribeReservedNodesRequest.h>
#include <aws/redshift/model/DescribeReservedNodesResult.h>
#include <aws/redshift/model/DescribeResizeRequest.h>
#include <aws/redshift/model/DescribeResizeResult.h>
#include <aws/redshift/model/DescribeScheduledActionsRequest.h>
#include <aws/redshift/model/DescribeScheduledActionsResult.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsRequest.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsResult.h>
#include <aws/redshift/model/DescribeSnapshotSchedulesRequest.h>
#include <aws/redshift/model/DescribeSnapshotSchedulesResult.h>
#include <aws/redshift/model/DescribeStorageRequest.h>
#include <aws/redshift/model/DescribeStorageResult.h>
#include <aws/redshift/model/DescribeTableRestoreStatusRequest.h>
#include <aws/redshift/model/DescribeTableRestoreStatusResult.h>
#include <aws/redshift/model/DescribeTagsRequest.h>
#include <aws/redshift/model/DescribeTagsResult.h>
#include <aws/redshift/model/DescribeUsageLimitsRequest.h>
#include <aws/redshift/model/DescribeUsageLimitsResult.h>
#include <aws/redshift/model/DisableLoggingRequest.h>
#include <aws/redshift/model/DisableLoggingResult.h>
#include <aws/redshift/model/DisableSnapshotCopyRequest.h>
#include <aws/redshift/model/DisableSnapshotCopyResult.h>
#include <aws/redshift/model/DisassociateDataShareConsumerRequest.h>
#include <aws/redshift/model/DisassociateDataShareConsumerResult.h>
#include <aws/redshift/model/EC2SecurityGroup.h>
#include <aws/redshift/model/ElasticIpStatus.h>
#include <aws/redshift/model/EnableLoggingRequest.h>
#include <aws/redshift/model/EnableLoggingResult.h>
#include <aws/redshift/model/EnableSnapshotCopyRequest.h>
#include <aws/redshift/model/EnableSnapshotCopyResult.h>
#include <aws/redshift/model/Endpoint.h>
#include <aws/redshift/model/EndpointAccess.h>
#include <aws/redshift/model/EndpointAuthorization.h>
#include <aws/redshift/model/Event.h>
#include <aws/redshift/model/EventCategoriesMap.h>
#include <aws/redshift/model/EventInfoMap.h>
#include <aws/redshift/model/EventSubscription.h>
#include <aws/redshift/model/FailoverPrimaryComputeRequest.h>
#include <aws/redshift/model/FailoverPrimaryComputeResult.h>
#include <aws/redshift/model/GetClusterCredentialsRequest.h>
#include <aws/redshift/model/GetClusterCredentialsResult.h>
#include <aws/redshift/model/GetClusterCredentialsWithIAMRequest.h>
#include <aws/redshift/model/GetClusterCredentialsWithIAMResult.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsResult.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsResult.h>
#include <aws/redshift/model/GetResourcePolicyRequest.h>
#include <aws/redshift/model/GetResourcePolicyResult.h>
#include <aws/redshift/model/HsmClientCertificate.h>
#include <aws/redshift/model/HsmConfiguration.h>
#include <aws/redshift/model/HsmStatus.h>
#include <aws/redshift/model/IPRange.h>
#include <aws/redshift/model/ImpactRankingType.h>
#include <aws/redshift/model/InboundIntegration.h>
#include <aws/redshift/model/Integration.h>
#include <aws/redshift/model/IntegrationError.h>
#include <aws/redshift/model/LakeFormationQuery.h>
#include <aws/redshift/model/LakeFormationScopeUnion.h>
#include <aws/redshift/model/ListRecommendationsRequest.h>
#include <aws/redshift/model/ListRecommendationsResult.h>
#include <aws/redshift/model/LogDestinationType.h>
#include <aws/redshift/model/MaintenanceTrack.h>
#include <aws/redshift/model/Mode.h>
#include <aws/redshift/model/ModifyAquaConfigurationRequest.h>
#include <aws/redshift/model/ModifyAquaConfigurationResult.h>
#include <aws/redshift/model/ModifyAuthenticationProfileRequest.h>
#include <aws/redshift/model/ModifyAuthenticationProfileResult.h>
#include <aws/redshift/model/ModifyClusterDbRevisionRequest.h>
#include <aws/redshift/model/ModifyClusterDbRevisionResult.h>
#include <aws/redshift/model/ModifyClusterIamRolesRequest.h>
#include <aws/redshift/model/ModifyClusterIamRolesResult.h>
#include <aws/redshift/model/ModifyClusterMaintenanceRequest.h>
#include <aws/redshift/model/ModifyClusterMaintenanceResult.h>
#include <aws/redshift/model/ModifyClusterParameterGroupRequest.h>
#include <aws/redshift/model/ModifyClusterParameterGroupResult.h>
#include <aws/redshift/model/ModifyClusterRequest.h>
#include <aws/redshift/model/ModifyClusterResult.h>
#include <aws/redshift/model/ModifyClusterSnapshotRequest.h>
#include <aws/redshift/model/ModifyClusterSnapshotResult.h>
#include <aws/redshift/model/ModifyClusterSnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupRequest.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupResult.h>
#include <aws/redshift/model/ModifyCustomDomainAssociationRequest.h>
#include <aws/redshift/model/ModifyCustomDomainAssociationResult.h>
#include <aws/redshift/model/ModifyEndpointAccessRequest.h>
#include <aws/redshift/model/ModifyEndpointAccessResult.h>
#include <aws/redshift/model/ModifyEventSubscriptionRequest.h>
#include <aws/redshift/model/ModifyEventSubscriptionResult.h>
#include <aws/redshift/model/ModifyIntegrationRequest.h>
#include <aws/redshift/model/ModifyIntegrationResult.h>
#include <aws/redshift/model/ModifyRedshiftIdcApplicationRequest.h>
#include <aws/redshift/model/ModifyRedshiftIdcApplicationResult.h>
#include <aws/redshift/model/ModifyScheduledActionRequest.h>
#include <aws/redshift/model/ModifyScheduledActionResult.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodRequest.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodResult.h>
#include <aws/redshift/model/ModifySnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifySnapshotScheduleResult.h>
#include <aws/redshift/model/ModifyUsageLimitRequest.h>
#include <aws/redshift/model/ModifyUsageLimitResult.h>
#include <aws/redshift/model/NamespaceIdentifierUnion.h>
#include <aws/redshift/model/NamespaceRegistrationStatus.h>
#include <aws/redshift/model/NetworkInterface.h>
#include <aws/redshift/model/NodeConfigurationOption.h>
#include <aws/redshift/model/NodeConfigurationOptionsFilter.h>
#include <aws/redshift/model/NodeConfigurationOptionsFilterName.h>
#include <aws/redshift/model/OperatorType.h>
#include <aws/redshift/model/OrderableClusterOption.h>
#include <aws/redshift/model/Parameter.h>
#include <aws/redshift/model/ParameterApplyType.h>
#include <aws/redshift/model/PartnerIntegrationInfo.h>
#include <aws/redshift/model/PartnerIntegrationStatus.h>
#include <aws/redshift/model/PauseClusterMessage.h>
#include <aws/redshift/model/PauseClusterRequest.h>
#include <aws/redshift/model/PauseClusterResult.h>
#include <aws/redshift/model/PendingModifiedValues.h>
#include <aws/redshift/model/ProvisionedIdentifier.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingRequest.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingResult.h>
#include <aws/redshift/model/PutResourcePolicyRequest.h>
#include <aws/redshift/model/PutResourcePolicyResult.h>
#include <aws/redshift/model/ReadWriteAccess.h>
#include <aws/redshift/model/RebootClusterRequest.h>
#include <aws/redshift/model/RebootClusterResult.h>
#include <aws/redshift/model/Recommendation.h>
#include <aws/redshift/model/RecommendedAction.h>
#include <aws/redshift/model/RecommendedActionType.h>
#include <aws/redshift/model/RecurringCharge.h>
#include <aws/redshift/model/RedshiftIdcApplication.h>
#include <aws/redshift/model/ReferenceLink.h>
#include <aws/redshift/model/RegisterNamespaceRequest.h>
#include <aws/redshift/model/RegisterNamespaceResult.h>
#include <aws/redshift/model/RejectDataShareRequest.h>
#include <aws/redshift/model/RejectDataShareResult.h>
#include <aws/redshift/model/ReservedNode.h>
#include <aws/redshift/model/ReservedNodeConfigurationOption.h>
#include <aws/redshift/model/ReservedNodeExchangeActionType.h>
#include <aws/redshift/model/ReservedNodeExchangeStatus.h>
#include <aws/redshift/model/ReservedNodeExchangeStatusType.h>
#include <aws/redshift/model/ReservedNodeOffering.h>
#include <aws/redshift/model/ReservedNodeOfferingType.h>
#include <aws/redshift/model/ResetClusterParameterGroupRequest.h>
#include <aws/redshift/model/ResetClusterParameterGroupResult.h>
#include <aws/redshift/model/ResizeClusterMessage.h>
#include <aws/redshift/model/ResizeClusterRequest.h>
#include <aws/redshift/model/ResizeClusterResult.h>
#include <aws/redshift/model/ResizeInfo.h>
#include <aws/redshift/model/ResourcePolicy.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotRequest.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotResult.h>
#include <aws/redshift/model/RestoreStatus.h>
#include <aws/redshift/model/RestoreTableFromClusterSnapshotRequest.h>
#include <aws/redshift/model/RestoreTableFromClusterSnapshotResult.h>
#include <aws/redshift/model/ResumeClusterMessage.h>
#include <aws/redshift/model/ResumeClusterRequest.h>
#include <aws/redshift/model/ResumeClusterResult.h>
#include <aws/redshift/model/RevisionTarget.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressResult.h>
#include <aws/redshift/model/RevokeEndpointAccessRequest.h>
#include <aws/redshift/model/RevokeEndpointAccessResult.h>
#include <aws/redshift/model/RevokeSnapshotAccessRequest.h>
#include <aws/redshift/model/RevokeSnapshotAccessResult.h>
#include <aws/redshift/model/RotateEncryptionKeyRequest.h>
#include <aws/redshift/model/RotateEncryptionKeyResult.h>
#include <aws/redshift/model/S3AccessGrantsScopeUnion.h>
#include <aws/redshift/model/ScheduleState.h>
#include <aws/redshift/model/ScheduledAction.h>
#include <aws/redshift/model/ScheduledActionFilter.h>
#include <aws/redshift/model/ScheduledActionFilterName.h>
#include <aws/redshift/model/ScheduledActionState.h>
#include <aws/redshift/model/ScheduledActionType.h>
#include <aws/redshift/model/ScheduledActionTypeValues.h>
#include <aws/redshift/model/SecondaryClusterInfo.h>
#include <aws/redshift/model/ServerlessIdentifier.h>
#include <aws/redshift/model/ServiceAuthorization.h>
#include <aws/redshift/model/ServiceIntegrationsUnion.h>
#include <aws/redshift/model/Snapshot.h>
#include <aws/redshift/model/SnapshotAttributeToSortBy.h>
#include <aws/redshift/model/SnapshotCopyGrant.h>
#include <aws/redshift/model/SnapshotErrorMessage.h>
#include <aws/redshift/model/SnapshotSchedule.h>
#include <aws/redshift/model/SnapshotSortingEntity.h>
#include <aws/redshift/model/SortByOrder.h>
#include <aws/redshift/model/SourceType.h>
#include <aws/redshift/model/Subnet.h>
#include <aws/redshift/model/SupportedOperation.h>
#include <aws/redshift/model/SupportedPlatform.h>
#include <aws/redshift/model/TableRestoreStatus.h>
#include <aws/redshift/model/TableRestoreStatusType.h>
#include <aws/redshift/model/Tag.h>
#include <aws/redshift/model/TaggedResource.h>
#include <aws/redshift/model/UpdatePartnerStatusRequest.h>
#include <aws/redshift/model/UpdatePartnerStatusResult.h>
#include <aws/redshift/model/UpdateTarget.h>
#include <aws/redshift/model/UsageLimit.h>
#include <aws/redshift/model/UsageLimitBreachAction.h>
#include <aws/redshift/model/UsageLimitFeatureType.h>
#include <aws/redshift/model/UsageLimitLimitType.h>
#include <aws/redshift/model/UsageLimitPeriod.h>
#include <aws/redshift/model/VpcEndpoint.h>
#include <aws/redshift/model/VpcSecurityGroupMembership.h>
#include <aws/redshift/model/ZeroETLIntegrationStatus.h>

using RedshiftIncludeTest = ::testing::Test;

TEST_F(RedshiftIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Redshift::RedshiftClient>("RedshiftIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
