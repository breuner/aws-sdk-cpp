﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ExperienceEntitiesSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListExperienceEntitiesResult
  {
  public:
    AWS_KENDRA_API ListExperienceEntitiesResult();
    AWS_KENDRA_API ListExperienceEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListExperienceEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline const Aws::Vector<ExperienceEntitiesSummary>& GetSummaryItems() const{ return m_summaryItems; }
    inline void SetSummaryItems(const Aws::Vector<ExperienceEntitiesSummary>& value) { m_summaryItems = value; }
    inline void SetSummaryItems(Aws::Vector<ExperienceEntitiesSummary>&& value) { m_summaryItems = std::move(value); }
    inline ListExperienceEntitiesResult& WithSummaryItems(const Aws::Vector<ExperienceEntitiesSummary>& value) { SetSummaryItems(value); return *this;}
    inline ListExperienceEntitiesResult& WithSummaryItems(Aws::Vector<ExperienceEntitiesSummary>&& value) { SetSummaryItems(std::move(value)); return *this;}
    inline ListExperienceEntitiesResult& AddSummaryItems(const ExperienceEntitiesSummary& value) { m_summaryItems.push_back(value); return *this; }
    inline ListExperienceEntitiesResult& AddSummaryItems(ExperienceEntitiesSummary&& value) { m_summaryItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListExperienceEntitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExperienceEntitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExperienceEntitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListExperienceEntitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListExperienceEntitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListExperienceEntitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExperienceEntitiesSummary> m_summaryItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
