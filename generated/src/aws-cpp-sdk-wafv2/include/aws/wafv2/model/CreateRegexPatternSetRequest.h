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
#include <aws/wafv2/model/Regex.h>
#include <aws/wafv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class CreateRegexPatternSetRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API CreateRegexPatternSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRegexPatternSet"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the set. You cannot change the name after you create the set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRegexPatternSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRegexPatternSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRegexPatternSetRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateRegexPatternSetRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline CreateRegexPatternSetRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateRegexPatternSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateRegexPatternSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateRegexPatternSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of regular expression strings. </p>
     */
    inline const Aws::Vector<Regex>& GetRegularExpressionList() const{ return m_regularExpressionList; }
    inline bool RegularExpressionListHasBeenSet() const { return m_regularExpressionListHasBeenSet; }
    inline void SetRegularExpressionList(const Aws::Vector<Regex>& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = value; }
    inline void SetRegularExpressionList(Aws::Vector<Regex>&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = std::move(value); }
    inline CreateRegexPatternSetRequest& WithRegularExpressionList(const Aws::Vector<Regex>& value) { SetRegularExpressionList(value); return *this;}
    inline CreateRegexPatternSetRequest& WithRegularExpressionList(Aws::Vector<Regex>&& value) { SetRegularExpressionList(std::move(value)); return *this;}
    inline CreateRegexPatternSetRequest& AddRegularExpressionList(const Regex& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(value); return *this; }
    inline CreateRegexPatternSetRequest& AddRegularExpressionList(Regex&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRegexPatternSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRegexPatternSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRegexPatternSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRegexPatternSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Regex> m_regularExpressionList;
    bool m_regularExpressionListHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
