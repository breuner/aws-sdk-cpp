﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ReportGroupTrendStats.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportWithRawData.h>
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
namespace CodeBuild
{
namespace Model
{
  class GetReportGroupTrendResult
  {
  public:
    AWS_CODEBUILD_API GetReportGroupTrendResult();
    AWS_CODEBUILD_API GetReportGroupTrendResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API GetReportGroupTrendResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the accumulated trend data.</p>
     */
    inline const ReportGroupTrendStats& GetStats() const{ return m_stats; }
    inline void SetStats(const ReportGroupTrendStats& value) { m_stats = value; }
    inline void SetStats(ReportGroupTrendStats&& value) { m_stats = std::move(value); }
    inline GetReportGroupTrendResult& WithStats(const ReportGroupTrendStats& value) { SetStats(value); return *this;}
    inline GetReportGroupTrendResult& WithStats(ReportGroupTrendStats&& value) { SetStats(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the raw data for each report.</p>
     */
    inline const Aws::Vector<ReportWithRawData>& GetRawData() const{ return m_rawData; }
    inline void SetRawData(const Aws::Vector<ReportWithRawData>& value) { m_rawData = value; }
    inline void SetRawData(Aws::Vector<ReportWithRawData>&& value) { m_rawData = std::move(value); }
    inline GetReportGroupTrendResult& WithRawData(const Aws::Vector<ReportWithRawData>& value) { SetRawData(value); return *this;}
    inline GetReportGroupTrendResult& WithRawData(Aws::Vector<ReportWithRawData>&& value) { SetRawData(std::move(value)); return *this;}
    inline GetReportGroupTrendResult& AddRawData(const ReportWithRawData& value) { m_rawData.push_back(value); return *this; }
    inline GetReportGroupTrendResult& AddRawData(ReportWithRawData&& value) { m_rawData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReportGroupTrendResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReportGroupTrendResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReportGroupTrendResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReportGroupTrendStats m_stats;

    Aws::Vector<ReportWithRawData> m_rawData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
