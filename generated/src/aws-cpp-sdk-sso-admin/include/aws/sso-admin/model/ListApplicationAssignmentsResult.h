﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ApplicationAssignment.h>
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
namespace SSOAdmin
{
namespace Model
{
  class ListApplicationAssignmentsResult
  {
  public:
    AWS_SSOADMIN_API ListApplicationAssignmentsResult() = default;
    AWS_SSOADMIN_API ListApplicationAssignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListApplicationAssignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline const Aws::Vector<ApplicationAssignment>& GetApplicationAssignments() const { return m_applicationAssignments; }
    template<typename ApplicationAssignmentsT = Aws::Vector<ApplicationAssignment>>
    void SetApplicationAssignments(ApplicationAssignmentsT&& value) { m_applicationAssignmentsHasBeenSet = true; m_applicationAssignments = std::forward<ApplicationAssignmentsT>(value); }
    template<typename ApplicationAssignmentsT = Aws::Vector<ApplicationAssignment>>
    ListApplicationAssignmentsResult& WithApplicationAssignments(ApplicationAssignmentsT&& value) { SetApplicationAssignments(std::forward<ApplicationAssignmentsT>(value)); return *this;}
    template<typename ApplicationAssignmentsT = ApplicationAssignment>
    ListApplicationAssignmentsResult& AddApplicationAssignments(ApplicationAssignmentsT&& value) { m_applicationAssignmentsHasBeenSet = true; m_applicationAssignments.emplace_back(std::forward<ApplicationAssignmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationAssignmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationAssignmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationAssignment> m_applicationAssignments;
    bool m_applicationAssignmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
