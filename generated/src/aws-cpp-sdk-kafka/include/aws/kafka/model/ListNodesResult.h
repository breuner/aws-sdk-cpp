﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/NodeInfo.h>
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
namespace Kafka
{
namespace Model
{
  class ListNodesResult
  {
  public:
    AWS_KAFKA_API ListNodesResult() = default;
    AWS_KAFKA_API ListNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The paginated results marker. When the result of a ListNodes
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of nodes, provide this token in your next request.</p>
    
     *     
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNodesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>List containing a NodeInfo object.</p>
         
     */
    inline const Aws::Vector<NodeInfo>& GetNodeInfoList() const { return m_nodeInfoList; }
    template<typename NodeInfoListT = Aws::Vector<NodeInfo>>
    void SetNodeInfoList(NodeInfoListT&& value) { m_nodeInfoListHasBeenSet = true; m_nodeInfoList = std::forward<NodeInfoListT>(value); }
    template<typename NodeInfoListT = Aws::Vector<NodeInfo>>
    ListNodesResult& WithNodeInfoList(NodeInfoListT&& value) { SetNodeInfoList(std::forward<NodeInfoListT>(value)); return *this;}
    template<typename NodeInfoListT = NodeInfo>
    ListNodesResult& AddNodeInfoList(NodeInfoListT&& value) { m_nodeInfoListHasBeenSet = true; m_nodeInfoList.emplace_back(std::forward<NodeInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNodesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NodeInfo> m_nodeInfoList;
    bool m_nodeInfoListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
