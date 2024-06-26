﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Workteam.h>
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
namespace SageMaker
{
namespace Model
{
  class ListWorkteamsResult
  {
  public:
    AWS_SAGEMAKER_API ListWorkteamsResult();
    AWS_SAGEMAKER_API ListWorkteamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListWorkteamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline const Aws::Vector<Workteam>& GetWorkteams() const{ return m_workteams; }
    inline void SetWorkteams(const Aws::Vector<Workteam>& value) { m_workteams = value; }
    inline void SetWorkteams(Aws::Vector<Workteam>&& value) { m_workteams = std::move(value); }
    inline ListWorkteamsResult& WithWorkteams(const Aws::Vector<Workteam>& value) { SetWorkteams(value); return *this;}
    inline ListWorkteamsResult& WithWorkteams(Aws::Vector<Workteam>&& value) { SetWorkteams(std::move(value)); return *this;}
    inline ListWorkteamsResult& AddWorkteams(const Workteam& value) { m_workteams.push_back(value); return *this; }
    inline ListWorkteamsResult& AddWorkteams(Workteam&& value) { m_workteams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkteamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkteamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkteamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkteamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkteamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkteamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Workteam> m_workteams;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
