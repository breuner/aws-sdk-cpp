﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotValueElicitationSetting.h>
#include <aws/lexv2-models/model/ObfuscationSetting.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/MultipleValuesSetting.h>
#include <aws/lexv2-models/model/SubSlotSetting.h>
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
  class CreateSlotResult
  {
  public:
    AWS_LEXMODELSV2_API CreateSlotResult();
    AWS_LEXMODELSV2_API CreateSlotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateSlotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier associated with the slot. Use this to identify the slot
     * when you update or delete it.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }
    inline void SetSlotId(const Aws::String& value) { m_slotId = value; }
    inline void SetSlotId(Aws::String&& value) { m_slotId = std::move(value); }
    inline void SetSlotId(const char* value) { m_slotId.assign(value); }
    inline CreateSlotResult& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}
    inline CreateSlotResult& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}
    inline CreateSlotResult& WithSlotId(const char* value) { SetSlotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name specified for the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }
    inline void SetSlotName(const Aws::String& value) { m_slotName = value; }
    inline void SetSlotName(Aws::String&& value) { m_slotName = std::move(value); }
    inline void SetSlotName(const char* value) { m_slotName.assign(value); }
    inline CreateSlotResult& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}
    inline CreateSlotResult& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}
    inline CreateSlotResult& WithSlotName(const char* value) { SetSlotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description associated with the slot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSlotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSlotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSlotResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the slot type associated with this slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeId = value; }
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeId = std::move(value); }
    inline void SetSlotTypeId(const char* value) { m_slotTypeId.assign(value); }
    inline CreateSlotResult& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}
    inline CreateSlotResult& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}
    inline CreateSlotResult& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value elicitation settings specified for the slot.</p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const{ return m_valueElicitationSetting; }
    inline void SetValueElicitationSetting(const SlotValueElicitationSetting& value) { m_valueElicitationSetting = value; }
    inline void SetValueElicitationSetting(SlotValueElicitationSetting&& value) { m_valueElicitationSetting = std::move(value); }
    inline CreateSlotResult& WithValueElicitationSetting(const SlotValueElicitationSetting& value) { SetValueElicitationSetting(value); return *this;}
    inline CreateSlotResult& WithValueElicitationSetting(SlotValueElicitationSetting&& value) { SetValueElicitationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the slot is configured to obfuscate values in Amazon
     * CloudWatch logs.</p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const{ return m_obfuscationSetting; }
    inline void SetObfuscationSetting(const ObfuscationSetting& value) { m_obfuscationSetting = value; }
    inline void SetObfuscationSetting(ObfuscationSetting&& value) { m_obfuscationSetting = std::move(value); }
    inline CreateSlotResult& WithObfuscationSetting(const ObfuscationSetting& value) { SetObfuscationSetting(value); return *this;}
    inline CreateSlotResult& WithObfuscationSetting(ObfuscationSetting&& value) { SetObfuscationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline CreateSlotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline CreateSlotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline CreateSlotResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline CreateSlotResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline CreateSlotResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline CreateSlotResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and local specified for the slot.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline CreateSlotResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline CreateSlotResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline CreateSlotResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the intent associated with the slot.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }
    inline CreateSlotResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}
    inline CreateSlotResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}
    inline CreateSlotResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the date and time that the slot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline CreateSlotResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline CreateSlotResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the slot returns multiple values in one response.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const{ return m_multipleValuesSetting; }
    inline void SetMultipleValuesSetting(const MultipleValuesSetting& value) { m_multipleValuesSetting = value; }
    inline void SetMultipleValuesSetting(MultipleValuesSetting&& value) { m_multipleValuesSetting = std::move(value); }
    inline CreateSlotResult& WithMultipleValuesSetting(const MultipleValuesSetting& value) { SetMultipleValuesSetting(value); return *this;}
    inline CreateSlotResult& WithMultipleValuesSetting(MultipleValuesSetting&& value) { SetMultipleValuesSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline const SubSlotSetting& GetSubSlotSetting() const{ return m_subSlotSetting; }
    inline void SetSubSlotSetting(const SubSlotSetting& value) { m_subSlotSetting = value; }
    inline void SetSubSlotSetting(SubSlotSetting&& value) { m_subSlotSetting = std::move(value); }
    inline CreateSlotResult& WithSubSlotSetting(const SubSlotSetting& value) { SetSubSlotSetting(value); return *this;}
    inline CreateSlotResult& WithSubSlotSetting(SubSlotSetting&& value) { SetSubSlotSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSlotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSlotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSlotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_slotId;

    Aws::String m_slotName;

    Aws::String m_description;

    Aws::String m_slotTypeId;

    SlotValueElicitationSetting m_valueElicitationSetting;

    ObfuscationSetting m_obfuscationSetting;

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_intentId;

    Aws::Utils::DateTime m_creationDateTime;

    MultipleValuesSetting m_multipleValuesSetting;

    SubSlotSetting m_subSlotSetting;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
