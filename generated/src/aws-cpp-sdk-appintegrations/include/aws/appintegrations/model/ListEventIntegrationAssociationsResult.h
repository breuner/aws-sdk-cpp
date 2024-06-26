﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/EventIntegrationAssociation.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class ListEventIntegrationAssociationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult();
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event integration associations.</p>
     */
    inline const Aws::Vector<EventIntegrationAssociation>& GetEventIntegrationAssociations() const{ return m_eventIntegrationAssociations; }
    inline void SetEventIntegrationAssociations(const Aws::Vector<EventIntegrationAssociation>& value) { m_eventIntegrationAssociations = value; }
    inline void SetEventIntegrationAssociations(Aws::Vector<EventIntegrationAssociation>&& value) { m_eventIntegrationAssociations = std::move(value); }
    inline ListEventIntegrationAssociationsResult& WithEventIntegrationAssociations(const Aws::Vector<EventIntegrationAssociation>& value) { SetEventIntegrationAssociations(value); return *this;}
    inline ListEventIntegrationAssociationsResult& WithEventIntegrationAssociations(Aws::Vector<EventIntegrationAssociation>&& value) { SetEventIntegrationAssociations(std::move(value)); return *this;}
    inline ListEventIntegrationAssociationsResult& AddEventIntegrationAssociations(const EventIntegrationAssociation& value) { m_eventIntegrationAssociations.push_back(value); return *this; }
    inline ListEventIntegrationAssociationsResult& AddEventIntegrationAssociations(EventIntegrationAssociation&& value) { m_eventIntegrationAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventIntegrationAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventIntegrationAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventIntegrationAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventIntegrationAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventIntegrationAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventIntegrationAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventIntegrationAssociation> m_eventIntegrationAssociations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
