﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSnapshotOutput">AWS
   * API Reference</a></p>
   */
  class CreateSnapshotResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateSnapshotResult();
    AWS_STORAGEGATEWAY_API CreateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }
    inline CreateSnapshotResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline CreateSnapshotResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline CreateSnapshotResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline CreateSnapshotResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline CreateSnapshotResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline CreateSnapshotResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;

    Aws::String m_snapshotId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
