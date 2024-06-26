﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/ConversationLogSettings.h>
#include <aws/lexv2-models/model/SentimentAnalysisSettings.h>
#include <aws/lexv2-models/model/BotAliasStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotAliasLocaleSettings.h>
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
namespace LexModelsV2
{
namespace Model
{
  class CreateBotAliasResult
  {
  public:
    AWS_LEXMODELSV2_API CreateBotAliasResult();
    AWS_LEXMODELSV2_API CreateBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasId = value; }
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasId = std::move(value); }
    inline void SetBotAliasId(const char* value) { m_botAliasId.assign(value); }
    inline CreateBotAliasResult& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}
    inline CreateBotAliasResult& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}
    inline CreateBotAliasResult& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name specified for the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const{ return m_botAliasName; }
    inline void SetBotAliasName(const Aws::String& value) { m_botAliasName = value; }
    inline void SetBotAliasName(Aws::String&& value) { m_botAliasName = std::move(value); }
    inline void SetBotAliasName(const char* value) { m_botAliasName.assign(value); }
    inline CreateBotAliasResult& WithBotAliasName(const Aws::String& value) { SetBotAliasName(value); return *this;}
    inline CreateBotAliasResult& WithBotAliasName(Aws::String&& value) { SetBotAliasName(std::move(value)); return *this;}
    inline CreateBotAliasResult& WithBotAliasName(const char* value) { SetBotAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description specified for the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateBotAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateBotAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateBotAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with this alias.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline CreateBotAliasResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline CreateBotAliasResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline CreateBotAliasResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for a specific locale.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const{ return m_botAliasLocaleSettings; }
    inline void SetBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { m_botAliasLocaleSettings = value; }
    inline void SetBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { m_botAliasLocaleSettings = std::move(value); }
    inline CreateBotAliasResult& WithBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { SetBotAliasLocaleSettings(value); return *this;}
    inline CreateBotAliasResult& WithBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { SetBotAliasLocaleSettings(std::move(value)); return *this;}
    inline CreateBotAliasResult& AddBotAliasLocaleSettings(const Aws::String& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(key, value); return *this; }
    inline CreateBotAliasResult& AddBotAliasLocaleSettings(Aws::String&& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(std::move(key), value); return *this; }
    inline CreateBotAliasResult& AddBotAliasLocaleSettings(const Aws::String& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }
    inline CreateBotAliasResult& AddBotAliasLocaleSettings(Aws::String&& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateBotAliasResult& AddBotAliasLocaleSettings(const char* key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }
    inline CreateBotAliasResult& AddBotAliasLocaleSettings(const char* key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conversation log settings specified for the alias.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const{ return m_conversationLogSettings; }
    inline void SetConversationLogSettings(const ConversationLogSettings& value) { m_conversationLogSettings = value; }
    inline void SetConversationLogSettings(ConversationLogSettings&& value) { m_conversationLogSettings = std::move(value); }
    inline CreateBotAliasResult& WithConversationLogSettings(const ConversationLogSettings& value) { SetConversationLogSettings(value); return *this;}
    inline CreateBotAliasResult& WithConversationLogSettings(ConversationLogSettings&& value) { SetConversationLogSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const{ return m_sentimentAnalysisSettings; }
    inline void SetSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { m_sentimentAnalysisSettings = value; }
    inline void SetSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { m_sentimentAnalysisSettings = std::move(value); }
    inline CreateBotAliasResult& WithSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { SetSentimentAnalysisSettings(value); return *this;}
    inline CreateBotAliasResult& WithSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { SetSentimentAnalysisSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the alias. The alias is first put into the
     * <code>Creating</code> state. When the alias is ready to be used, it is put into
     * the <code>Available</code> state. You can use the <code>DescribeBotAlias</code>
     * operation to get the current state of an alias.</p>
     */
    inline const BotAliasStatus& GetBotAliasStatus() const{ return m_botAliasStatus; }
    inline void SetBotAliasStatus(const BotAliasStatus& value) { m_botAliasStatus = value; }
    inline void SetBotAliasStatus(BotAliasStatus&& value) { m_botAliasStatus = std::move(value); }
    inline CreateBotAliasResult& WithBotAliasStatus(const BotAliasStatus& value) { SetBotAliasStatus(value); return *this;}
    inline CreateBotAliasResult& WithBotAliasStatus(BotAliasStatus&& value) { SetBotAliasStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot that this alias applies to.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline CreateBotAliasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline CreateBotAliasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline CreateBotAliasResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Unix timestamp indicating the date and time that the bot alias was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline CreateBotAliasResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline CreateBotAliasResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the bot alias.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateBotAliasResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateBotAliasResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateBotAliasResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateBotAliasResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateBotAliasResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateBotAliasResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateBotAliasResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateBotAliasResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateBotAliasResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBotAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBotAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBotAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botAliasId;

    Aws::String m_botAliasName;

    Aws::String m_description;

    Aws::String m_botVersion;

    Aws::Map<Aws::String, BotAliasLocaleSettings> m_botAliasLocaleSettings;

    ConversationLogSettings m_conversationLogSettings;

    SentimentAnalysisSettings m_sentimentAnalysisSettings;

    BotAliasStatus m_botAliasStatus;

    Aws::String m_botId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
