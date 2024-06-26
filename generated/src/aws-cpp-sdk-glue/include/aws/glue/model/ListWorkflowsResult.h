﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class ListWorkflowsResult
  {
  public:
    AWS_GLUE_API ListWorkflowsResult();
    AWS_GLUE_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of names of workflows in the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkflows() const{ return m_workflows; }
    inline void SetWorkflows(const Aws::Vector<Aws::String>& value) { m_workflows = value; }
    inline void SetWorkflows(Aws::Vector<Aws::String>&& value) { m_workflows = std::move(value); }
    inline ListWorkflowsResult& WithWorkflows(const Aws::Vector<Aws::String>& value) { SetWorkflows(value); return *this;}
    inline ListWorkflowsResult& WithWorkflows(Aws::Vector<Aws::String>&& value) { SetWorkflows(std::move(value)); return *this;}
    inline ListWorkflowsResult& AddWorkflows(const Aws::String& value) { m_workflows.push_back(value); return *this; }
    inline ListWorkflowsResult& AddWorkflows(Aws::String&& value) { m_workflows.push_back(std::move(value)); return *this; }
    inline ListWorkflowsResult& AddWorkflows(const char* value) { m_workflows.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all workflow names have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkflowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkflowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkflowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_workflows;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
