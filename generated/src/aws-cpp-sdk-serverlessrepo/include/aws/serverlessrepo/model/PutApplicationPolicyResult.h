﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class PutApplicationPolicyResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API PutApplicationPolicyResult();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API PutApplicationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API PutApplicationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline const Aws::Vector<ApplicationPolicyStatement>& GetStatements() const{ return m_statements; }
    inline void SetStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { m_statements = value; }
    inline void SetStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { m_statements = std::move(value); }
    inline PutApplicationPolicyResult& WithStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { SetStatements(value); return *this;}
    inline PutApplicationPolicyResult& WithStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { SetStatements(std::move(value)); return *this;}
    inline PutApplicationPolicyResult& AddStatements(const ApplicationPolicyStatement& value) { m_statements.push_back(value); return *this; }
    inline PutApplicationPolicyResult& AddStatements(ApplicationPolicyStatement&& value) { m_statements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutApplicationPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutApplicationPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutApplicationPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationPolicyStatement> m_statements;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
