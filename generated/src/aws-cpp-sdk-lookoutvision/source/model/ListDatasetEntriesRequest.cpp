﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ListDatasetEntriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListDatasetEntriesRequest::SerializePayload() const
{
  return {};
}

void ListDatasetEntriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_labeledHasBeenSet)
    {
      ss << m_labeled;
      uri.AddQueryStringParameter("labeled", ss.str());
      ss.str("");
    }

    if(m_anomalyClassHasBeenSet)
    {
      ss << m_anomalyClass;
      uri.AddQueryStringParameter("anomalyClass", ss.str());
      ss.str("");
    }

    if(m_beforeCreationDateHasBeenSet)
    {
      ss << m_beforeCreationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdBefore", ss.str());
      ss.str("");
    }

    if(m_afterCreationDateHasBeenSet)
    {
      ss << m_afterCreationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdAfter", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_sourceRefContainsHasBeenSet)
    {
      ss << m_sourceRefContains;
      uri.AddQueryStringParameter("sourceRefContains", ss.str());
      ss.str("");
    }

}



