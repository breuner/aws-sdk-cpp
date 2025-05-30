﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Schemas
{
namespace Model
{

  /**
   */
  class ListDiscoverersRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API ListDiscoverersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDiscoverers"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;

    AWS_SCHEMAS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specifying this limits the results to only those discoverer IDs that start
     * with the specified prefix.</p>
     */
    inline const Aws::String& GetDiscovererIdPrefix() const { return m_discovererIdPrefix; }
    inline bool DiscovererIdPrefixHasBeenSet() const { return m_discovererIdPrefixHasBeenSet; }
    template<typename DiscovererIdPrefixT = Aws::String>
    void SetDiscovererIdPrefix(DiscovererIdPrefixT&& value) { m_discovererIdPrefixHasBeenSet = true; m_discovererIdPrefix = std::forward<DiscovererIdPrefixT>(value); }
    template<typename DiscovererIdPrefixT = Aws::String>
    ListDiscoverersRequest& WithDiscovererIdPrefix(DiscovererIdPrefixT&& value) { SetDiscovererIdPrefix(std::forward<DiscovererIdPrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListDiscoverersRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDiscoverersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifying this limits the results to only those ARNs that start with the
     * specified prefix.</p>
     */
    inline const Aws::String& GetSourceArnPrefix() const { return m_sourceArnPrefix; }
    inline bool SourceArnPrefixHasBeenSet() const { return m_sourceArnPrefixHasBeenSet; }
    template<typename SourceArnPrefixT = Aws::String>
    void SetSourceArnPrefix(SourceArnPrefixT&& value) { m_sourceArnPrefixHasBeenSet = true; m_sourceArnPrefix = std::forward<SourceArnPrefixT>(value); }
    template<typename SourceArnPrefixT = Aws::String>
    ListDiscoverersRequest& WithSourceArnPrefix(SourceArnPrefixT&& value) { SetSourceArnPrefix(std::forward<SourceArnPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discovererIdPrefix;
    bool m_discovererIdPrefixHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sourceArnPrefix;
    bool m_sourceArnPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
