﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{
  class DescribeFileSystemPolicyResult
  {
  public:
    AWS_EFS_API DescribeFileSystemPolicyResult();
    AWS_EFS_API DescribeFileSystemPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeFileSystemPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the EFS file system to which the <code>FileSystemPolicy</code>
     * applies.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }
    inline DescribeFileSystemPolicyResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline DescribeFileSystemPolicyResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline DescribeFileSystemPolicyResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON formatted <code>FileSystemPolicy</code> for the EFS file system.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline DescribeFileSystemPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline DescribeFileSystemPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline DescribeFileSystemPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFileSystemPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFileSystemPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFileSystemPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;

    Aws::String m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
