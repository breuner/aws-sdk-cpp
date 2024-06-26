﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/RecommendationStatus.h>
#include <aws/resiliencehub/model/AlarmType.h>
#include <aws/resiliencehub/model/RecommendationItem.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a recommendation for a CloudWatch alarm.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AlarmRecommendation">AWS
   * API Reference</a></p>
   */
  class AlarmRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API AlarmRecommendation();
    AWS_RESILIENCEHUB_API AlarmRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AlarmRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of Application Component names for the CloudWatch alarm
     * recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppComponentNames() const{ return m_appComponentNames; }
    inline bool AppComponentNamesHasBeenSet() const { return m_appComponentNamesHasBeenSet; }
    inline void SetAppComponentNames(const Aws::Vector<Aws::String>& value) { m_appComponentNamesHasBeenSet = true; m_appComponentNames = value; }
    inline void SetAppComponentNames(Aws::Vector<Aws::String>&& value) { m_appComponentNamesHasBeenSet = true; m_appComponentNames = std::move(value); }
    inline AlarmRecommendation& WithAppComponentNames(const Aws::Vector<Aws::String>& value) { SetAppComponentNames(value); return *this;}
    inline AlarmRecommendation& WithAppComponentNames(Aws::Vector<Aws::String>&& value) { SetAppComponentNames(std::move(value)); return *this;}
    inline AlarmRecommendation& AddAppComponentNames(const Aws::String& value) { m_appComponentNamesHasBeenSet = true; m_appComponentNames.push_back(value); return *this; }
    inline AlarmRecommendation& AddAppComponentNames(Aws::String&& value) { m_appComponentNamesHasBeenSet = true; m_appComponentNames.push_back(std::move(value)); return *this; }
    inline AlarmRecommendation& AddAppComponentNames(const char* value) { m_appComponentNamesHasBeenSet = true; m_appComponentNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description of the alarm recommendation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AlarmRecommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AlarmRecommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AlarmRecommendation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of CloudWatch alarm recommendations.</p>
     */
    inline const Aws::Vector<RecommendationItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<RecommendationItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<RecommendationItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline AlarmRecommendation& WithItems(const Aws::Vector<RecommendationItem>& value) { SetItems(value); return *this;}
    inline AlarmRecommendation& WithItems(Aws::Vector<RecommendationItem>&& value) { SetItems(std::move(value)); return *this;}
    inline AlarmRecommendation& AddItems(const RecommendationItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline AlarmRecommendation& AddItems(RecommendationItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the alarm recommendation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AlarmRecommendation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AlarmRecommendation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AlarmRecommendation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prerequisite for the alarm recommendation.</p>
     */
    inline const Aws::String& GetPrerequisite() const{ return m_prerequisite; }
    inline bool PrerequisiteHasBeenSet() const { return m_prerequisiteHasBeenSet; }
    inline void SetPrerequisite(const Aws::String& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = value; }
    inline void SetPrerequisite(Aws::String&& value) { m_prerequisiteHasBeenSet = true; m_prerequisite = std::move(value); }
    inline void SetPrerequisite(const char* value) { m_prerequisiteHasBeenSet = true; m_prerequisite.assign(value); }
    inline AlarmRecommendation& WithPrerequisite(const Aws::String& value) { SetPrerequisite(value); return *this;}
    inline AlarmRecommendation& WithPrerequisite(Aws::String&& value) { SetPrerequisite(std::move(value)); return *this;}
    inline AlarmRecommendation& WithPrerequisite(const char* value) { SetPrerequisite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the alarm recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline AlarmRecommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline AlarmRecommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline AlarmRecommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the recommended Amazon CloudWatch alarm.</p>
     */
    inline const RecommendationStatus& GetRecommendationStatus() const{ return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(const RecommendationStatus& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline void SetRecommendationStatus(RecommendationStatus&& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = std::move(value); }
    inline AlarmRecommendation& WithRecommendationStatus(const RecommendationStatus& value) { SetRecommendationStatus(value); return *this;}
    inline AlarmRecommendation& WithRecommendationStatus(RecommendationStatus&& value) { SetRecommendationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the alarm recommendation.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }
    inline AlarmRecommendation& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}
    inline AlarmRecommendation& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}
    inline AlarmRecommendation& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of alarm recommendation.</p>
     */
    inline const AlarmType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AlarmType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AlarmType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AlarmRecommendation& WithType(const AlarmType& value) { SetType(value); return *this;}
    inline AlarmRecommendation& WithType(AlarmType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_appComponentNames;
    bool m_appComponentNamesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<RecommendationItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_prerequisite;
    bool m_prerequisiteHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    RecommendationStatus m_recommendationStatus;
    bool m_recommendationStatusHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    AlarmType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
