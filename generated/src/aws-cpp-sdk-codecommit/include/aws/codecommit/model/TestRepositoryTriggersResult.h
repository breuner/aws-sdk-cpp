﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/RepositoryTriggerExecutionFailure.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a test repository triggers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggersOutput">AWS
   * API Reference</a></p>
   */
  class TestRepositoryTriggersResult
  {
  public:
    AWS_CODECOMMIT_API TestRepositoryTriggersResult();
    AWS_CODECOMMIT_API TestRepositoryTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API TestRepositoryTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of triggers that were successfully tested. This list provides the
     * names of the triggers that were successfully tested, separated by commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessfulExecutions() const{ return m_successfulExecutions; }
    inline void SetSuccessfulExecutions(const Aws::Vector<Aws::String>& value) { m_successfulExecutions = value; }
    inline void SetSuccessfulExecutions(Aws::Vector<Aws::String>&& value) { m_successfulExecutions = std::move(value); }
    inline TestRepositoryTriggersResult& WithSuccessfulExecutions(const Aws::Vector<Aws::String>& value) { SetSuccessfulExecutions(value); return *this;}
    inline TestRepositoryTriggersResult& WithSuccessfulExecutions(Aws::Vector<Aws::String>&& value) { SetSuccessfulExecutions(std::move(value)); return *this;}
    inline TestRepositoryTriggersResult& AddSuccessfulExecutions(const Aws::String& value) { m_successfulExecutions.push_back(value); return *this; }
    inline TestRepositoryTriggersResult& AddSuccessfulExecutions(Aws::String&& value) { m_successfulExecutions.push_back(std::move(value)); return *this; }
    inline TestRepositoryTriggersResult& AddSuccessfulExecutions(const char* value) { m_successfulExecutions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of triggers that were not tested. This list provides the names of
     * the triggers that could not be tested, separated by commas.</p>
     */
    inline const Aws::Vector<RepositoryTriggerExecutionFailure>& GetFailedExecutions() const{ return m_failedExecutions; }
    inline void SetFailedExecutions(const Aws::Vector<RepositoryTriggerExecutionFailure>& value) { m_failedExecutions = value; }
    inline void SetFailedExecutions(Aws::Vector<RepositoryTriggerExecutionFailure>&& value) { m_failedExecutions = std::move(value); }
    inline TestRepositoryTriggersResult& WithFailedExecutions(const Aws::Vector<RepositoryTriggerExecutionFailure>& value) { SetFailedExecutions(value); return *this;}
    inline TestRepositoryTriggersResult& WithFailedExecutions(Aws::Vector<RepositoryTriggerExecutionFailure>&& value) { SetFailedExecutions(std::move(value)); return *this;}
    inline TestRepositoryTriggersResult& AddFailedExecutions(const RepositoryTriggerExecutionFailure& value) { m_failedExecutions.push_back(value); return *this; }
    inline TestRepositoryTriggersResult& AddFailedExecutions(RepositoryTriggerExecutionFailure&& value) { m_failedExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestRepositoryTriggersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestRepositoryTriggersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestRepositoryTriggersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_successfulExecutions;

    Aws::Vector<RepositoryTriggerExecutionFailure> m_failedExecutions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
