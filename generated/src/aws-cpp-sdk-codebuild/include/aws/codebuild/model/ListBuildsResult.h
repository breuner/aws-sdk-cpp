﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListBuildsResult
  {
  public:
    AWS_CODEBUILD_API ListBuildsResult();
    AWS_CODEBUILD_API ListBuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListBuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of build IDs, with each build ID representing a single build.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }
    inline ListBuildsResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}
    inline ListBuildsResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}
    inline ListBuildsResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }
    inline ListBuildsResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }
    inline ListBuildsResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBuildsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBuildsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBuildsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBuildsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBuildsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBuildsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
