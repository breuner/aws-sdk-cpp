﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/DeleteStatisticsValueMap.h>
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
namespace neptunedata
{
namespace Model
{
  class DeleteSparqlStatisticsResult
  {
  public:
    AWS_NEPTUNEDATA_API DeleteSparqlStatisticsResult();
    AWS_NEPTUNEDATA_API DeleteSparqlStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API DeleteSparqlStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP response code: 200 if the delete was successful, or 204 if there
     * were no statistics to delete.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCode = value; }
    inline DeleteSparqlStatisticsResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cancel status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DeleteSparqlStatisticsResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DeleteSparqlStatisticsResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DeleteSparqlStatisticsResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion payload.</p>
     */
    inline const DeleteStatisticsValueMap& GetPayload() const{ return m_payload; }
    inline void SetPayload(const DeleteStatisticsValueMap& value) { m_payload = value; }
    inline void SetPayload(DeleteStatisticsValueMap&& value) { m_payload = std::move(value); }
    inline DeleteSparqlStatisticsResult& WithPayload(const DeleteStatisticsValueMap& value) { SetPayload(value); return *this;}
    inline DeleteSparqlStatisticsResult& WithPayload(DeleteStatisticsValueMap&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteSparqlStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteSparqlStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteSparqlStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_statusCode;

    Aws::String m_status;

    DeleteStatisticsValueMap m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
