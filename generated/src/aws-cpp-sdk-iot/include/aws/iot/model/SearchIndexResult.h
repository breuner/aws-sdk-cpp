﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ThingDocument.h>
#include <aws/iot/model/ThingGroupDocument.h>
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
namespace IoT
{
namespace Model
{
  class SearchIndexResult
  {
  public:
    AWS_IOT_API SearchIndexResult();
    AWS_IOT_API SearchIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API SearchIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token used to get the next set of results, or <code>null</code> if there
     * are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchIndexResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchIndexResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchIndexResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The things that match the search query.</p>
     */
    inline const Aws::Vector<ThingDocument>& GetThings() const{ return m_things; }
    inline void SetThings(const Aws::Vector<ThingDocument>& value) { m_things = value; }
    inline void SetThings(Aws::Vector<ThingDocument>&& value) { m_things = std::move(value); }
    inline SearchIndexResult& WithThings(const Aws::Vector<ThingDocument>& value) { SetThings(value); return *this;}
    inline SearchIndexResult& WithThings(Aws::Vector<ThingDocument>&& value) { SetThings(std::move(value)); return *this;}
    inline SearchIndexResult& AddThings(const ThingDocument& value) { m_things.push_back(value); return *this; }
    inline SearchIndexResult& AddThings(ThingDocument&& value) { m_things.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline const Aws::Vector<ThingGroupDocument>& GetThingGroups() const{ return m_thingGroups; }
    inline void SetThingGroups(const Aws::Vector<ThingGroupDocument>& value) { m_thingGroups = value; }
    inline void SetThingGroups(Aws::Vector<ThingGroupDocument>&& value) { m_thingGroups = std::move(value); }
    inline SearchIndexResult& WithThingGroups(const Aws::Vector<ThingGroupDocument>& value) { SetThingGroups(value); return *this;}
    inline SearchIndexResult& WithThingGroups(Aws::Vector<ThingGroupDocument>&& value) { SetThingGroups(std::move(value)); return *this;}
    inline SearchIndexResult& AddThingGroups(const ThingGroupDocument& value) { m_thingGroups.push_back(value); return *this; }
    inline SearchIndexResult& AddThingGroups(ThingGroupDocument&& value) { m_thingGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ThingDocument> m_things;

    Aws::Vector<ThingGroupDocument> m_thingGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
