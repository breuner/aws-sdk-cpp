﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/QualificationType.h>
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
  class ListQualificationTypesResult
  {
  public:
    AWS_MTURK_API ListQualificationTypesResult();
    AWS_MTURK_API ListQualificationTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListQualificationTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The number of Qualification types on this page in the filtered results list,
     * equivalent to the number of types this operation returns. </p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline void SetNumResults(int value) { m_numResults = value; }
    inline ListQualificationTypesResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQualificationTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQualificationTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQualificationTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline const Aws::Vector<QualificationType>& GetQualificationTypes() const{ return m_qualificationTypes; }
    inline void SetQualificationTypes(const Aws::Vector<QualificationType>& value) { m_qualificationTypes = value; }
    inline void SetQualificationTypes(Aws::Vector<QualificationType>&& value) { m_qualificationTypes = std::move(value); }
    inline ListQualificationTypesResult& WithQualificationTypes(const Aws::Vector<QualificationType>& value) { SetQualificationTypes(value); return *this;}
    inline ListQualificationTypesResult& WithQualificationTypes(Aws::Vector<QualificationType>&& value) { SetQualificationTypes(std::move(value)); return *this;}
    inline ListQualificationTypesResult& AddQualificationTypes(const QualificationType& value) { m_qualificationTypes.push_back(value); return *this; }
    inline ListQualificationTypesResult& AddQualificationTypes(QualificationType&& value) { m_qualificationTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQualificationTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQualificationTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQualificationTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_numResults;

    Aws::String m_nextToken;

    Aws::Vector<QualificationType> m_qualificationTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
