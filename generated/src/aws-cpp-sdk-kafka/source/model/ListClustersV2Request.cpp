﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListClustersV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListClustersV2Request::SerializePayload() const
{
  return {};
}

void ListClustersV2Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clusterNameFilterHasBeenSet)
    {
      ss << m_clusterNameFilter;
      uri.AddQueryStringParameter("clusterNameFilter", ss.str());
      ss.str("");
    }

    if(m_clusterTypeFilterHasBeenSet)
    {
      ss << m_clusterTypeFilter;
      uri.AddQueryStringParameter("clusterTypeFilter", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



