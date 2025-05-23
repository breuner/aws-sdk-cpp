﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/BatchDeleteRumMetricDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String BatchDeleteRumMetricDefinitionsRequest::SerializePayload() const
{
  return {};
}

void BatchDeleteRumMetricDefinitionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_destinationHasBeenSet)
    {
      ss << MetricDestinationMapper::GetNameForMetricDestination(m_destination);
      uri.AddQueryStringParameter("destination", ss.str());
      ss.str("");
    }

    if(m_destinationArnHasBeenSet)
    {
      ss << m_destinationArn;
      uri.AddQueryStringParameter("destinationArn", ss.str());
      ss.str("");
    }

    if(m_metricDefinitionIdsHasBeenSet)
    {
      for(const auto& item : m_metricDefinitionIds)
      {
        ss << item;
        uri.AddQueryStringParameter("metricDefinitionIds", ss.str());
        ss.str("");
      }
    }

}



