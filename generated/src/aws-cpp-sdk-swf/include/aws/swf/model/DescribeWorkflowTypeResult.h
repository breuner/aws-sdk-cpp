﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowTypeInfo.h>
#include <aws/swf/model/WorkflowTypeConfiguration.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Contains details about a workflow type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowTypeDetail">AWS
   * API Reference</a></p>
   */
  class DescribeWorkflowTypeResult
  {
  public:
    AWS_SWF_API DescribeWorkflowTypeResult();
    AWS_SWF_API DescribeWorkflowTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API DescribeWorkflowTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>General information about the workflow type.</p> <p>The status of the
     * workflow type (returned in the WorkflowTypeInfo structure) can be one of the
     * following.</p> <ul> <li> <p> <code>REGISTERED</code> – The type is registered
     * and available. Workers supporting this type should be running.</p> </li> <li>
     * <p> <code>DEPRECATED</code> – The type was deprecated using
     * <a>DeprecateWorkflowType</a>, but is still in use. You should keep workers
     * supporting this type running. You cannot create new workflow executions of this
     * type.</p> </li> </ul>
     */
    inline const WorkflowTypeInfo& GetTypeInfo() const{ return m_typeInfo; }
    inline void SetTypeInfo(const WorkflowTypeInfo& value) { m_typeInfo = value; }
    inline void SetTypeInfo(WorkflowTypeInfo&& value) { m_typeInfo = std::move(value); }
    inline DescribeWorkflowTypeResult& WithTypeInfo(const WorkflowTypeInfo& value) { SetTypeInfo(value); return *this;}
    inline DescribeWorkflowTypeResult& WithTypeInfo(WorkflowTypeInfo&& value) { SetTypeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings of the workflow type registered through
     * <a>RegisterWorkflowType</a> </p>
     */
    inline const WorkflowTypeConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const WorkflowTypeConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(WorkflowTypeConfiguration&& value) { m_configuration = std::move(value); }
    inline DescribeWorkflowTypeResult& WithConfiguration(const WorkflowTypeConfiguration& value) { SetConfiguration(value); return *this;}
    inline DescribeWorkflowTypeResult& WithConfiguration(WorkflowTypeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkflowTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkflowTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkflowTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WorkflowTypeInfo m_typeInfo;

    WorkflowTypeConfiguration m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
