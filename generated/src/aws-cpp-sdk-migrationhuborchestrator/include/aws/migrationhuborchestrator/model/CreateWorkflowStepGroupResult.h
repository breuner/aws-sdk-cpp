﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migrationhuborchestrator/model/Tool.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{
  class CreateWorkflowStepGroupResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepGroupResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the migration workflow that contains the step group.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline CreateWorkflowStepGroupResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateWorkflowStepGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateWorkflowStepGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateWorkflowStepGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of AWS services utilized in a migration workflow.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }
    inline void SetTools(const Aws::Vector<Tool>& value) { m_tools = value; }
    inline void SetTools(Aws::Vector<Tool>&& value) { m_tools = std::move(value); }
    inline CreateWorkflowStepGroupResult& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& AddTools(const Tool& value) { m_tools.push_back(value); return *this; }
    inline CreateWorkflowStepGroupResult& AddTools(Tool&& value) { m_tools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNext() const{ return m_next; }
    inline void SetNext(const Aws::Vector<Aws::String>& value) { m_next = value; }
    inline void SetNext(Aws::Vector<Aws::String>&& value) { m_next = std::move(value); }
    inline CreateWorkflowStepGroupResult& WithNext(const Aws::Vector<Aws::String>& value) { SetNext(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithNext(Aws::Vector<Aws::String>&& value) { SetNext(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& AddNext(const Aws::String& value) { m_next.push_back(value); return *this; }
    inline CreateWorkflowStepGroupResult& AddNext(Aws::String&& value) { m_next.push_back(std::move(value)); return *this; }
    inline CreateWorkflowStepGroupResult& AddNext(const char* value) { m_next.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The previous step group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrevious() const{ return m_previous; }
    inline void SetPrevious(const Aws::Vector<Aws::String>& value) { m_previous = value; }
    inline void SetPrevious(Aws::Vector<Aws::String>&& value) { m_previous = std::move(value); }
    inline CreateWorkflowStepGroupResult& WithPrevious(const Aws::Vector<Aws::String>& value) { SetPrevious(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithPrevious(Aws::Vector<Aws::String>&& value) { SetPrevious(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& AddPrevious(const Aws::String& value) { m_previous.push_back(value); return *this; }
    inline CreateWorkflowStepGroupResult& AddPrevious(Aws::String&& value) { m_previous.push_back(std::move(value)); return *this; }
    inline CreateWorkflowStepGroupResult& AddPrevious(const char* value) { m_previous.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the step group is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateWorkflowStepGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkflowStepGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkflowStepGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkflowStepGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;

    Aws::String m_name;

    Aws::String m_id;

    Aws::String m_description;

    Aws::Vector<Tool> m_tools;

    Aws::Vector<Aws::String> m_next;

    Aws::Vector<Aws::String> m_previous;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
