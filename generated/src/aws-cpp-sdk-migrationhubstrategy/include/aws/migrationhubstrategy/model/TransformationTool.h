﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/TransformationToolName.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Information of the transformation tool that can be used to migrate and
   * modernize the application. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/TransformationTool">AWS
   * API Reference</a></p>
   */
  class TransformationTool
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TransformationTool();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TransformationTool(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TransformationTool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Description of the tool. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TransformationTool& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TransformationTool& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TransformationTool& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the tool. </p>
     */
    inline const TransformationToolName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const TransformationToolName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(TransformationToolName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline TransformationTool& WithName(const TransformationToolName& value) { SetName(value); return *this;}
    inline TransformationTool& WithName(TransformationToolName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> URL for installing the tool. </p>
     */
    inline const Aws::String& GetTranformationToolInstallationLink() const{ return m_tranformationToolInstallationLink; }
    inline bool TranformationToolInstallationLinkHasBeenSet() const { return m_tranformationToolInstallationLinkHasBeenSet; }
    inline void SetTranformationToolInstallationLink(const Aws::String& value) { m_tranformationToolInstallationLinkHasBeenSet = true; m_tranformationToolInstallationLink = value; }
    inline void SetTranformationToolInstallationLink(Aws::String&& value) { m_tranformationToolInstallationLinkHasBeenSet = true; m_tranformationToolInstallationLink = std::move(value); }
    inline void SetTranformationToolInstallationLink(const char* value) { m_tranformationToolInstallationLinkHasBeenSet = true; m_tranformationToolInstallationLink.assign(value); }
    inline TransformationTool& WithTranformationToolInstallationLink(const Aws::String& value) { SetTranformationToolInstallationLink(value); return *this;}
    inline TransformationTool& WithTranformationToolInstallationLink(Aws::String&& value) { SetTranformationToolInstallationLink(std::move(value)); return *this;}
    inline TransformationTool& WithTranformationToolInstallationLink(const char* value) { SetTranformationToolInstallationLink(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TransformationToolName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_tranformationToolInstallationLink;
    bool m_tranformationToolInstallationLinkHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
