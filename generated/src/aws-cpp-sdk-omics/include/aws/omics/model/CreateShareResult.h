﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ShareStatus.h>
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
namespace Omics
{
namespace Model
{
  class CreateShareResult
  {
  public:
    AWS_OMICS_API CreateShareResult();
    AWS_OMICS_API CreateShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID that HealthOmics generates for the share.</p>
     */
    inline const Aws::String& GetShareId() const{ return m_shareId; }
    inline void SetShareId(const Aws::String& value) { m_shareId = value; }
    inline void SetShareId(Aws::String&& value) { m_shareId = std::move(value); }
    inline void SetShareId(const char* value) { m_shareId.assign(value); }
    inline CreateShareResult& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}
    inline CreateShareResult& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}
    inline CreateShareResult& WithShareId(const char* value) { SetShareId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the share.</p>
     */
    inline const ShareStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ShareStatus& value) { m_status = value; }
    inline void SetStatus(ShareStatus&& value) { m_status = std::move(value); }
    inline CreateShareResult& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}
    inline CreateShareResult& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the share.</p>
     */
    inline const Aws::String& GetShareName() const{ return m_shareName; }
    inline void SetShareName(const Aws::String& value) { m_shareName = value; }
    inline void SetShareName(Aws::String&& value) { m_shareName = std::move(value); }
    inline void SetShareName(const char* value) { m_shareName.assign(value); }
    inline CreateShareResult& WithShareName(const Aws::String& value) { SetShareName(value); return *this;}
    inline CreateShareResult& WithShareName(Aws::String&& value) { SetShareName(std::move(value)); return *this;}
    inline CreateShareResult& WithShareName(const char* value) { SetShareName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_shareId;

    ShareStatus m_status;

    Aws::String m_shareName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
