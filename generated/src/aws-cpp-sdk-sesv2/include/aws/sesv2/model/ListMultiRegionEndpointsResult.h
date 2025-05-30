﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/MultiRegionEndpoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following elements are returned by the service.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListMultiRegionEndpointsResponse">AWS
   * API Reference</a></p>
   */
  class ListMultiRegionEndpointsResult
  {
  public:
    AWS_SESV2_API ListMultiRegionEndpointsResult() = default;
    AWS_SESV2_API ListMultiRegionEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListMultiRegionEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains key multi-region endpoint (global-endpoint)
     * properties.</p>
     */
    inline const Aws::Vector<MultiRegionEndpoint>& GetMultiRegionEndpoints() const { return m_multiRegionEndpoints; }
    template<typename MultiRegionEndpointsT = Aws::Vector<MultiRegionEndpoint>>
    void SetMultiRegionEndpoints(MultiRegionEndpointsT&& value) { m_multiRegionEndpointsHasBeenSet = true; m_multiRegionEndpoints = std::forward<MultiRegionEndpointsT>(value); }
    template<typename MultiRegionEndpointsT = Aws::Vector<MultiRegionEndpoint>>
    ListMultiRegionEndpointsResult& WithMultiRegionEndpoints(MultiRegionEndpointsT&& value) { SetMultiRegionEndpoints(std::forward<MultiRegionEndpointsT>(value)); return *this;}
    template<typename MultiRegionEndpointsT = MultiRegionEndpoint>
    ListMultiRegionEndpointsResult& AddMultiRegionEndpoints(MultiRegionEndpointsT&& value) { m_multiRegionEndpointsHasBeenSet = true; m_multiRegionEndpoints.emplace_back(std::forward<MultiRegionEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional multi-region endpoints
     * (global-endpoints) available to be listed. Pass this token to a subsequent
     * <code>ListMultiRegionEndpoints</code> call to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMultiRegionEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMultiRegionEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MultiRegionEndpoint> m_multiRegionEndpoints;
    bool m_multiRegionEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
