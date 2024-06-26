﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/DataSetTaskLifecycle.h>
#include <aws/m2/model/DataSetImportSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetDataSetImportTaskResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetImportTaskResult();
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the task.</p>
     */
    inline const DataSetTaskLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataSetTaskLifecycle& value) { m_status = value; }
    inline void SetStatus(DataSetTaskLifecycle&& value) { m_status = std::move(value); }
    inline GetDataSetImportTaskResult& WithStatus(const DataSetTaskLifecycle& value) { SetStatus(value); return *this;}
    inline GetDataSetImportTaskResult& WithStatus(DataSetTaskLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the status of the task.</p>
     */
    inline const DataSetImportSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const DataSetImportSummary& value) { m_summary = value; }
    inline void SetSummary(DataSetImportSummary&& value) { m_summary = std::move(value); }
    inline GetDataSetImportTaskResult& WithSummary(const DataSetImportSummary& value) { SetSummary(value); return *this;}
    inline GetDataSetImportTaskResult& WithSummary(DataSetImportSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task identifier.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline GetDataSetImportTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline GetDataSetImportTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline GetDataSetImportTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataSetImportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataSetImportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataSetImportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataSetTaskLifecycle m_status;

    DataSetImportSummary m_summary;

    Aws::String m_taskId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
