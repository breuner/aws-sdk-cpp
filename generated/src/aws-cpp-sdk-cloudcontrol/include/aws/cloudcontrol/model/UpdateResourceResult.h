﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/model/ProgressEvent.h>
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
namespace CloudControlApi
{
namespace Model
{
  class UpdateResourceResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API UpdateResourceResult();
    AWS_CLOUDCONTROLAPI_API UpdateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API UpdateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the current status of the resource update request.</p> <p>Use the
     * <code>RequestToken</code> of the <code>ProgressEvent</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline const ProgressEvent& GetProgressEvent() const{ return m_progressEvent; }
    inline void SetProgressEvent(const ProgressEvent& value) { m_progressEvent = value; }
    inline void SetProgressEvent(ProgressEvent&& value) { m_progressEvent = std::move(value); }
    inline UpdateResourceResult& WithProgressEvent(const ProgressEvent& value) { SetProgressEvent(value); return *this;}
    inline UpdateResourceResult& WithProgressEvent(ProgressEvent&& value) { SetProgressEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ProgressEvent m_progressEvent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
