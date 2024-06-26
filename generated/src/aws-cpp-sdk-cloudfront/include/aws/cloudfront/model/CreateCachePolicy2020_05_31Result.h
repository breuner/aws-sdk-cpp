﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class CreateCachePolicy2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateCachePolicy2020_05_31Result();
    AWS_CLOUDFRONT_API CreateCachePolicy2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateCachePolicy2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A cache policy.</p>
     */
    inline const CachePolicy& GetCachePolicy() const{ return m_cachePolicy; }
    inline void SetCachePolicy(const CachePolicy& value) { m_cachePolicy = value; }
    inline void SetCachePolicy(CachePolicy&& value) { m_cachePolicy = std::move(value); }
    inline CreateCachePolicy2020_05_31Result& WithCachePolicy(const CachePolicy& value) { SetCachePolicy(value); return *this;}
    inline CreateCachePolicy2020_05_31Result& WithCachePolicy(CachePolicy&& value) { SetCachePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified URI of the cache policy just created.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateCachePolicy2020_05_31Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateCachePolicy2020_05_31Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateCachePolicy2020_05_31Result& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the cache policy.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline CreateCachePolicy2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline CreateCachePolicy2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline CreateCachePolicy2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCachePolicy2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCachePolicy2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCachePolicy2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CachePolicy m_cachePolicy;

    Aws::String m_location;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
