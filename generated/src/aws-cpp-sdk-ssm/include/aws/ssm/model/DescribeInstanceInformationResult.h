﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceInformation.h>
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
namespace SSM
{
namespace Model
{
  class DescribeInstanceInformationResult
  {
  public:
    AWS_SSM_API DescribeInstanceInformationResult() = default;
    AWS_SSM_API DescribeInstanceInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstanceInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed node information list.</p>
     */
    inline const Aws::Vector<InstanceInformation>& GetInstanceInformationList() const { return m_instanceInformationList; }
    template<typename InstanceInformationListT = Aws::Vector<InstanceInformation>>
    void SetInstanceInformationList(InstanceInformationListT&& value) { m_instanceInformationListHasBeenSet = true; m_instanceInformationList = std::forward<InstanceInformationListT>(value); }
    template<typename InstanceInformationListT = Aws::Vector<InstanceInformation>>
    DescribeInstanceInformationResult& WithInstanceInformationList(InstanceInformationListT&& value) { SetInstanceInformationList(std::forward<InstanceInformationListT>(value)); return *this;}
    template<typename InstanceInformationListT = InstanceInformation>
    DescribeInstanceInformationResult& AddInstanceInformationList(InstanceInformationListT&& value) { m_instanceInformationListHasBeenSet = true; m_instanceInformationList.emplace_back(std::forward<InstanceInformationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstanceInformationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInstanceInformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceInformation> m_instanceInformationList;
    bool m_instanceInformationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
