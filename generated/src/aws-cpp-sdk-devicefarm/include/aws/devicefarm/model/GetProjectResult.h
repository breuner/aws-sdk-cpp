﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Project.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a get project request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetProjectResult">AWS
   * API Reference</a></p>
   */
  class GetProjectResult
  {
  public:
    AWS_DEVICEFARM_API GetProjectResult();
    AWS_DEVICEFARM_API GetProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The project to get information about.</p>
     */
    inline const Project& GetProject() const{ return m_project; }
    inline void SetProject(const Project& value) { m_project = value; }
    inline void SetProject(Project&& value) { m_project = std::move(value); }
    inline GetProjectResult& WithProject(const Project& value) { SetProject(value); return *this;}
    inline GetProjectResult& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Project m_project;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
