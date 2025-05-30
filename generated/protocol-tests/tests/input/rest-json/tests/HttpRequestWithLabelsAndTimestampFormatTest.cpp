﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpRequestWithLabelsAndTimestampFormatRequest.h>

using HttpRequestWithLabelsAndTimestampFormat = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithLabelsAndTimestampFormat, RestJsonHttpRequestWithLabelsAndTimestampFormat) {
  RestJsonProtocolClient client;
  HttpRequestWithLabelsAndTimestampFormatRequest request;
  request.SetMemberEpochSeconds(Aws::Utils::DateTime(1576540098L));
  request.SetMemberHttpDate(Aws::Utils::DateTime(1576540098L));
  request.SetMemberDateTime(Aws::Utils::DateTime(1576540098L));
  request.SetDefaultFormat(Aws::Utils::DateTime(1576540098L));
  request.SetTargetEpochSeconds(Aws::Utils::DateTime(1576540098L));
  request.SetTargetHttpDate(Aws::Utils::DateTime(1576540098L));
  request.SetTargetDateTime(Aws::Utils::DateTime(1576540098L));

  auto outcome = client.HttpRequestWithLabelsAndTimestampFormat(request);
  AWS_ASSERT_SUCCESS(outcome);
}
