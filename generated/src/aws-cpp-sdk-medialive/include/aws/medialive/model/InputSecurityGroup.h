﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputSecurityGroupState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/InputWhitelistRule.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * An Input Security Group<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSecurityGroup">AWS
   * API Reference</a></p>
   */
  class InputSecurityGroup
  {
  public:
    AWS_MEDIALIVE_API InputSecurityGroup();
    AWS_MEDIALIVE_API InputSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Unique ARN of Input Security Group
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline InputSecurityGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline InputSecurityGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline InputSecurityGroup& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The Id of the Input Security Group
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline InputSecurityGroup& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline InputSecurityGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline InputSecurityGroup& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The list of inputs currently using this Input Security Group.
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline InputSecurityGroup& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline InputSecurityGroup& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline InputSecurityGroup& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline InputSecurityGroup& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline InputSecurityGroup& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the Input Security Group.
     */
    inline const InputSecurityGroupState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InputSecurityGroupState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InputSecurityGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InputSecurityGroup& WithState(const InputSecurityGroupState& value) { SetState(value); return *this;}
    inline InputSecurityGroup& WithState(InputSecurityGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InputSecurityGroup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline InputSecurityGroup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline InputSecurityGroup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline InputSecurityGroup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InputSecurityGroup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InputSecurityGroup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline InputSecurityGroup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InputSecurityGroup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InputSecurityGroup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Whitelist rules and their sync status
     */
    inline const Aws::Vector<InputWhitelistRule>& GetWhitelistRules() const{ return m_whitelistRules; }
    inline bool WhitelistRulesHasBeenSet() const { return m_whitelistRulesHasBeenSet; }
    inline void SetWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules = value; }
    inline void SetWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules = std::move(value); }
    inline InputSecurityGroup& WithWhitelistRules(const Aws::Vector<InputWhitelistRule>& value) { SetWhitelistRules(value); return *this;}
    inline InputSecurityGroup& WithWhitelistRules(Aws::Vector<InputWhitelistRule>&& value) { SetWhitelistRules(std::move(value)); return *this;}
    inline InputSecurityGroup& AddWhitelistRules(const InputWhitelistRule& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.push_back(value); return *this; }
    inline InputSecurityGroup& AddWhitelistRules(InputWhitelistRule&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    InputSecurityGroupState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<InputWhitelistRule> m_whitelistRules;
    bool m_whitelistRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
