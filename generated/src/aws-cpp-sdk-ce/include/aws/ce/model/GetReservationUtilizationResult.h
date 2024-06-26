﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/ReservationAggregates.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/UtilizationByTime.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetReservationUtilizationResult
  {
  public:
    AWS_COSTEXPLORER_API GetReservationUtilizationResult();
    AWS_COSTEXPLORER_API GetReservationUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetReservationUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The amount of time that you used your Reserved Instances (RIs).</p>
     */
    inline const Aws::Vector<UtilizationByTime>& GetUtilizationsByTime() const{ return m_utilizationsByTime; }
    inline void SetUtilizationsByTime(const Aws::Vector<UtilizationByTime>& value) { m_utilizationsByTime = value; }
    inline void SetUtilizationsByTime(Aws::Vector<UtilizationByTime>&& value) { m_utilizationsByTime = std::move(value); }
    inline GetReservationUtilizationResult& WithUtilizationsByTime(const Aws::Vector<UtilizationByTime>& value) { SetUtilizationsByTime(value); return *this;}
    inline GetReservationUtilizationResult& WithUtilizationsByTime(Aws::Vector<UtilizationByTime>&& value) { SetUtilizationsByTime(std::move(value)); return *this;}
    inline GetReservationUtilizationResult& AddUtilizationsByTime(const UtilizationByTime& value) { m_utilizationsByTime.push_back(value); return *this; }
    inline GetReservationUtilizationResult& AddUtilizationsByTime(UtilizationByTime&& value) { m_utilizationsByTime.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total amount of time that you used your Reserved Instances (RIs).</p>
     */
    inline const ReservationAggregates& GetTotal() const{ return m_total; }
    inline void SetTotal(const ReservationAggregates& value) { m_total = value; }
    inline void SetTotal(ReservationAggregates&& value) { m_total = std::move(value); }
    inline GetReservationUtilizationResult& WithTotal(const ReservationAggregates& value) { SetTotal(value); return *this;}
    inline GetReservationUtilizationResult& WithTotal(ReservationAggregates&& value) { SetTotal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetReservationUtilizationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetReservationUtilizationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetReservationUtilizationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReservationUtilizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReservationUtilizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReservationUtilizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UtilizationByTime> m_utilizationsByTime;

    ReservationAggregates m_total;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
