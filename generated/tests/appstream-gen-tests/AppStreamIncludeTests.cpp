/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/appstream/AppStreamClient.h>
#include <aws/appstream/AppStreamEndpointProvider.h>
#include <aws/appstream/AppStreamEndpointRules.h>
#include <aws/appstream/AppStreamErrorMarshaller.h>
#include <aws/appstream/AppStreamErrors.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/appstream/AppStreamServiceClientModel.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AccessEndpoint.h>
#include <aws/appstream/model/AccessEndpointType.h>
#include <aws/appstream/model/Action.h>
#include <aws/appstream/model/AppBlock.h>
#include <aws/appstream/model/AppBlockBuilder.h>
#include <aws/appstream/model/AppBlockBuilderAppBlockAssociation.h>
#include <aws/appstream/model/AppBlockBuilderAttribute.h>
#include <aws/appstream/model/AppBlockBuilderPlatformType.h>
#include <aws/appstream/model/AppBlockBuilderState.h>
#include <aws/appstream/model/AppBlockBuilderStateChangeReason.h>
#include <aws/appstream/model/AppBlockBuilderStateChangeReasonCode.h>
#include <aws/appstream/model/AppBlockState.h>
#include <aws/appstream/model/AppVisibility.h>
#include <aws/appstream/model/Application.h>
#include <aws/appstream/model/ApplicationAttribute.h>
#include <aws/appstream/model/ApplicationFleetAssociation.h>
#include <aws/appstream/model/ApplicationSettings.h>
#include <aws/appstream/model/ApplicationSettingsResponse.h>
#include <aws/appstream/model/AssociateAppBlockBuilderAppBlockRequest.h>
#include <aws/appstream/model/AssociateAppBlockBuilderAppBlockResult.h>
#include <aws/appstream/model/AssociateApplicationFleetRequest.h>
#include <aws/appstream/model/AssociateApplicationFleetResult.h>
#include <aws/appstream/model/AssociateApplicationToEntitlementRequest.h>
#include <aws/appstream/model/AssociateApplicationToEntitlementResult.h>
#include <aws/appstream/model/AssociateFleetRequest.h>
#include <aws/appstream/model/AssociateFleetResult.h>
#include <aws/appstream/model/AuthenticationType.h>
#include <aws/appstream/model/BatchAssociateUserStackRequest.h>
#include <aws/appstream/model/BatchAssociateUserStackResult.h>
#include <aws/appstream/model/BatchDisassociateUserStackRequest.h>
#include <aws/appstream/model/BatchDisassociateUserStackResult.h>
#include <aws/appstream/model/CertificateBasedAuthProperties.h>
#include <aws/appstream/model/CertificateBasedAuthStatus.h>
#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/appstream/model/ComputeCapacityStatus.h>
#include <aws/appstream/model/CopyImageRequest.h>
#include <aws/appstream/model/CopyImageResult.h>
#include <aws/appstream/model/CreateAppBlockBuilderRequest.h>
#include <aws/appstream/model/CreateAppBlockBuilderResult.h>
#include <aws/appstream/model/CreateAppBlockBuilderStreamingURLRequest.h>
#include <aws/appstream/model/CreateAppBlockBuilderStreamingURLResult.h>
#include <aws/appstream/model/CreateAppBlockRequest.h>
#include <aws/appstream/model/CreateAppBlockResult.h>
#include <aws/appstream/model/CreateApplicationRequest.h>
#include <aws/appstream/model/CreateApplicationResult.h>
#include <aws/appstream/model/CreateDirectoryConfigRequest.h>
#include <aws/appstream/model/CreateDirectoryConfigResult.h>
#include <aws/appstream/model/CreateEntitlementRequest.h>
#include <aws/appstream/model/CreateEntitlementResult.h>
#include <aws/appstream/model/CreateFleetRequest.h>
#include <aws/appstream/model/CreateFleetResult.h>
#include <aws/appstream/model/CreateImageBuilderRequest.h>
#include <aws/appstream/model/CreateImageBuilderResult.h>
#include <aws/appstream/model/CreateImageBuilderStreamingURLRequest.h>
#include <aws/appstream/model/CreateImageBuilderStreamingURLResult.h>
#include <aws/appstream/model/CreateStackRequest.h>
#include <aws/appstream/model/CreateStackResult.h>
#include <aws/appstream/model/CreateStreamingURLRequest.h>
#include <aws/appstream/model/CreateStreamingURLResult.h>
#include <aws/appstream/model/CreateThemeForStackRequest.h>
#include <aws/appstream/model/CreateThemeForStackResult.h>
#include <aws/appstream/model/CreateUpdatedImageRequest.h>
#include <aws/appstream/model/CreateUpdatedImageResult.h>
#include <aws/appstream/model/CreateUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/CreateUsageReportSubscriptionResult.h>
#include <aws/appstream/model/CreateUserRequest.h>
#include <aws/appstream/model/CreateUserResult.h>
#include <aws/appstream/model/DeleteAppBlockBuilderRequest.h>
#include <aws/appstream/model/DeleteAppBlockBuilderResult.h>
#include <aws/appstream/model/DeleteAppBlockRequest.h>
#include <aws/appstream/model/DeleteAppBlockResult.h>
#include <aws/appstream/model/DeleteApplicationRequest.h>
#include <aws/appstream/model/DeleteApplicationResult.h>
#include <aws/appstream/model/DeleteDirectoryConfigRequest.h>
#include <aws/appstream/model/DeleteDirectoryConfigResult.h>
#include <aws/appstream/model/DeleteEntitlementRequest.h>
#include <aws/appstream/model/DeleteEntitlementResult.h>
#include <aws/appstream/model/DeleteFleetRequest.h>
#include <aws/appstream/model/DeleteFleetResult.h>
#include <aws/appstream/model/DeleteImageBuilderRequest.h>
#include <aws/appstream/model/DeleteImageBuilderResult.h>
#include <aws/appstream/model/DeleteImagePermissionsRequest.h>
#include <aws/appstream/model/DeleteImagePermissionsResult.h>
#include <aws/appstream/model/DeleteImageRequest.h>
#include <aws/appstream/model/DeleteImageResult.h>
#include <aws/appstream/model/DeleteStackRequest.h>
#include <aws/appstream/model/DeleteStackResult.h>
#include <aws/appstream/model/DeleteThemeForStackRequest.h>
#include <aws/appstream/model/DeleteThemeForStackResult.h>
#include <aws/appstream/model/DeleteUsageReportSubscriptionRequest.h>
#include <aws/appstream/model/DeleteUsageReportSubscriptionResult.h>
#include <aws/appstream/model/DeleteUserRequest.h>
#include <aws/appstream/model/DeleteUserResult.h>
#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsRequest.h>
#include <aws/appstream/model/DescribeAppBlockBuilderAppBlockAssociationsResult.h>
#include <aws/appstream/model/DescribeAppBlockBuildersRequest.h>
#include <aws/appstream/model/DescribeAppBlockBuildersResult.h>
#include <aws/appstream/model/DescribeAppBlocksRequest.h>
#include <aws/appstream/model/DescribeAppBlocksResult.h>
#include <aws/appstream/model/DescribeApplicationFleetAssociationsRequest.h>
#include <aws/appstream/model/DescribeApplicationFleetAssociationsResult.h>
#include <aws/appstream/model/DescribeApplicationsRequest.h>
#include <aws/appstream/model/DescribeApplicationsResult.h>
#include <aws/appstream/model/DescribeDirectoryConfigsRequest.h>
#include <aws/appstream/model/DescribeDirectoryConfigsResult.h>
#include <aws/appstream/model/DescribeEntitlementsRequest.h>
#include <aws/appstream/model/DescribeEntitlementsResult.h>
#include <aws/appstream/model/DescribeFleetsRequest.h>
#include <aws/appstream/model/DescribeFleetsResult.h>
#include <aws/appstream/model/DescribeImageBuildersRequest.h>
#include <aws/appstream/model/DescribeImageBuildersResult.h>
#include <aws/appstream/model/DescribeImagePermissionsRequest.h>
#include <aws/appstream/model/DescribeImagePermissionsResult.h>
#include <aws/appstream/model/DescribeImagesRequest.h>
#include <aws/appstream/model/DescribeImagesResult.h>
#include <aws/appstream/model/DescribeSessionsRequest.h>
#include <aws/appstream/model/DescribeSessionsResult.h>
#include <aws/appstream/model/DescribeStacksRequest.h>
#include <aws/appstream/model/DescribeStacksResult.h>
#include <aws/appstream/model/DescribeThemeForStackRequest.h>
#include <aws/appstream/model/DescribeThemeForStackResult.h>
#include <aws/appstream/model/DescribeUsageReportSubscriptionsRequest.h>
#include <aws/appstream/model/DescribeUsageReportSubscriptionsResult.h>
#include <aws/appstream/model/DescribeUserStackAssociationsRequest.h>
#include <aws/appstream/model/DescribeUserStackAssociationsResult.h>
#include <aws/appstream/model/DescribeUsersRequest.h>
#include <aws/appstream/model/DescribeUsersResult.h>
#include <aws/appstream/model/DirectoryConfig.h>
#include <aws/appstream/model/DisableUserRequest.h>
#include <aws/appstream/model/DisableUserResult.h>
#include <aws/appstream/model/DisassociateAppBlockBuilderAppBlockRequest.h>
#include <aws/appstream/model/DisassociateAppBlockBuilderAppBlockResult.h>
#include <aws/appstream/model/DisassociateApplicationFleetRequest.h>
#include <aws/appstream/model/DisassociateApplicationFleetResult.h>
#include <aws/appstream/model/DisassociateApplicationFromEntitlementRequest.h>
#include <aws/appstream/model/DisassociateApplicationFromEntitlementResult.h>
#include <aws/appstream/model/DisassociateFleetRequest.h>
#include <aws/appstream/model/DisassociateFleetResult.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/appstream/model/DynamicAppProvidersEnabled.h>
#include <aws/appstream/model/EnableUserRequest.h>
#include <aws/appstream/model/EnableUserResult.h>
#include <aws/appstream/model/EntitledApplication.h>
#include <aws/appstream/model/Entitlement.h>
#include <aws/appstream/model/EntitlementAttribute.h>
#include <aws/appstream/model/ErrorDetails.h>
#include <aws/appstream/model/ExpireSessionRequest.h>
#include <aws/appstream/model/ExpireSessionResult.h>
#include <aws/appstream/model/Fleet.h>
#include <aws/appstream/model/FleetAttribute.h>
#include <aws/appstream/model/FleetError.h>
#include <aws/appstream/model/FleetErrorCode.h>
#include <aws/appstream/model/FleetState.h>
#include <aws/appstream/model/FleetType.h>
#include <aws/appstream/model/Image.h>
#include <aws/appstream/model/ImageBuilder.h>
#include <aws/appstream/model/ImageBuilderState.h>
#include <aws/appstream/model/ImageBuilderStateChangeReason.h>
#include <aws/appstream/model/ImageBuilderStateChangeReasonCode.h>
#include <aws/appstream/model/ImagePermissions.h>
#include <aws/appstream/model/ImageSharedWithOthers.h>
#include <aws/appstream/model/ImageState.h>
#include <aws/appstream/model/ImageStateChangeReason.h>
#include <aws/appstream/model/ImageStateChangeReasonCode.h>
#include <aws/appstream/model/LastReportGenerationExecutionError.h>
#include <aws/appstream/model/LatestAppstreamAgentVersion.h>
#include <aws/appstream/model/ListAssociatedFleetsRequest.h>
#include <aws/appstream/model/ListAssociatedFleetsResult.h>
#include <aws/appstream/model/ListAssociatedStacksRequest.h>
#include <aws/appstream/model/ListAssociatedStacksResult.h>
#include <aws/appstream/model/ListEntitledApplicationsRequest.h>
#include <aws/appstream/model/ListEntitledApplicationsResult.h>
#include <aws/appstream/model/ListTagsForResourceRequest.h>
#include <aws/appstream/model/ListTagsForResourceResult.h>
#include <aws/appstream/model/MessageAction.h>
#include <aws/appstream/model/NetworkAccessConfiguration.h>
#include <aws/appstream/model/PackagingType.h>
#include <aws/appstream/model/Permission.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/appstream/model/PreferredProtocol.h>
#include <aws/appstream/model/ResourceError.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/appstream/model/ScriptDetails.h>
#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <aws/appstream/model/Session.h>
#include <aws/appstream/model/SessionConnectionState.h>
#include <aws/appstream/model/SessionState.h>
#include <aws/appstream/model/SharedImagePermissions.h>
#include <aws/appstream/model/Stack.h>
#include <aws/appstream/model/StackAttribute.h>
#include <aws/appstream/model/StackError.h>
#include <aws/appstream/model/StackErrorCode.h>
#include <aws/appstream/model/StartAppBlockBuilderRequest.h>
#include <aws/appstream/model/StartAppBlockBuilderResult.h>
#include <aws/appstream/model/StartFleetRequest.h>
#include <aws/appstream/model/StartFleetResult.h>
#include <aws/appstream/model/StartImageBuilderRequest.h>
#include <aws/appstream/model/StartImageBuilderResult.h>
#include <aws/appstream/model/StopAppBlockBuilderRequest.h>
#include <aws/appstream/model/StopAppBlockBuilderResult.h>
#include <aws/appstream/model/StopFleetRequest.h>
#include <aws/appstream/model/StopFleetResult.h>
#include <aws/appstream/model/StopImageBuilderRequest.h>
#include <aws/appstream/model/StopImageBuilderResult.h>
#include <aws/appstream/model/StorageConnector.h>
#include <aws/appstream/model/StorageConnectorType.h>
#include <aws/appstream/model/StreamView.h>
#include <aws/appstream/model/StreamingExperienceSettings.h>
#include <aws/appstream/model/TagResourceRequest.h>
#include <aws/appstream/model/TagResourceResult.h>
#include <aws/appstream/model/Theme.h>
#include <aws/appstream/model/ThemeAttribute.h>
#include <aws/appstream/model/ThemeFooterLink.h>
#include <aws/appstream/model/ThemeState.h>
#include <aws/appstream/model/ThemeStyling.h>
#include <aws/appstream/model/UntagResourceRequest.h>
#include <aws/appstream/model/UntagResourceResult.h>
#include <aws/appstream/model/UpdateAppBlockBuilderRequest.h>
#include <aws/appstream/model/UpdateAppBlockBuilderResult.h>
#include <aws/appstream/model/UpdateApplicationRequest.h>
#include <aws/appstream/model/UpdateApplicationResult.h>
#include <aws/appstream/model/UpdateDirectoryConfigRequest.h>
#include <aws/appstream/model/UpdateDirectoryConfigResult.h>
#include <aws/appstream/model/UpdateEntitlementRequest.h>
#include <aws/appstream/model/UpdateEntitlementResult.h>
#include <aws/appstream/model/UpdateFleetRequest.h>
#include <aws/appstream/model/UpdateFleetResult.h>
#include <aws/appstream/model/UpdateImagePermissionsRequest.h>
#include <aws/appstream/model/UpdateImagePermissionsResult.h>
#include <aws/appstream/model/UpdateStackRequest.h>
#include <aws/appstream/model/UpdateStackResult.h>
#include <aws/appstream/model/UpdateThemeForStackRequest.h>
#include <aws/appstream/model/UpdateThemeForStackResult.h>
#include <aws/appstream/model/UsageReportExecutionErrorCode.h>
#include <aws/appstream/model/UsageReportSchedule.h>
#include <aws/appstream/model/UsageReportSubscription.h>
#include <aws/appstream/model/User.h>
#include <aws/appstream/model/UserSetting.h>
#include <aws/appstream/model/UserStackAssociation.h>
#include <aws/appstream/model/UserStackAssociationError.h>
#include <aws/appstream/model/UserStackAssociationErrorCode.h>
#include <aws/appstream/model/VisibilityType.h>
#include <aws/appstream/model/VpcConfig.h>

using AppStreamIncludeTest = ::testing::Test;

TEST_F(AppStreamIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AppStream::AppStreamClient>("AppStreamIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
