﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileSystem.h>
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
  /**
   * <p>The response object for <code>DescribeFileSystems</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeFileSystemsResult
  {
  public:
    AWS_FSX_API DescribeFileSystemsResult();
    AWS_FSX_API DescribeFileSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeFileSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of file system descriptions.</p>
     */
    inline const Aws::Vector<FileSystem>& GetFileSystems() const{ return m_fileSystems; }
    inline void SetFileSystems(const Aws::Vector<FileSystem>& value) { m_fileSystems = value; }
    inline void SetFileSystems(Aws::Vector<FileSystem>&& value) { m_fileSystems = std::move(value); }
    inline DescribeFileSystemsResult& WithFileSystems(const Aws::Vector<FileSystem>& value) { SetFileSystems(value); return *this;}
    inline DescribeFileSystemsResult& WithFileSystems(Aws::Vector<FileSystem>&& value) { SetFileSystems(std::move(value)); return *this;}
    inline DescribeFileSystemsResult& AddFileSystems(const FileSystem& value) { m_fileSystems.push_back(value); return *this; }
    inline DescribeFileSystemsResult& AddFileSystems(FileSystem&& value) { m_fileSystems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeFileSystemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFileSystemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFileSystemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFileSystemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFileSystemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFileSystemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FileSystem> m_fileSystems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
