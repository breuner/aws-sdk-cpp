﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/FeatureEvaluationStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/VariationConfig.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class CreateFeatureRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateFeatureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the variation to use as the default variation. The default
     * variation is served to users who are not allocated to any ongoing launches or
     * experiments of this feature.</p> <p>This variation must also be listed in the
     * <code>variations</code> structure.</p> <p>If you omit
     * <code>defaultVariation</code>, the first variation listed in the
     * <code>variations</code> structure is used as the default variation.</p>
     */
    inline const Aws::String& GetDefaultVariation() const{ return m_defaultVariation; }
    inline bool DefaultVariationHasBeenSet() const { return m_defaultVariationHasBeenSet; }
    inline void SetDefaultVariation(const Aws::String& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = value; }
    inline void SetDefaultVariation(Aws::String&& value) { m_defaultVariationHasBeenSet = true; m_defaultVariation = std::move(value); }
    inline void SetDefaultVariation(const char* value) { m_defaultVariationHasBeenSet = true; m_defaultVariation.assign(value); }
    inline CreateFeatureRequest& WithDefaultVariation(const Aws::String& value) { SetDefaultVariation(value); return *this;}
    inline CreateFeatureRequest& WithDefaultVariation(Aws::String&& value) { SetDefaultVariation(std::move(value)); return *this;}
    inline CreateFeatureRequest& WithDefaultVariation(const char* value) { SetDefaultVariation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the feature.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateFeatureRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFeatureRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFeatureRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify users that should always be served a specific variation of a feature.
     * Each user is specified by a key-value pair . For each key, specify a user by
     * entering their user ID, account ID, or some other identifier. For the value,
     * specify the name of the variation that they are to be served.</p> <p>This
     * parameter is limited to 2500 overrides or a total of 40KB. The 40KB limit
     * includes an overhead of 6 bytes per override.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEntityOverrides() const{ return m_entityOverrides; }
    inline bool EntityOverridesHasBeenSet() const { return m_entityOverridesHasBeenSet; }
    inline void SetEntityOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides = value; }
    inline void SetEntityOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides = std::move(value); }
    inline CreateFeatureRequest& WithEntityOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetEntityOverrides(value); return *this;}
    inline CreateFeatureRequest& WithEntityOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetEntityOverrides(std::move(value)); return *this;}
    inline CreateFeatureRequest& AddEntityOverrides(const Aws::String& key, const Aws::String& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, value); return *this; }
    inline CreateFeatureRequest& AddEntityOverrides(Aws::String&& key, const Aws::String& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::move(key), value); return *this; }
    inline CreateFeatureRequest& AddEntityOverrides(const Aws::String& key, Aws::String&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, std::move(value)); return *this; }
    inline CreateFeatureRequest& AddEntityOverrides(Aws::String&& key, Aws::String&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateFeatureRequest& AddEntityOverrides(const char* key, Aws::String&& value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, std::move(value)); return *this; }
    inline CreateFeatureRequest& AddEntityOverrides(Aws::String&& key, const char* value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(std::move(key), value); return *this; }
    inline CreateFeatureRequest& AddEntityOverrides(const char* key, const char* value) { m_entityOverridesHasBeenSet = true; m_entityOverrides.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify <code>ALL_RULES</code> to activate the traffic allocation specified
     * by any ongoing launches or experiments. Specify <code>DEFAULT_VARIATION</code>
     * to serve the default variation to all users instead.</p>
     */
    inline const FeatureEvaluationStrategy& GetEvaluationStrategy() const{ return m_evaluationStrategy; }
    inline bool EvaluationStrategyHasBeenSet() const { return m_evaluationStrategyHasBeenSet; }
    inline void SetEvaluationStrategy(const FeatureEvaluationStrategy& value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = value; }
    inline void SetEvaluationStrategy(FeatureEvaluationStrategy&& value) { m_evaluationStrategyHasBeenSet = true; m_evaluationStrategy = std::move(value); }
    inline CreateFeatureRequest& WithEvaluationStrategy(const FeatureEvaluationStrategy& value) { SetEvaluationStrategy(value); return *this;}
    inline CreateFeatureRequest& WithEvaluationStrategy(FeatureEvaluationStrategy&& value) { SetEvaluationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the new feature.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateFeatureRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFeatureRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFeatureRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that is to contain the new feature.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }
    inline CreateFeatureRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}
    inline CreateFeatureRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}
    inline CreateFeatureRequest& WithProject(const char* value) { SetProject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags (key-value pairs) to the feature.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <p>You can associate as many as 50 tags with a feature.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateFeatureRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateFeatureRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFeatureRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateFeatureRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateFeatureRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateFeatureRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateFeatureRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateFeatureRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateFeatureRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that contain the configuration of the feature's
     * different variations.</p>
     */
    inline const Aws::Vector<VariationConfig>& GetVariations() const{ return m_variations; }
    inline bool VariationsHasBeenSet() const { return m_variationsHasBeenSet; }
    inline void SetVariations(const Aws::Vector<VariationConfig>& value) { m_variationsHasBeenSet = true; m_variations = value; }
    inline void SetVariations(Aws::Vector<VariationConfig>&& value) { m_variationsHasBeenSet = true; m_variations = std::move(value); }
    inline CreateFeatureRequest& WithVariations(const Aws::Vector<VariationConfig>& value) { SetVariations(value); return *this;}
    inline CreateFeatureRequest& WithVariations(Aws::Vector<VariationConfig>&& value) { SetVariations(std::move(value)); return *this;}
    inline CreateFeatureRequest& AddVariations(const VariationConfig& value) { m_variationsHasBeenSet = true; m_variations.push_back(value); return *this; }
    inline CreateFeatureRequest& AddVariations(VariationConfig&& value) { m_variationsHasBeenSet = true; m_variations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_defaultVariation;
    bool m_defaultVariationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_entityOverrides;
    bool m_entityOverridesHasBeenSet = false;

    FeatureEvaluationStrategy m_evaluationStrategy;
    bool m_evaluationStrategyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<VariationConfig> m_variations;
    bool m_variationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
