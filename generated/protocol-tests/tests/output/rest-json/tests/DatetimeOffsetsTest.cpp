﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DatetimeOffsetsRequest.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, RestJsonDateTimeWithNegativeOffset) {
  RestJsonProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DatetimeOffsets, RestJsonDateTimeWithPositiveOffset) {
  RestJsonProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
