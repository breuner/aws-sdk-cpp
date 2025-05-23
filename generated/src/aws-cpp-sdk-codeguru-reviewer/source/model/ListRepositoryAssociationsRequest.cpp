﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListRepositoryAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListRepositoryAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_providerTypesHasBeenSet)
    {
      for(const auto& item : m_providerTypes)
      {
        ss << ProviderTypeMapper::GetNameForProviderType(item);
        uri.AddQueryStringParameter("ProviderType", ss.str());
        ss.str("");
      }
    }

    if(m_statesHasBeenSet)
    {
      for(const auto& item : m_states)
      {
        ss << RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(item);
        uri.AddQueryStringParameter("State", ss.str());
        ss.str("");
      }
    }

    if(m_namesHasBeenSet)
    {
      for(const auto& item : m_names)
      {
        ss << item;
        uri.AddQueryStringParameter("Name", ss.str());
        ss.str("");
      }
    }

    if(m_ownersHasBeenSet)
    {
      for(const auto& item : m_owners)
      {
        ss << item;
        uri.AddQueryStringParameter("Owner", ss.str());
        ss.str("");
      }
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



