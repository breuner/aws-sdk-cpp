﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Schemas
{
namespace Model
{
  class UpdateDiscovererResult
  {
  public:
    AWS_SCHEMAS_API UpdateDiscovererResult();
    AWS_SCHEMAS_API UpdateDiscovererResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API UpdateDiscovererResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the discoverer.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateDiscovererResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDiscovererResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDiscovererResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererArn() const{ return m_discovererArn; }
    inline void SetDiscovererArn(const Aws::String& value) { m_discovererArn = value; }
    inline void SetDiscovererArn(Aws::String&& value) { m_discovererArn = std::move(value); }
    inline void SetDiscovererArn(const char* value) { m_discovererArn.assign(value); }
    inline UpdateDiscovererResult& WithDiscovererArn(const Aws::String& value) { SetDiscovererArn(value); return *this;}
    inline UpdateDiscovererResult& WithDiscovererArn(Aws::String&& value) { SetDiscovererArn(std::move(value)); return *this;}
    inline UpdateDiscovererResult& WithDiscovererArn(const char* value) { SetDiscovererArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const{ return m_discovererId; }
    inline void SetDiscovererId(const Aws::String& value) { m_discovererId = value; }
    inline void SetDiscovererId(Aws::String&& value) { m_discovererId = std::move(value); }
    inline void SetDiscovererId(const char* value) { m_discovererId.assign(value); }
    inline UpdateDiscovererResult& WithDiscovererId(const Aws::String& value) { SetDiscovererId(value); return *this;}
    inline UpdateDiscovererResult& WithDiscovererId(Aws::String&& value) { SetDiscovererId(std::move(value)); return *this;}
    inline UpdateDiscovererResult& WithDiscovererId(const char* value) { SetDiscovererId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the event bus.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline UpdateDiscovererResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline UpdateDiscovererResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline UpdateDiscovererResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the discoverer.</p>
     */
    inline const DiscovererState& GetState() const{ return m_state; }
    inline void SetState(const DiscovererState& value) { m_state = value; }
    inline void SetState(DiscovererState&& value) { m_state = std::move(value); }
    inline UpdateDiscovererResult& WithState(const DiscovererState& value) { SetState(value); return *this;}
    inline UpdateDiscovererResult& WithState(DiscovererState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline bool GetCrossAccount() const{ return m_crossAccount; }
    inline void SetCrossAccount(bool value) { m_crossAccount = value; }
    inline UpdateDiscovererResult& WithCrossAccount(bool value) { SetCrossAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateDiscovererResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateDiscovererResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateDiscovererResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateDiscovererResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateDiscovererResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateDiscovererResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateDiscovererResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateDiscovererResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateDiscovererResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDiscovererResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDiscovererResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDiscovererResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_description;

    Aws::String m_discovererArn;

    Aws::String m_discovererId;

    Aws::String m_sourceArn;

    DiscovererState m_state;

    bool m_crossAccount;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
