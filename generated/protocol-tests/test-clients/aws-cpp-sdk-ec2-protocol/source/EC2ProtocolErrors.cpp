﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2-protocol/EC2ProtocolErrors.h>
#include <aws/ec2-protocol/model/ComplexError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EC2Protocol;
using namespace Aws::EC2Protocol::Model;

namespace Aws
{
namespace EC2Protocol
{
template<> AWS_EC2PROTOCOL_API ComplexError EC2ProtocolError::GetModeledError()
{
  assert(this->GetErrorType() == EC2ProtocolErrors::COMPLEX);
  return ComplexError(this->GetXmlPayload().GetRootElement());
}

namespace EC2ProtocolErrorMapper
{

static const int DRY_RUN_OPERATION_HASH = HashingUtils::HashString("DryRunOperation");
static const int INVALID_VPN_CONNECTION_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidVpnConnectionID.NotFound");
static const int VOLUME_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VolumeLimitExceeded");
static const int INVALID_SNAPSHOT__NOT_FOUND_HASH = HashingUtils::HashString("InvalidSnapshot.NotFound");
static const int RESERVED_INSTANCES_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ReservedInstancesLimitExceeded");
static const int INVALID_VPC_ENDPOINT_ID__NOT_FOUND_HASH = HashingUtils::HashString("InvalidVpcEndpointId.NotFound");
static const int INVALID_ZONE__NOT_FOUND_HASH = HashingUtils::HashString("InvalidZone.NotFound");
static const int INVALID_ROUTE__NOT_FOUND_HASH = HashingUtils::HashString("InvalidRoute.NotFound");
static const int INVALID_NETWORK_INTERFACE_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidNetworkInterfaceId.Malformed");
static const int INVALID_VPC__RANGE_HASH = HashingUtils::HashString("InvalidVpc.Range");
static const int NON_E_B_S_INSTANCE_HASH = HashingUtils::HashString("NonEBSInstance");
static const int INVALID_A_M_I_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidAMIID.NotFound");
static const int INVALID_KEY_PAIR__NOT_FOUND_HASH = HashingUtils::HashString("InvalidKeyPair.NotFound");
static const int VPC_PEERING_CONNECTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("VpcPeeringConnectionAlreadyExists");
static const int INVALID_VPC_ENDPOINT_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidVpcEndpointId.Malformed");
static const int INVALID_VOLUME_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidVolumeID.Malformed");
static const int INVALID_RESERVED_INSTANCES_OFFERING_ID_HASH = HashingUtils::HashString("InvalidReservedInstancesOfferingId");
static const int INVALID_BLOCK_DEVICE_MAPPING_HASH = HashingUtils::HashString("InvalidBlockDeviceMapping");
static const int INVALID_VOLUME_I_D__ZONE_MISMATCH_HASH = HashingUtils::HashString("InvalidVolumeID.ZoneMismatch");
static const int UNSUPPORTED_HASH = HashingUtils::HashString("Unsupported");
static const int INVALID_KEY__FORMAT_HASH = HashingUtils::HashString("InvalidKey.Format");
static const int INVALID_SPOT_FLEET_REQUEST_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidSpotFleetRequestId.Malformed");
static const int INVALID_ADDRESS_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidAddressID.NotFound");
static const int ROUTE_ALREADY_EXISTS_HASH = HashingUtils::HashString("RouteAlreadyExists");
static const int INVALID_A_M_I_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidAMIID.Malformed");
static const int INVALID_KEY_PAIR__FORMAT_HASH = HashingUtils::HashString("InvalidKeyPair.Format");
static const int VPC_CIDR_CONFLICT_HASH = HashingUtils::HashString("VpcCidrConflict");
static const int INVALID_GROUP__RESERVED_HASH = HashingUtils::HashString("InvalidGroup.Reserved");
static const int LEGACY_SECURITY_GROUP_HASH = HashingUtils::HashString("LegacySecurityGroup");
static const int CANNOT_DELETE_HASH = HashingUtils::HashString("CannotDelete");
static const int INVALID_I_P_ADDRESS__IN_USE_HASH = HashingUtils::HashString("InvalidIPAddress.InUse");
static const int INVALID_A_M_I_I_D__UNAVAILABLE_HASH = HashingUtils::HashString("InvalidAMIID.Unavailable");
static const int INVALID_FORMAT_HASH = HashingUtils::HashString("InvalidFormat");
static const int INVALID_GROUP_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidGroupId.Malformed");
static const int BUNDLING_IN_PROGRESS_HASH = HashingUtils::HashString("BundlingInProgress");
static const int INVALID_INSTANCE_TYPE_HASH = HashingUtils::HashString("InvalidInstanceType");
static const int INVALID_PERMISSION__NOT_FOUND_HASH = HashingUtils::HashString("InvalidPermission.NotFound");
static const int INVALID_ROUTE__MALFORMED_HASH = HashingUtils::HashString("InvalidRoute.Malformed");
static const int INVALID_RESERVATION_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidReservationID.Malformed");
static const int INVALID_KEY_PAIR__DUPLICATE_HASH = HashingUtils::HashString("InvalidKeyPair.Duplicate");
static const int ROUTE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RouteLimitExceeded");
static const int INVALID_SECURITY__REQUEST_HAS_EXPIRED_HASH = HashingUtils::HashString("InvalidSecurity.RequestHasExpired");
static const int INVALID_SPOT_INSTANCE_REQUEST_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidSpotInstanceRequestID.Malformed");
static const int INVALID_VPC_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidVpcID.NotFound");
static const int ROUTE_TABLE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RouteTableLimitExceeded");
static const int INVALID_ATTACHMENT_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidAttachmentID.NotFound");
static const int INVALID_PERMISSION__MALFORMED_HASH = HashingUtils::HashString("InvalidPermission.Malformed");
static const int VOLUME_IN_USE_HASH = HashingUtils::HashString("VolumeInUse");
static const int ACTIVE_VPC_PEERING_CONNECTION_PER_VPC_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ActiveVpcPeeringConnectionPerVpcLimitExceeded");
static const int INVALID_VOLUME__ZONE_MISMATCH_HASH = HashingUtils::HashString("InvalidVolume.ZoneMismatch");
static const int INVALID_DHCP_OPTION_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidDhcpOptionID.NotFound");
static const int PENDING_SNAPSHOT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PendingSnapshotLimitExceeded");
static const int INVALID_PREFIX_LIST_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidPrefixListId.Malformed");
static const int INVALID_VPN_CONNECTION_I_D_HASH = HashingUtils::HashString("InvalidVpnConnectionID");
static const int INVALID_USER_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidUserID.Malformed");
static const int ADDRESS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AddressLimitExceeded");
static const int INVALID_GROUP__NOT_FOUND_HASH = HashingUtils::HashString("InvalidGroup.NotFound");
static const int INVALID_I_D_HASH = HashingUtils::HashString("InvalidID");
static const int VOLUME_TYPE_NOT_AVAILABLE_IN_ZONE_HASH = HashingUtils::HashString("VolumeTypeNotAvailableInZone");
static const int INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET_HASH = HashingUtils::HashString("InsufficientFreeAddressesInSubnet");
static const int DISK_IMAGE_SIZE_TOO_LARGE_HASH = HashingUtils::HashString("DiskImageSizeTooLarge");
static const int INVALID_A_M_I_ATTRIBUTE_ITEM_VALUE_HASH = HashingUtils::HashString("InvalidAMIAttributeItemValue");
static const int INVALID_GROUP__IN_USE_HASH = HashingUtils::HashString("InvalidGroup.InUse");
static const int INVALID_SPOT_DATAFEED__NOT_FOUND_HASH = HashingUtils::HashString("InvalidSpotDatafeed.NotFound");
static const int INSUFFICIENT_RESERVED_INSTANCES_CAPACITY_HASH = HashingUtils::HashString("InsufficientReservedInstancesCapacity");
static const int MAX_I_O_P_S_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("MaxIOPSLimitExceeded");
static const int RESOURCE_COUNT_EXCEEDED_HASH = HashingUtils::HashString("ResourceCountExceeded");
static const int INCORRECT_STATE_HASH = HashingUtils::HashString("IncorrectState");
static const int NETWORK_ACL_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NetworkAclLimitExceeded");
static const int INVALID_GREETING_HASH = HashingUtils::HashString("InvalidGreeting");
static const int INVALID_RESERVED_INSTANCES_ID_HASH = HashingUtils::HashString("InvalidReservedInstancesId");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperation");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequest");
static const int VPC_ENDPOINT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VpcEndpointLimitExceeded");
static const int INVALID_ROUTE_TABLE_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidRouteTableId.Malformed");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransition");
static const int INVALID_VPC_PEERING_CONNECTION_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidVpcPeeringConnectionId.Malformed");
static const int PRIVATE_IP_ADDRESS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PrivateIpAddressLimitExceeded");
static const int VPC_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VpcLimitExceeded");
static const int INVALID_PERMISSION__DUPLICATE_HASH = HashingUtils::HashString("InvalidPermission.Duplicate");
static const int CUSTOMER_GATEWAY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CustomerGatewayLimitExceeded");
static const int INSTANCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("InstanceLimitExceeded");
static const int INTERNET_GATEWAY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("InternetGatewayLimitExceeded");
static const int CONCURRENT_SNAPSHOT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ConcurrentSnapshotLimitExceeded");
static const int SECURITY_GROUPS_PER_INSTANCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SecurityGroupsPerInstanceLimitExceeded");
static const int V_P_C_RESOURCE_NOT_SPECIFIED_HASH = HashingUtils::HashString("VPCResourceNotSpecified");
static const int INVALID_SNAPSHOT__IN_USE_HASH = HashingUtils::HashString("InvalidSnapshot.InUse");
static const int UNKNOWN_VOLUME_TYPE_HASH = HashingUtils::HashString("UnknownVolumeType");
static const int SECURITY_GROUP_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SecurityGroupLimitExceeded");
static const int INVALID_SUBNET_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidSubnetID.NotFound");
static const int GATEWAY__NOT_ATTACHED_HASH = HashingUtils::HashString("Gateway.NotAttached");
static const int INVALID_GROUP__DUPLICATE_HASH = HashingUtils::HashString("InvalidGroup.Duplicate");
static const int ENCRYPTED_VOLUMES_NOT_SUPPORTED_HASH = HashingUtils::HashString("EncryptedVolumesNotSupported");
static const int INVALID_ROUTE_TABLE_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidRouteTableID.NotFound");
static const int INVALID_SECURITY_GROUP_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidSecurityGroupID.NotFound");
static const int INVALID_PLACEMENT_GROUP__UNKNOWN_HASH = HashingUtils::HashString("InvalidPlacementGroup.Unknown");
static const int INVALID_INSTANCE_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidInstanceID.Malformed");
static const int INSTANCE_ALREADY_LINKED_HASH = HashingUtils::HashString("InstanceAlreadyLinked");
static const int INVALID_ATTACHMENT__NOT_FOUND_HASH = HashingUtils::HashString("InvalidAttachment.NotFound");
static const int INVALID_CUSTOMER_GATEWAY__DUPLICATE_IP_ADDRESS_HASH = HashingUtils::HashString("InvalidCustomerGateway.DuplicateIpAddress");
static const int INVALID_SUBNET__CONFLICT_HASH = HashingUtils::HashString("InvalidSubnet.Conflict");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInput");
static const int INVALID_INSTANCE_ATTRIBUTE_VALUE_HASH = HashingUtils::HashString("InvalidInstanceAttributeValue");
static const int REQUEST_RESOURCE_COUNT_EXCEEDED_HASH = HashingUtils::HashString("RequestResourceCountExceeded");
static const int INVALID_ASSOCIATION_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidAssociationID.NotFound");
static const int INVALID_DEVICE__IN_USE_HASH = HashingUtils::HashString("InvalidDevice.InUse");
static const int INVALID_CONVERSION_TASK_ID_HASH = HashingUtils::HashString("InvalidConversionTaskId");
static const int MAX_SPOT_FLEET_REQUEST_COUNT_EXCEEDED_HASH = HashingUtils::HashString("MaxSpotFleetRequestCountExceeded");
static const int INVALID_ALLOCATION_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidAllocationID.NotFound");
static const int INVALID_CUSTOMER_GATEWAY_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidCustomerGatewayID.NotFound");
static const int INVALID_POLICY_DOCUMENT_HASH = HashingUtils::HashString("InvalidPolicyDocument");
static const int INVALID_SPOT_FLEET_REQUEST_ID__NOT_FOUND_HASH = HashingUtils::HashString("InvalidSpotFleetRequestId.NotFound");
static const int INVALID_FLOW_LOG_ID__NOT_FOUND_HASH = HashingUtils::HashString("InvalidFlowLogId.NotFound");
static const int VPN_GATEWAY_ATTACHMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VpnGatewayAttachmentLimitExceeded");
static const int FILTER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FilterLimitExceeded");
static const int INVALID_SNAPSHOT_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidSnapshotID.Malformed");
static const int INVALID_SPOT_FLEET_REQUEST_CONFIG_HASH = HashingUtils::HashString("InvalidSpotFleetRequestConfig");
static const int SNAPSHOT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SnapshotLimitExceeded");
static const int INVALID_VPC_STATE_HASH = HashingUtils::HashString("InvalidVpcState");
static const int INVALID_GATEWAY_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidGatewayID.NotFound");
static const int SECURITY_GROUPS_PER_INTERFACE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SecurityGroupsPerInterfaceLimitExceeded");
static const int MAX_SPOT_INSTANCE_COUNT_EXCEEDED_HASH = HashingUtils::HashString("MaxSpotInstanceCountExceeded");
static const int INVALID_ADDRESS__MALFORMED_HASH = HashingUtils::HashString("InvalidAddress.Malformed");
static const int INVALID_DHCP_OPTIONS_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidDhcpOptionsId.Malformed");
static const int NETWORK_ACL_ENTRY_ALREADY_EXISTS_HASH = HashingUtils::HashString("NetworkAclEntryAlreadyExists");
static const int VPN_GATEWAY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VpnGatewayLimitExceeded");
static const int INVALID_PREFIX_LIST_ID__NOT_FOUND_HASH = HashingUtils::HashString("InvalidPrefixListId.NotFound");
static const int INVALID_INSTANCE_I_D_HASH = HashingUtils::HashString("InvalidInstanceID");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidState");
static const int FLOW_LOGS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FlowLogsLimitExceeded");
static const int INVALID_ADDRESS__NOT_FOUND_HASH = HashingUtils::HashString("InvalidAddress.NotFound");
static const int V_P_C_ID_NOT_SPECIFIED_HASH = HashingUtils::HashString("VPCIdNotSpecified");
static const int RESOURCE__ALREADY_ASSOCIATED_HASH = HashingUtils::HashString("Resource.AlreadyAssociated");
static const int NOT_EXPORTABLE_HASH = HashingUtils::HashString("NotExportable");
static const int INVALID_DHCP_OPTIONS_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidDhcpOptionsID.NotFound");
static const int NETWORK_ACL_ENTRY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NetworkAclEntryLimitExceeded");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceeded");
static const int INVALID_NETWORK_INTERFACE_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidNetworkInterfaceID.NotFound");
static const int INVALID_VPN_GATEWAY_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidVpnGatewayID.NotFound");
static const int INVALID_SPOT_INSTANCE_REQUEST_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidSpotInstanceRequestID.NotFound");
static const int RULES_PER_SECURITY_GROUP_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RulesPerSecurityGroupLimitExceeded");
static const int INVALID_PLACEMENT_GROUP__DUPLICATE_HASH = HashingUtils::HashString("InvalidPlacementGroup.Duplicate");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermitted");
static const int INVALID_EXPORT_TASK_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidExportTaskID.NotFound");
static const int VPN_CONNECTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VpnConnectionLimitExceeded");
static const int INCORRECT_INSTANCE_STATE_HASH = HashingUtils::HashString("IncorrectInstanceState");
static const int INVALID_NETWORK_ACL_ENTRY__NOT_FOUND_HASH = HashingUtils::HashString("InvalidNetworkAclEntry.NotFound");
static const int INVALID_VPC_PEERING_CONNECTION_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidVpcPeeringConnectionID.NotFound");
static const int SUBNET_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SubnetLimitExceeded");
static const int INVALID_VOLUME_I_D__DUPLICATE_HASH = HashingUtils::HashString("InvalidVolumeID.Duplicate");
static const int INVALID_OPTION__CONFLICT_HASH = HashingUtils::HashString("InvalidOption.Conflict");
static const int INVALID_BUNDLE_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidBundleID.NotFound");
static const int ATTACHMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AttachmentLimitExceeded");
static const int FLOW_LOG_ALREADY_EXISTS_HASH = HashingUtils::HashString("FlowLogAlreadyExists");
static const int INVALID_INSTANCE_I_D__NOT_LINKABLE_HASH = HashingUtils::HashString("InvalidInstanceID.NotLinkable");
static const int INVALID_PLACEMENT_GROUP__IN_USE_HASH = HashingUtils::HashString("InvalidPlacementGroup.InUse");
static const int INVALID_SERVICE_NAME_HASH = HashingUtils::HashString("InvalidServiceName");
static const int INVALID_INTERNET_GATEWAY_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidInternetGatewayID.NotFound");
static const int INVALID_INSTANCE_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidInstanceID.NotFound");
static const int INVALID_NETWORK_INTERFACE_ATTACHMENT_I_D__MALFORMED_HASH = HashingUtils::HashString("InvalidNetworkInterfaceAttachmentID.Malformed");
static const int INVALID_A_M_I_NAME__DUPLICATE_HASH = HashingUtils::HashString("InvalidAMIName.Duplicate");
static const int INVALID_VOLUME__NOT_FOUND_HASH = HashingUtils::HashString("InvalidVolume.NotFound");
static const int COMPLEX_HASH = HashingUtils::HashString("ComplexError");
static const int INVALID_FILTER_HASH = HashingUtils::HashString("InvalidFilter");
static const int INVALID_MANIFEST_HASH = HashingUtils::HashString("InvalidManifest");
static const int INVALID_VPN_GATEWAY_ATTACHMENT__NOT_FOUND_HASH = HashingUtils::HashString("InvalidVpnGatewayAttachment.NotFound");
static const int OUTSTANDING_VPC_PEERING_CONNECTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OutstandingVpcPeeringConnectionLimitExceeded");
static const int INVALID_CUSTOMER_GATEWAY_ID__MALFORMED_HASH = HashingUtils::HashString("InvalidCustomerGatewayId.Malformed");
static const int CONCURRENT_TAG_ACCESS_HASH = HashingUtils::HashString("ConcurrentTagAccess");
static const int INVALID_INTERFACE__IP_ADDRESS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("InvalidInterface.IpAddressLimitExceeded");
static const int INVALID_NETWORK_ACL_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidNetworkAclID.NotFound");
static const int INVALID_A_M_I_NAME__MALFORMED_HASH = HashingUtils::HashString("InvalidAMIName.Malformed");
static const int INVALID_RESERVATION_I_D__NOT_FOUND_HASH = HashingUtils::HashString("InvalidReservationID.NotFound");
static const int DEPENDENCY_VIOLATION_HASH = HashingUtils::HashString("DependencyViolation");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceeded");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == DRY_RUN_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::DRY_RUN_OPERATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPN_CONNECTION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPN_CONNECTION_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VOLUME_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VOLUME_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SNAPSHOT__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESERVED_INSTANCES_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::RESERVED_INSTANCES_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPC_ENDPOINT_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPC_ENDPOINT_ID__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ZONE__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ZONE__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ROUTE__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ROUTE__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_INTERFACE_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_NETWORK_INTERFACE_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPC__RANGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPC__RANGE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == NON_E_B_S_INSTANCE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::NON_E_B_S_INSTANCE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_A_M_I_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_KEY_PAIR__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_KEY_PAIR__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VPC_PEERING_CONNECTION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VPC_PEERING_CONNECTION_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPC_ENDPOINT_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPC_ENDPOINT_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VOLUME_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VOLUME_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESERVED_INSTANCES_OFFERING_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_RESERVED_INSTANCES_OFFERING_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_BLOCK_DEVICE_MAPPING_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_BLOCK_DEVICE_MAPPING), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VOLUME_I_D__ZONE_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VOLUME_I_D__ZONE_MISMATCH), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::UNSUPPORTED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_KEY__FORMAT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_KEY__FORMAT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SPOT_FLEET_REQUEST_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SPOT_FLEET_REQUEST_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ADDRESS_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ADDRESS_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ROUTE_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::ROUTE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_A_M_I_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_KEY_PAIR__FORMAT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_KEY_PAIR__FORMAT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VPC_CIDR_CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VPC_CIDR_CONFLICT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_GROUP__RESERVED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_GROUP__RESERVED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == LEGACY_SECURITY_GROUP_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::LEGACY_SECURITY_GROUP), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CANNOT_DELETE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::CANNOT_DELETE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_I_P_ADDRESS__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_I_P_ADDRESS__IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_I_D__UNAVAILABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_A_M_I_I_D__UNAVAILABLE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_FORMAT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_FORMAT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_GROUP_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_GROUP_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == BUNDLING_IN_PROGRESS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::BUNDLING_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INSTANCE_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PERMISSION__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ROUTE__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ROUTE__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESERVATION_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_RESERVATION_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_KEY_PAIR__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_KEY_PAIR__DUPLICATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ROUTE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::ROUTE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SECURITY__REQUEST_HAS_EXPIRED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SECURITY__REQUEST_HAS_EXPIRED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SPOT_INSTANCE_REQUEST_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SPOT_INSTANCE_REQUEST_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPC_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPC_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ROUTE_TABLE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::ROUTE_TABLE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ATTACHMENT_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ATTACHMENT_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PERMISSION__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VOLUME_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VOLUME_IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ACTIVE_VPC_PEERING_CONNECTION_PER_VPC_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::ACTIVE_VPC_PEERING_CONNECTION_PER_VPC_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VOLUME__ZONE_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VOLUME__ZONE_MISMATCH), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DHCP_OPTION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_DHCP_OPTION_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PENDING_SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::PENDING_SNAPSHOT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PREFIX_LIST_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PREFIX_LIST_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPN_CONNECTION_I_D_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPN_CONNECTION_I_D), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_USER_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_USER_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ADDRESS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::ADDRESS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_GROUP__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_GROUP__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_I_D_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_I_D), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VOLUME_TYPE_NOT_AVAILABLE_IN_ZONE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VOLUME_TYPE_NOT_AVAILABLE_IN_ZONE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DISK_IMAGE_SIZE_TOO_LARGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::DISK_IMAGE_SIZE_TOO_LARGE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_ATTRIBUTE_ITEM_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_A_M_I_ATTRIBUTE_ITEM_VALUE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_GROUP__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_GROUP__IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SPOT_DATAFEED__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SPOT_DATAFEED__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INSUFFICIENT_RESERVED_INSTANCES_CAPACITY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INSUFFICIENT_RESERVED_INSTANCES_CAPACITY), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == MAX_I_O_P_S_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::MAX_I_O_P_S_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::RESOURCE_COUNT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INCORRECT_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INCORRECT_STATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == NETWORK_ACL_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::NETWORK_ACL_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_GREETING_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_GREETING), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESERVED_INSTANCES_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_RESERVED_INSTANCES_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VPC_ENDPOINT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VPC_ENDPOINT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ROUTE_TABLE_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ROUTE_TABLE_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_STATE_TRANSITION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPC_PEERING_CONNECTION_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPC_PEERING_CONNECTION_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == PRIVATE_IP_ADDRESS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::PRIVATE_IP_ADDRESS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VPC_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VPC_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PERMISSION__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PERMISSION__DUPLICATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CUSTOMER_GATEWAY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::CUSTOMER_GATEWAY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INSTANCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INSTANCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INTERNET_GATEWAY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INTERNET_GATEWAY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CONCURRENT_SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::CONCURRENT_SNAPSHOT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SECURITY_GROUPS_PER_INSTANCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::SECURITY_GROUPS_PER_INSTANCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == V_P_C_RESOURCE_NOT_SPECIFIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::V_P_C_RESOURCE_NOT_SPECIFIED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SNAPSHOT__IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == UNKNOWN_VOLUME_TYPE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::UNKNOWN_VOLUME_TYPE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SECURITY_GROUP_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::SECURITY_GROUP_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SUBNET_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SUBNET_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == GATEWAY__NOT_ATTACHED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::GATEWAY__NOT_ATTACHED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_GROUP__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_GROUP__DUPLICATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ENCRYPTED_VOLUMES_NOT_SUPPORTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::ENCRYPTED_VOLUMES_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ROUTE_TABLE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ROUTE_TABLE_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SECURITY_GROUP_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SECURITY_GROUP_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PLACEMENT_GROUP__UNKNOWN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PLACEMENT_GROUP__UNKNOWN), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INSTANCE_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INSTANCE_ALREADY_LINKED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INSTANCE_ALREADY_LINKED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ATTACHMENT__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ATTACHMENT__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CUSTOMER_GATEWAY__DUPLICATE_IP_ADDRESS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_CUSTOMER_GATEWAY__DUPLICATE_IP_ADDRESS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SUBNET__CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SUBNET__CONFLICT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_ATTRIBUTE_VALUE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INSTANCE_ATTRIBUTE_VALUE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == REQUEST_RESOURCE_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::REQUEST_RESOURCE_COUNT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ASSOCIATION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ASSOCIATION_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DEVICE__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_DEVICE__IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CONVERSION_TASK_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_CONVERSION_TASK_ID), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == MAX_SPOT_FLEET_REQUEST_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::MAX_SPOT_FLEET_REQUEST_COUNT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ALLOCATION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ALLOCATION_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CUSTOMER_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_CUSTOMER_GATEWAY_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_POLICY_DOCUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_POLICY_DOCUMENT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SPOT_FLEET_REQUEST_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SPOT_FLEET_REQUEST_ID__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_FLOW_LOG_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_FLOW_LOG_ID__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VPN_GATEWAY_ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VPN_GATEWAY_ATTACHMENT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == FILTER_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::FILTER_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SNAPSHOT_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SNAPSHOT_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SPOT_FLEET_REQUEST_CONFIG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SPOT_FLEET_REQUEST_CONFIG), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SNAPSHOT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::SNAPSHOT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPC_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPC_STATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_GATEWAY_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SECURITY_GROUPS_PER_INTERFACE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::SECURITY_GROUPS_PER_INTERFACE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == MAX_SPOT_INSTANCE_COUNT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::MAX_SPOT_INSTANCE_COUNT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == INVALID_ADDRESS__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ADDRESS__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DHCP_OPTIONS_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_DHCP_OPTIONS_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == NETWORK_ACL_ENTRY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::NETWORK_ACL_ENTRY_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VPN_GATEWAY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VPN_GATEWAY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PREFIX_LIST_ID__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PREFIX_LIST_ID__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INSTANCE_I_D), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_STATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == FLOW_LOGS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::FLOW_LOGS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_ADDRESS__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_ADDRESS__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == V_P_C_ID_NOT_SPECIFIED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::V_P_C_ID_NOT_SPECIFIED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE__ALREADY_ASSOCIATED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::RESOURCE__ALREADY_ASSOCIATED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == NOT_EXPORTABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::NOT_EXPORTABLE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_DHCP_OPTIONS_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_DHCP_OPTIONS_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == NETWORK_ACL_ENTRY_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::NETWORK_ACL_ENTRY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::TAG_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_INTERFACE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_NETWORK_INTERFACE_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPN_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPN_GATEWAY_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SPOT_INSTANCE_REQUEST_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SPOT_INSTANCE_REQUEST_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RULES_PER_SECURITY_GROUP_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::RULES_PER_SECURITY_GROUP_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PLACEMENT_GROUP__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PLACEMENT_GROUP__DUPLICATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::OPERATION_NOT_PERMITTED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_EXPORT_TASK_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_EXPORT_TASK_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == VPN_CONNECTION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::VPN_CONNECTION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INCORRECT_INSTANCE_STATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INCORRECT_INSTANCE_STATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_ACL_ENTRY__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_NETWORK_ACL_ENTRY__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPC_PEERING_CONNECTION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPC_PEERING_CONNECTION_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == SUBNET_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::SUBNET_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VOLUME_I_D__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VOLUME_I_D__DUPLICATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_OPTION__CONFLICT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_OPTION__CONFLICT), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_BUNDLE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_BUNDLE_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::ATTACHMENT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == FLOW_LOG_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::FLOW_LOG_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D__NOT_LINKABLE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INSTANCE_I_D__NOT_LINKABLE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_PLACEMENT_GROUP__IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_PLACEMENT_GROUP__IN_USE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_SERVICE_NAME_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_SERVICE_NAME), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INTERNET_GATEWAY_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INTERNET_GATEWAY_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INSTANCE_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INSTANCE_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_INTERFACE_ATTACHMENT_I_D__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_NETWORK_INTERFACE_ATTACHMENT_I_D__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_NAME__DUPLICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_A_M_I_NAME__DUPLICATE), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VOLUME__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VOLUME__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == COMPLEX_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::COMPLEX), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_FILTER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_FILTER), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_MANIFEST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_MANIFEST), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_VPN_GATEWAY_ATTACHMENT__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_VPN_GATEWAY_ATTACHMENT__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == OUTSTANDING_VPC_PEERING_CONNECTION_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::OUTSTANDING_VPC_PEERING_CONNECTION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_CUSTOMER_GATEWAY_ID__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_CUSTOMER_GATEWAY_ID__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == CONCURRENT_TAG_ACCESS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::CONCURRENT_TAG_ACCESS), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_INTERFACE__IP_ADDRESS_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_INTERFACE__IP_ADDRESS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_NETWORK_ACL_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_NETWORK_ACL_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_A_M_I_NAME__MALFORMED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_A_M_I_NAME__MALFORMED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == INVALID_RESERVATION_I_D__NOT_FOUND_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::INVALID_RESERVATION_I_D__NOT_FOUND), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == DEPENDENCY_VIOLATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::DEPENDENCY_VIOLATION), RetryableType::NOT_RETRYABLE);
    return true;
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(EC2ProtocolErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);
  AWSError<CoreErrors> error;
  if (GetErrorForNameHelper0(hashCode, error))
  {
    return error;
  }
  else if (GetErrorForNameHelper1(hashCode, error))
  {
    return error;
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EC2ProtocolErrorMapper
} // namespace EC2Protocol
} // namespace Aws
