﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LocationService
{
namespace Model
{
  class GetMapTileResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapTileResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LOCATIONSERVICE_API GetMapTileResult(GetMapTileResult&&);
    AWS_LOCATIONSERVICE_API GetMapTileResult& operator=(GetMapTileResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetMapTileResult(const GetMapTileResult&) = delete;
    GetMapTileResult& operator=(const GetMapTileResult&) = delete;


    AWS_LOCATIONSERVICE_API GetMapTileResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LOCATIONSERVICE_API GetMapTileResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Contains Mapbox Vector Tile (MVT) data.</p>
     */
    inline Aws::IOStream& GetBlob() const { return m_blob.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The map tile's content type. For example,
     * <code>application/vnd.mapbox-vector-tile</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline GetMapTileResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline GetMapTileResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline GetMapTileResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP Cache-Control directive for the value.</p>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }
    inline void SetCacheControl(const Aws::String& value) { m_cacheControl = value; }
    inline void SetCacheControl(Aws::String&& value) { m_cacheControl = std::move(value); }
    inline void SetCacheControl(const char* value) { m_cacheControl.assign(value); }
    inline GetMapTileResult& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}
    inline GetMapTileResult& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}
    inline GetMapTileResult& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMapTileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMapTileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMapTileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_blob;

    Aws::String m_contentType;

    Aws::String m_cacheControl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
