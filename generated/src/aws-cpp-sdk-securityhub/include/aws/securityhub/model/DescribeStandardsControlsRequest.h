﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class DescribeStandardsControlsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DescribeStandardsControlsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStandardsControls"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline const Aws::String& GetStandardsSubscriptionArn() const { return m_standardsSubscriptionArn; }
    inline bool StandardsSubscriptionArnHasBeenSet() const { return m_standardsSubscriptionArnHasBeenSet; }
    template<typename StandardsSubscriptionArnT = Aws::String>
    void SetStandardsSubscriptionArn(StandardsSubscriptionArnT&& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = std::forward<StandardsSubscriptionArnT>(value); }
    template<typename StandardsSubscriptionArnT = Aws::String>
    DescribeStandardsControlsRequest& WithStandardsSubscriptionArn(StandardsSubscriptionArnT&& value) { SetStandardsSubscriptionArn(std::forward<StandardsSubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStandardsControlsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of security standard controls to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeStandardsControlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_standardsSubscriptionArn;
    bool m_standardsSubscriptionArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
