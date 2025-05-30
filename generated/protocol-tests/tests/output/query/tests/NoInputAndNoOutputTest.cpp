﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/NoInputAndNoOutputRequest.h>

using NoInputAndNoOutput = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(NoInputAndNoOutput, QueryNoInputAndNoOutput) {
  QueryProtocolClient client;
  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
