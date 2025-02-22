﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/CustomResponseBody.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class UpdateRuleGroupRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API UpdateRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleGroup"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateRuleGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRuleGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRuleGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is for a global resource type, such as a Amazon
     * CloudFront distribution. </p> <p>To work with CloudFront, you must also specify
     * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline UpdateRuleGroupRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline UpdateRuleGroupRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateRuleGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateRuleGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateRuleGroupRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the rule group that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateRuleGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateRuleGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateRuleGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * manage. Each rule includes one top-level statement that WAF uses to identify
     * matching web requests, and parameters that govern how WAF handles them. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline UpdateRuleGroupRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}
    inline UpdateRuleGroupRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline UpdateRuleGroupRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline UpdateRuleGroupRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const{ return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    inline void SetVisibilityConfig(const VisibilityConfig& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }
    inline void SetVisibilityConfig(VisibilityConfig&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }
    inline UpdateRuleGroupRequest& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}
    inline UpdateRuleGroupRequest& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }
    inline UpdateRuleGroupRequest& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}
    inline UpdateRuleGroupRequest& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}
    inline UpdateRuleGroupRequest& WithLockToken(const char* value) { SetLockToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the rule group, and then use them in the rules that you define in the
     * rule group. </p> <p>For information about customizing web requests and
     * responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide</i>. </p>
     * <p>For information about the limits on count and size for custom request and
     * response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::Map<Aws::String, CustomResponseBody>& GetCustomResponseBodies() const{ return m_customResponseBodies; }
    inline bool CustomResponseBodiesHasBeenSet() const { return m_customResponseBodiesHasBeenSet; }
    inline void SetCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = value; }
    inline void SetCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = std::move(value); }
    inline UpdateRuleGroupRequest& WithCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { SetCustomResponseBodies(value); return *this;}
    inline UpdateRuleGroupRequest& WithCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { SetCustomResponseBodies(std::move(value)); return *this;}
    inline UpdateRuleGroupRequest& AddCustomResponseBodies(const Aws::String& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }
    inline UpdateRuleGroupRequest& AddCustomResponseBodies(Aws::String&& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), value); return *this; }
    inline UpdateRuleGroupRequest& AddCustomResponseBodies(const Aws::String& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }
    inline UpdateRuleGroupRequest& AddCustomResponseBodies(Aws::String&& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateRuleGroupRequest& AddCustomResponseBodies(const char* key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }
    inline UpdateRuleGroupRequest& AddCustomResponseBodies(const char* key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;

    Aws::Map<Aws::String, CustomResponseBody> m_customResponseBodies;
    bool m_customResponseBodiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
