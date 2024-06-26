﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeLifecycle.h>
#include <aws/fsx/model/DeleteVolumeOntapResponse.h>
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
namespace FSx
{
namespace Model
{
  class DeleteVolumeResult
  {
  public:
    AWS_FSX_API DeleteVolumeResult();
    AWS_FSX_API DeleteVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the volume that's being deleted.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }
    inline DeleteVolumeResult& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline DeleteVolumeResult& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline DeleteVolumeResult& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the volume being deleted. If the
     * <code>DeleteVolume</code> operation is successful, this value is
     * <code>DELETING</code>.</p>
     */
    inline const VolumeLifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline void SetLifecycle(const VolumeLifecycle& value) { m_lifecycle = value; }
    inline void SetLifecycle(VolumeLifecycle&& value) { m_lifecycle = std::move(value); }
    inline DeleteVolumeResult& WithLifecycle(const VolumeLifecycle& value) { SetLifecycle(value); return *this;}
    inline DeleteVolumeResult& WithLifecycle(VolumeLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned after a <code>DeleteVolume</code> request, showing the status of the
     * delete request.</p>
     */
    inline const DeleteVolumeOntapResponse& GetOntapResponse() const{ return m_ontapResponse; }
    inline void SetOntapResponse(const DeleteVolumeOntapResponse& value) { m_ontapResponse = value; }
    inline void SetOntapResponse(DeleteVolumeOntapResponse&& value) { m_ontapResponse = std::move(value); }
    inline DeleteVolumeResult& WithOntapResponse(const DeleteVolumeOntapResponse& value) { SetOntapResponse(value); return *this;}
    inline DeleteVolumeResult& WithOntapResponse(DeleteVolumeOntapResponse&& value) { SetOntapResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteVolumeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteVolumeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteVolumeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;

    VolumeLifecycle m_lifecycle;

    DeleteVolumeOntapResponse m_ontapResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
