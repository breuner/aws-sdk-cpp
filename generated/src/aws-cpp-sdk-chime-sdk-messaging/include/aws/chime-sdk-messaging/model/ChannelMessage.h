﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/chime-sdk-messaging/model/ChannelMessagePersistenceType.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageStatusStructure.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/MessageAttributeValue.h>
#include <aws/chime-sdk-messaging/model/Target.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The details of a message in a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMessage">AWS
   * API Reference</a></p>
   */
  class ChannelMessage
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMessage();
    AWS_CHIMESDKMESSAGING_API ChannelMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline ChannelMessage& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ChannelMessage& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ChannelMessage& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline ChannelMessage& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline ChannelMessage& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline ChannelMessage& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the channel message. For Amazon Lex V2 bot responses, this
     * field holds a list of messages originating from the bot. For more information,
     * refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline ChannelMessage& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline ChannelMessage& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline ChannelMessage& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message metadata.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline ChannelMessage& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline ChannelMessage& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline ChannelMessage& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message type.</p>
     */
    inline const ChannelMessageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChannelMessageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChannelMessageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ChannelMessage& WithType(const ChannelMessageType& value) { SetType(value); return *this;}
    inline ChannelMessage& WithType(ChannelMessageType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the message was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ChannelMessage& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ChannelMessage& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEditedTimestamp() const{ return m_lastEditedTimestamp; }
    inline bool LastEditedTimestampHasBeenSet() const { return m_lastEditedTimestampHasBeenSet; }
    inline void SetLastEditedTimestamp(const Aws::Utils::DateTime& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = value; }
    inline void SetLastEditedTimestamp(Aws::Utils::DateTime&& value) { m_lastEditedTimestampHasBeenSet = true; m_lastEditedTimestamp = std::move(value); }
    inline ChannelMessage& WithLastEditedTimestamp(const Aws::Utils::DateTime& value) { SetLastEditedTimestamp(value); return *this;}
    inline ChannelMessage& WithLastEditedTimestamp(Aws::Utils::DateTime&& value) { SetLastEditedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a message was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline ChannelMessage& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline ChannelMessage& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message sender.</p>
     */
    inline const Identity& GetSender() const{ return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    inline void SetSender(const Identity& value) { m_senderHasBeenSet = true; m_sender = value; }
    inline void SetSender(Identity&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }
    inline ChannelMessage& WithSender(const Identity& value) { SetSender(value); return *this;}
    inline ChannelMessage& WithSender(Identity&& value) { SetSender(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hides the content of a message.</p>
     */
    inline bool GetRedacted() const{ return m_redacted; }
    inline bool RedactedHasBeenSet() const { return m_redactedHasBeenSet; }
    inline void SetRedacted(bool value) { m_redactedHasBeenSet = true; m_redacted = value; }
    inline ChannelMessage& WithRedacted(bool value) { SetRedacted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The persistence setting for a channel message.</p>
     */
    inline const ChannelMessagePersistenceType& GetPersistence() const{ return m_persistence; }
    inline bool PersistenceHasBeenSet() const { return m_persistenceHasBeenSet; }
    inline void SetPersistence(const ChannelMessagePersistenceType& value) { m_persistenceHasBeenSet = true; m_persistence = value; }
    inline void SetPersistence(ChannelMessagePersistenceType&& value) { m_persistenceHasBeenSet = true; m_persistence = std::move(value); }
    inline ChannelMessage& WithPersistence(const ChannelMessagePersistenceType& value) { SetPersistence(value); return *this;}
    inline ChannelMessage& WithPersistence(ChannelMessagePersistenceType&& value) { SetPersistence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the channel message.</p>
     */
    inline const ChannelMessageStatusStructure& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChannelMessageStatusStructure& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChannelMessageStatusStructure&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ChannelMessage& WithStatus(const ChannelMessageStatusStructure& value) { SetStatus(value); return *this;}
    inline ChannelMessage& WithStatus(ChannelMessageStatusStructure&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for the channel message. For Amazon Lex V2 bot responses, the
     * attributes are mapped to specific fields from the bot. For more information,
     * refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }
    inline ChannelMessage& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}
    inline ChannelMessage& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}
    inline ChannelMessage& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }
    inline ChannelMessage& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }
    inline ChannelMessage& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }
    inline ChannelMessage& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ChannelMessage& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }
    inline ChannelMessage& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }
    inline ChannelMessage& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}
    inline ChannelMessage& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}
    inline ChannelMessage& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the channel message. For Amazon Lex V2 bot responses, the
     * content type is <code>application/amz-chime-lex-msgs</code> for success
     * responses and <code>application/amz-chime-lex-error</code> for failure
     * responses. For more information, refer to <a
     * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/appinstance-bots#process-response.html">Processing
     * responses from an AppInstanceBot</a> in the <i>Amazon Chime SDK Messaging
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline ChannelMessage& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline ChannelMessage& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline ChannelMessage& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of a message, a sender, a user, or a bot. Only the target and the
     * sender can view targeted messages. Only users who can see targeted messages can
     * take actions on them. However, administrators can delete targeted messages that
     * they can’t see.</p>
     */
    inline const Aws::Vector<Target>& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::Vector<Target>& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::Vector<Target>&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline ChannelMessage& WithTarget(const Aws::Vector<Target>& value) { SetTarget(value); return *this;}
    inline ChannelMessage& WithTarget(Aws::Vector<Target>&& value) { SetTarget(std::move(value)); return *this;}
    inline ChannelMessage& AddTarget(const Target& value) { m_targetHasBeenSet = true; m_target.push_back(value); return *this; }
    inline ChannelMessage& AddTarget(Target&& value) { m_targetHasBeenSet = true; m_target.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    ChannelMessageType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastEditedTimestamp;
    bool m_lastEditedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Identity m_sender;
    bool m_senderHasBeenSet = false;

    bool m_redacted;
    bool m_redactedHasBeenSet = false;

    ChannelMessagePersistenceType m_persistence;
    bool m_persistenceHasBeenSet = false;

    ChannelMessageStatusStructure m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Vector<Target> m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
