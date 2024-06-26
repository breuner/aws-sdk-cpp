﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class GetSampleDataResult
  {
  public:
    AWS_LOOKOUTMETRICS_API GetSampleDataResult();
    AWS_LOOKOUTMETRICS_API GetSampleDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API GetSampleDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of header labels for the records.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeaderValues() const{ return m_headerValues; }
    inline void SetHeaderValues(const Aws::Vector<Aws::String>& value) { m_headerValues = value; }
    inline void SetHeaderValues(Aws::Vector<Aws::String>&& value) { m_headerValues = std::move(value); }
    inline GetSampleDataResult& WithHeaderValues(const Aws::Vector<Aws::String>& value) { SetHeaderValues(value); return *this;}
    inline GetSampleDataResult& WithHeaderValues(Aws::Vector<Aws::String>&& value) { SetHeaderValues(std::move(value)); return *this;}
    inline GetSampleDataResult& AddHeaderValues(const Aws::String& value) { m_headerValues.push_back(value); return *this; }
    inline GetSampleDataResult& AddHeaderValues(Aws::String&& value) { m_headerValues.push_back(std::move(value)); return *this; }
    inline GetSampleDataResult& AddHeaderValues(const char* value) { m_headerValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of records.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetSampleRows() const{ return m_sampleRows; }
    inline void SetSampleRows(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_sampleRows = value; }
    inline void SetSampleRows(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_sampleRows = std::move(value); }
    inline GetSampleDataResult& WithSampleRows(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetSampleRows(value); return *this;}
    inline GetSampleDataResult& WithSampleRows(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetSampleRows(std::move(value)); return *this;}
    inline GetSampleDataResult& AddSampleRows(const Aws::Vector<Aws::String>& value) { m_sampleRows.push_back(value); return *this; }
    inline GetSampleDataResult& AddSampleRows(Aws::Vector<Aws::String>&& value) { m_sampleRows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSampleDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSampleDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSampleDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_headerValues;

    Aws::Vector<Aws::Vector<Aws::String>> m_sampleRows;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
