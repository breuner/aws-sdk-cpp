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
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeWorkingStorageOutput">AWS
   * API Reference</a></p>
   */
  class DescribeWorkingStorageResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeWorkingStorageResult();
    AWS_STORAGEGATEWAY_API DescribeWorkingStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeWorkingStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }
    inline DescribeWorkingStorageResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline DescribeWorkingStorageResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline DescribeWorkingStorageResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
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
    inline DescribeWorkingStorageResult& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}
    inline DescribeWorkingStorageResult& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(std::move(value)); return *this;}
    inline DescribeWorkingStorageResult& AddDiskIds(const Aws::String& value) { m_diskIds.push_back(value); return *this; }
    inline DescribeWorkingStorageResult& AddDiskIds(Aws::String&& value) { m_diskIds.push_back(std::move(value)); return *this; }
    inline DescribeWorkingStorageResult& AddDiskIds(const char* value) { m_diskIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total working storage in bytes in use by the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline long long GetWorkingStorageUsedInBytes() const{ return m_workingStorageUsedInBytes; }
    inline void SetWorkingStorageUsedInBytes(long long value) { m_workingStorageUsedInBytes = value; }
    inline DescribeWorkingStorageResult& WithWorkingStorageUsedInBytes(long long value) { SetWorkingStorageUsedInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total working storage in bytes allocated for the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline long long GetWorkingStorageAllocatedInBytes() const{ return m_workingStorageAllocatedInBytes; }
    inline void SetWorkingStorageAllocatedInBytes(long long value) { m_workingStorageAllocatedInBytes = value; }
    inline DescribeWorkingStorageResult& WithWorkingStorageAllocatedInBytes(long long value) { SetWorkingStorageAllocatedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkingStorageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkingStorageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkingStorageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;

    Aws::Vector<Aws::String> m_diskIds;

    long long m_workingStorageUsedInBytes;

    long long m_workingStorageAllocatedInBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
