﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ResourceType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Specifies whether the configuration recorder excludes certain resource types
   * from being recorded. Use the <code>resourceTypes</code> field to enter a
   * comma-separated list of resource types you want to exclude from recording.</p>
   * <p>By default, when Config adds support for a new resource type in the Region
   * where you set up the configuration recorder, including global resource types,
   * Config starts recording resources of that type automatically.</p>  <p>
   * <b>How to use the exclusion recording strategy </b> </p> <p>To use this option,
   * you must set the <code>useOnly</code> field of <a
   * href="https://docs.aws.amazon.com/config/latest/APIReference/API_RecordingStrategy.html">RecordingStrategy</a>
   * to <code>EXCLUSION_BY_RESOURCE_TYPES</code>.</p> <p>Config will then record
   * configuration changes for all supported resource types, except the resource
   * types that you specify to exclude from being recorded.</p> <p> <b>Global
   * resource types and the exclusion recording strategy </b> </p> <p>Unless
   * specifically listed as exclusions, <code>AWS::RDS::GlobalCluster</code> will be
   * recorded automatically in all supported Config Regions were the configuration
   * recorder is enabled.</p> <p>IAM users, groups, roles, and customer managed
   * policies will be recorded in the Region where you set up the configuration
   * recorder if that is a Region where Config was available before February 2022.
   * You cannot be record the global IAM resouce types in Regions supported by Config
   * after February 2022. For a list of those Regions, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/select-resources.html#select-resources-all">Recording
   * Amazon Web Services Resources | Global Resources</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ExclusionByResourceTypes">AWS
   * API Reference</a></p>
   */
  class ExclusionByResourceTypes
  {
  public:
    AWS_CONFIGSERVICE_API ExclusionByResourceTypes() = default;
    AWS_CONFIGSERVICE_API ExclusionByResourceTypes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ExclusionByResourceTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A comma-separated list of resource types to exclude from recording by the
     * configuration recorder.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    ExclusionByResourceTypes& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline ExclusionByResourceTypes& AddResourceTypes(ResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
