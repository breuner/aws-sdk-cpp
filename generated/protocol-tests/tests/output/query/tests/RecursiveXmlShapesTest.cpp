﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/RecursiveXmlShapesRequest.h>

using RecursiveXmlShapes = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(RecursiveXmlShapes, QueryRecursiveShapes) {
  QueryProtocolClient client;
  RecursiveXmlShapesRequest request;

  auto outcome = client.RecursiveXmlShapes(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
