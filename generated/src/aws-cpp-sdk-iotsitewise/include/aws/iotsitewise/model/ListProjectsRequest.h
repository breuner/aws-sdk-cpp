﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListProjectsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListProjectsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the portal.</p>
     */
    inline const Aws::String& GetPortalId() const { return m_portalId; }
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }
    template<typename PortalIdT = Aws::String>
    void SetPortalId(PortalIdT&& value) { m_portalIdHasBeenSet = true; m_portalId = std::forward<PortalIdT>(value); }
    template<typename PortalIdT = Aws::String>
    ListProjectsRequest& WithPortalId(PortalIdT&& value) { SetPortalId(std::forward<PortalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProjectsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
