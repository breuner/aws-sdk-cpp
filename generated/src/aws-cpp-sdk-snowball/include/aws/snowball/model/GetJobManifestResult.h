﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{
  class GetJobManifestResult
  {
  public:
    AWS_SNOWBALL_API GetJobManifestResult();
    AWS_SNOWBALL_API GetJobManifestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API GetJobManifestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline const Aws::String& GetManifestURI() const{ return m_manifestURI; }
    inline void SetManifestURI(const Aws::String& value) { m_manifestURI = value; }
    inline void SetManifestURI(Aws::String&& value) { m_manifestURI = std::move(value); }
    inline void SetManifestURI(const char* value) { m_manifestURI.assign(value); }
    inline GetJobManifestResult& WithManifestURI(const Aws::String& value) { SetManifestURI(value); return *this;}
    inline GetJobManifestResult& WithManifestURI(Aws::String&& value) { SetManifestURI(std::move(value)); return *this;}
    inline GetJobManifestResult& WithManifestURI(const char* value) { SetManifestURI(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobManifestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobManifestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobManifestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_manifestURI;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
