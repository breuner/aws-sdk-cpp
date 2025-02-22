﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
enum class ElasticLoadBalancingv2Errors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ALLOCATION_ID_NOT_FOUND= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  AVAILABILITY_ZONE_NOT_SUPPORTED,
  A_L_P_N_POLICY_NOT_SUPPORTED,
  CAPACITY_DECREASE_REQUESTS_LIMIT_EXCEEDED,
  CAPACITY_RESERVATION_PENDING,
  CAPACITY_UNITS_LIMIT_EXCEEDED,
  CA_CERTIFICATES_BUNDLE_NOT_FOUND,
  CERTIFICATE_NOT_FOUND,
  DELETE_ASSOCIATION_SAME_ACCOUNT,
  DUPLICATE_LISTENER,
  DUPLICATE_LOAD_BALANCER_NAME,
  DUPLICATE_TAG_KEYS,
  DUPLICATE_TARGET_GROUP_NAME,
  DUPLICATE_TRUST_STORE_NAME,
  HEALTH_UNAVAILABLE,
  INCOMPATIBLE_PROTOCOLS,
  INSUFFICIENT_CAPACITY,
  INVALID_CA_CERTIFICATES_BUNDLE,
  INVALID_CONFIGURATION_REQUEST,
  INVALID_LOAD_BALANCER_ACTION,
  INVALID_REVOCATION_CONTENT,
  INVALID_SCHEME,
  INVALID_SECURITY_GROUP,
  INVALID_SUBNET,
  INVALID_TARGET,
  LISTENER_NOT_FOUND,
  LOAD_BALANCER_NOT_FOUND,
  OPERATION_NOT_PERMITTED,
  PRIORITY_IN_USE,
  PRIOR_REQUEST_NOT_COMPLETE,
  RESOURCE_IN_USE,
  REVOCATION_CONTENT_NOT_FOUND,
  REVOCATION_ID_NOT_FOUND,
  RULE_NOT_FOUND,
  SUBNET_NOT_FOUND,
  S_S_L_POLICY_NOT_FOUND,
  TARGET_GROUP_ASSOCIATION_LIMIT,
  TARGET_GROUP_NOT_FOUND,
  TOO_MANY_ACTIONS,
  TOO_MANY_CERTIFICATES,
  TOO_MANY_LISTENERS,
  TOO_MANY_LOAD_BALANCERS,
  TOO_MANY_REGISTRATIONS_FOR_TARGET_ID,
  TOO_MANY_RULES,
  TOO_MANY_TAGS,
  TOO_MANY_TARGETS,
  TOO_MANY_TARGET_GROUPS,
  TOO_MANY_TRUST_STORES,
  TOO_MANY_TRUST_STORE_REVOCATION_ENTRIES,
  TOO_MANY_UNIQUE_TARGET_GROUPS_PER_LOAD_BALANCER,
  TRUST_STORE_ASSOCIATION_NOT_FOUND,
  TRUST_STORE_IN_USE,
  TRUST_STORE_NOT_FOUND,
  TRUST_STORE_NOT_READY,
  UNSUPPORTED_PROTOCOL
};

class AWS_ELASTICLOADBALANCINGV2_API ElasticLoadBalancingv2Error : public Aws::Client::AWSError<ElasticLoadBalancingv2Errors>
{
public:
  ElasticLoadBalancingv2Error() {}
  ElasticLoadBalancingv2Error(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ElasticLoadBalancingv2Errors>(rhs) {}
  ElasticLoadBalancingv2Error(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ElasticLoadBalancingv2Errors>(rhs) {}
  ElasticLoadBalancingv2Error(const Aws::Client::AWSError<ElasticLoadBalancingv2Errors>& rhs) : Aws::Client::AWSError<ElasticLoadBalancingv2Errors>(rhs) {}
  ElasticLoadBalancingv2Error(Aws::Client::AWSError<ElasticLoadBalancingv2Errors>&& rhs) : Aws::Client::AWSError<ElasticLoadBalancingv2Errors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ElasticLoadBalancingv2ErrorMapper
{
  AWS_ELASTICLOADBALANCINGV2_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ElasticLoadBalancingv2
} // namespace Aws
