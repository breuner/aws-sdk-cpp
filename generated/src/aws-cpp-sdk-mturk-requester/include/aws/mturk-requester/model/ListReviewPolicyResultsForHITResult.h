﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/ReviewPolicy.h>
#include <aws/mturk-requester/model/ReviewReport.h>
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
namespace MTurk
{
namespace Model
{
  class ListReviewPolicyResultsForHITResult
  {
  public:
    AWS_MTURK_API ListReviewPolicyResultsForHITResult();
    AWS_MTURK_API ListReviewPolicyResultsForHITResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListReviewPolicyResultsForHITResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HITId of the HIT for which results have been returned.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }
    inline void SetHITId(const Aws::String& value) { m_hITId = value; }
    inline void SetHITId(Aws::String&& value) { m_hITId = std::move(value); }
    inline void SetHITId(const char* value) { m_hITId.assign(value); }
    inline ListReviewPolicyResultsForHITResult& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithHITId(const char* value) { SetHITId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Assignment-level Review Policy. This contains only the
     * PolicyName element. </p>
     */
    inline const ReviewPolicy& GetAssignmentReviewPolicy() const{ return m_assignmentReviewPolicy; }
    inline void SetAssignmentReviewPolicy(const ReviewPolicy& value) { m_assignmentReviewPolicy = value; }
    inline void SetAssignmentReviewPolicy(ReviewPolicy&& value) { m_assignmentReviewPolicy = std::move(value); }
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewPolicy(const ReviewPolicy& value) { SetAssignmentReviewPolicy(value); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewPolicy(ReviewPolicy&& value) { SetAssignmentReviewPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the HIT-level Review Policy. This contains only the PolicyName
     * element.</p>
     */
    inline const ReviewPolicy& GetHITReviewPolicy() const{ return m_hITReviewPolicy; }
    inline void SetHITReviewPolicy(const ReviewPolicy& value) { m_hITReviewPolicy = value; }
    inline void SetHITReviewPolicy(ReviewPolicy&& value) { m_hITReviewPolicy = std::move(value); }
    inline ListReviewPolicyResultsForHITResult& WithHITReviewPolicy(const ReviewPolicy& value) { SetHITReviewPolicy(value); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithHITReviewPolicy(ReviewPolicy&& value) { SetHITReviewPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains both ReviewResult and ReviewAction elements for an Assignment. </p>
     */
    inline const ReviewReport& GetAssignmentReviewReport() const{ return m_assignmentReviewReport; }
    inline void SetAssignmentReviewReport(const ReviewReport& value) { m_assignmentReviewReport = value; }
    inline void SetAssignmentReviewReport(ReviewReport&& value) { m_assignmentReviewReport = std::move(value); }
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewReport(const ReviewReport& value) { SetAssignmentReviewReport(value); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithAssignmentReviewReport(ReviewReport&& value) { SetAssignmentReviewReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains both ReviewResult and ReviewAction elements for a particular HIT.
     * </p>
     */
    inline const ReviewReport& GetHITReviewReport() const{ return m_hITReviewReport; }
    inline void SetHITReviewReport(const ReviewReport& value) { m_hITReviewReport = value; }
    inline void SetHITReviewReport(ReviewReport&& value) { m_hITReviewReport = std::move(value); }
    inline ListReviewPolicyResultsForHITResult& WithHITReviewReport(const ReviewReport& value) { SetHITReviewReport(value); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithHITReviewReport(ReviewReport&& value) { SetHITReviewReport(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReviewPolicyResultsForHITResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReviewPolicyResultsForHITResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReviewPolicyResultsForHITResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hITId;

    ReviewPolicy m_assignmentReviewPolicy;

    ReviewPolicy m_hITReviewPolicy;

    ReviewReport m_assignmentReviewReport;

    ReviewReport m_hITReviewReport;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
