﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/AvailableNumberSummary.h>
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
namespace Connect
{
namespace Model
{
  class SearchAvailablePhoneNumbersResult
  {
  public:
    AWS_CONNECT_API SearchAvailablePhoneNumbersResult() = default;
    AWS_CONNECT_API SearchAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchAvailablePhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchAvailablePhoneNumbersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of available phone numbers that you can claim to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline const Aws::Vector<AvailableNumberSummary>& GetAvailableNumbersList() const { return m_availableNumbersList; }
    template<typename AvailableNumbersListT = Aws::Vector<AvailableNumberSummary>>
    void SetAvailableNumbersList(AvailableNumbersListT&& value) { m_availableNumbersListHasBeenSet = true; m_availableNumbersList = std::forward<AvailableNumbersListT>(value); }
    template<typename AvailableNumbersListT = Aws::Vector<AvailableNumberSummary>>
    SearchAvailablePhoneNumbersResult& WithAvailableNumbersList(AvailableNumbersListT&& value) { SetAvailableNumbersList(std::forward<AvailableNumbersListT>(value)); return *this;}
    template<typename AvailableNumbersListT = AvailableNumberSummary>
    SearchAvailablePhoneNumbersResult& AddAvailableNumbersList(AvailableNumbersListT&& value) { m_availableNumbersListHasBeenSet = true; m_availableNumbersList.emplace_back(std::forward<AvailableNumbersListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchAvailablePhoneNumbersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AvailableNumberSummary> m_availableNumbersList;
    bool m_availableNumbersListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
