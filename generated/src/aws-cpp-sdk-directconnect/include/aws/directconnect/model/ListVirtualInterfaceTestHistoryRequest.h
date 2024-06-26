﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class ListVirtualInterfaceTestHistoryRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API ListVirtualInterfaceTestHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVirtualInterfaceTestHistory"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetTestId() const{ return m_testId; }
    inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
    inline void SetTestId(const Aws::String& value) { m_testIdHasBeenSet = true; m_testId = value; }
    inline void SetTestId(Aws::String&& value) { m_testIdHasBeenSet = true; m_testId = std::move(value); }
    inline void SetTestId(const char* value) { m_testIdHasBeenSet = true; m_testId.assign(value); }
    inline ListVirtualInterfaceTestHistoryRequest& WithTestId(const Aws::String& value) { SetTestId(value); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithTestId(Aws::String&& value) { SetTestId(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithTestId(const char* value) { SetTestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual interface that was tested.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }
    inline ListVirtualInterfaceTestHistoryRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP peers that were placed in the DOWN state during the virtual interface
     * failover test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBgpPeers() const{ return m_bgpPeers; }
    inline bool BgpPeersHasBeenSet() const { return m_bgpPeersHasBeenSet; }
    inline void SetBgpPeers(const Aws::Vector<Aws::String>& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = value; }
    inline void SetBgpPeers(Aws::Vector<Aws::String>&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = std::move(value); }
    inline ListVirtualInterfaceTestHistoryRequest& WithBgpPeers(const Aws::Vector<Aws::String>& value) { SetBgpPeers(value); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithBgpPeers(Aws::Vector<Aws::String>&& value) { SetBgpPeers(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& AddBgpPeers(const Aws::String& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(value); return *this; }
    inline ListVirtualInterfaceTestHistoryRequest& AddBgpPeers(Aws::String&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(std::move(value)); return *this; }
    inline ListVirtualInterfaceTestHistoryRequest& AddBgpPeers(const char* value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ListVirtualInterfaceTestHistoryRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
     * 100 results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListVirtualInterfaceTestHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListVirtualInterfaceTestHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVirtualInterfaceTestHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_testId;
    bool m_testIdHasBeenSet = false;

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_bgpPeers;
    bool m_bgpPeersHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
