﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeUploadBufferResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeUploadBufferResult();
    AWS_STORAGEGATEWAY_API DescribeUploadBufferResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeUploadBufferResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }
    inline DescribeUploadBufferResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline DescribeUploadBufferResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline DescribeUploadBufferResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIds = value; }
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIds = std::move(value); }
    inline DescribeUploadBufferResult& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}
    inline DescribeUploadBufferResult& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(std::move(value)); return *this;}
    inline DescribeUploadBufferResult& AddDiskIds(const Aws::String& value) { m_diskIds.push_back(value); return *this; }
    inline DescribeUploadBufferResult& AddDiskIds(Aws::String&& value) { m_diskIds.push_back(std::move(value)); return *this; }
    inline DescribeUploadBufferResult& AddDiskIds(const char* value) { m_diskIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of bytes being used in the gateway's upload buffer.</p>
     */
    inline long long GetUploadBufferUsedInBytes() const{ return m_uploadBufferUsedInBytes; }
    inline void SetUploadBufferUsedInBytes(long long value) { m_uploadBufferUsedInBytes = value; }
    inline DescribeUploadBufferResult& WithUploadBufferUsedInBytes(long long value) { SetUploadBufferUsedInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of bytes allocated in the gateway's as upload buffer.</p>
     */
    inline long long GetUploadBufferAllocatedInBytes() const{ return m_uploadBufferAllocatedInBytes; }
    inline void SetUploadBufferAllocatedInBytes(long long value) { m_uploadBufferAllocatedInBytes = value; }
    inline DescribeUploadBufferResult& WithUploadBufferAllocatedInBytes(long long value) { SetUploadBufferAllocatedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUploadBufferResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUploadBufferResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUploadBufferResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;

    Aws::Vector<Aws::String> m_diskIds;

    long long m_uploadBufferUsedInBytes;

    long long m_uploadBufferAllocatedInBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
