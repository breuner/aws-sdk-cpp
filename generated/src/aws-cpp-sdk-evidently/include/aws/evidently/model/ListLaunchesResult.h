﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/Launch.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class ListLaunchesResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListLaunchesResult();
    AWS_CLOUDWATCHEVIDENTLY_API ListLaunchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListLaunchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain the configuration details of the launches
     * in the specified project.</p>
     */
    inline const Aws::Vector<Launch>& GetLaunches() const{ return m_launches; }
    inline void SetLaunches(const Aws::Vector<Launch>& value) { m_launches = value; }
    inline void SetLaunches(Aws::Vector<Launch>&& value) { m_launches = std::move(value); }
    inline ListLaunchesResult& WithLaunches(const Aws::Vector<Launch>& value) { SetLaunches(value); return *this;}
    inline ListLaunchesResult& WithLaunches(Aws::Vector<Launch>&& value) { SetLaunches(std::move(value)); return *this;}
    inline ListLaunchesResult& AddLaunches(const Launch& value) { m_launches.push_back(value); return *this; }
    inline ListLaunchesResult& AddLaunches(Launch&& value) { m_launches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListLaunches</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLaunchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLaunchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLaunchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLaunchesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLaunchesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLaunchesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Launch> m_launches;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
