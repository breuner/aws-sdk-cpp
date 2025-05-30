﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarProperties) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(string)");
  request.SetTrueBooleanValue(true);
  request.SetFalseBooleanValue(false);
  request.SetByteValue(1);
  request.SetShortValue(2);
  request.SetIntegerValue(3);
  request.SetLongValue(4);
  request.SetFloatValue(5.5);
  request.SetDoubleValue(6.5);

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithEscapedCharacter) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(<string>)");

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithWhiteSpace) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(  string with white    space  )");

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesPureWhiteSpace) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;
  request.SetFoo(R"(Foo)");
  request.SetStringValue(R"(   )");

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNaNFloatInputs) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::quiet_NaN());
  request.SetDoubleValue(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsInfinityFloatInputs) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(std::numeric_limits<double>::infinity());
  request.SetDoubleValue(std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNegativeInfinityFloatInputs) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;
  request.SetFloatValue(-std::numeric_limits<double>::infinity());
  request.SetDoubleValue(-std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome);
}
