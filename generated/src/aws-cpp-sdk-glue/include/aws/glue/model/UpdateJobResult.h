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
  class UpdateJobResult
  {
  public:
    AWS_GLUE_API UpdateJobResult();
    AWS_GLUE_API UpdateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API UpdateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the name of the updated job definition.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline UpdateJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline UpdateJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline UpdateJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
