﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/PoolInfo.h>
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
  class ListTapePoolsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListTapePoolsResult();
    AWS_STORAGEGATEWAY_API ListTapePoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListTapePoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>PoolInfo</code> objects, where each object describes a
     * single custom tape pool. If there are no custom tape pools, the
     * <code>PoolInfos</code> is an empty array. </p>
     */
    inline const Aws::Vector<PoolInfo>& GetPoolInfos() const{ return m_poolInfos; }
    inline void SetPoolInfos(const Aws::Vector<PoolInfo>& value) { m_poolInfos = value; }
    inline void SetPoolInfos(Aws::Vector<PoolInfo>&& value) { m_poolInfos = std::move(value); }
    inline ListTapePoolsResult& WithPoolInfos(const Aws::Vector<PoolInfo>& value) { SetPoolInfos(value); return *this;}
    inline ListTapePoolsResult& WithPoolInfos(Aws::Vector<PoolInfo>&& value) { SetPoolInfos(std::move(value)); return *this;}
    inline ListTapePoolsResult& AddPoolInfos(const PoolInfo& value) { m_poolInfos.push_back(value); return *this; }
    inline ListTapePoolsResult& AddPoolInfos(PoolInfo&& value) { m_poolInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools. Use the marker in your next request to continue pagination of tape
     * pools. If there are no more tape pools to list, this element does not appear in
     * the response body. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListTapePoolsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListTapePoolsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListTapePoolsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTapePoolsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTapePoolsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTapePoolsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PoolInfo> m_poolInfos;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
