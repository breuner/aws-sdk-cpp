﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class ListPartnerEventSourceAccountsRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API ListPartnerEventSourceAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPartnerEventSourceAccounts"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the partner event source to display account information
     * about.</p>
     */
    inline const Aws::String& GetEventSourceName() const{ return m_eventSourceName; }
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }
    inline void SetEventSourceName(const Aws::String& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }
    inline void SetEventSourceName(Aws::String&& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = std::move(value); }
    inline void SetEventSourceName(const char* value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName.assign(value); }
    inline ListPartnerEventSourceAccountsRequest& WithEventSourceName(const Aws::String& value) { SetEventSourceName(value); return *this;}
    inline ListPartnerEventSourceAccountsRequest& WithEventSourceName(Aws::String&& value) { SetEventSourceName(std::move(value)); return *this;}
    inline ListPartnerEventSourceAccountsRequest& WithEventSourceName(const char* value) { SetEventSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call, which you can use to retrieve the next
     * set of results.</p> <p>The value of <code>nextToken</code> is a unique
     * pagination token for each page. To retrieve the next page of results, make the
     * call again using the returned token. Keep all other arguments unchanged.</p> <p>
     * Using an expired pagination token results in an <code>HTTP 400
     * InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPartnerEventSourceAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPartnerEventSourceAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPartnerEventSourceAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifying this limits the number of results returned by this operation. The
     * operation also returns a NextToken which you can use in a subsequent operation
     * to retrieve the next set of results.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListPartnerEventSourceAccountsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_eventSourceName;
    bool m_eventSourceNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
