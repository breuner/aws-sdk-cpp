﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class StartMLLabelingSetGenerationTaskRunResult
  {
  public:
    AWS_GLUE_API StartMLLabelingSetGenerationTaskRunResult();
    AWS_GLUE_API StartMLLabelingSetGenerationTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartMLLabelingSetGenerationTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunId = value; }
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunId = std::move(value); }
    inline void SetTaskRunId(const char* value) { m_taskRunId.assign(value); }
    inline StartMLLabelingSetGenerationTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}
    inline StartMLLabelingSetGenerationTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}
    inline StartMLLabelingSetGenerationTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartMLLabelingSetGenerationTaskRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartMLLabelingSetGenerationTaskRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartMLLabelingSetGenerationTaskRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskRunId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
