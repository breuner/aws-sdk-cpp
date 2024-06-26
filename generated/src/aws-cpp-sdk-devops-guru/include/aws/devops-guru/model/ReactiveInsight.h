﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/devops-guru/model/InsightStatus.h>
#include <aws/devops-guru/model/InsightTimeRange.h>
#include <aws/devops-guru/model/ResourceCollection.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about a reactive insight. This object is returned by
   * <code>ListInsights</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ReactiveInsight">AWS
   * API Reference</a></p>
   */
  class ReactiveInsight
  {
  public:
    AWS_DEVOPSGURU_API ReactiveInsight();
    AWS_DEVOPSGURU_API ReactiveInsight(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ReactiveInsight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of a reactive insight. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ReactiveInsight& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ReactiveInsight& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ReactiveInsight& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of a reactive insight. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ReactiveInsight& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReactiveInsight& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReactiveInsight& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline const InsightSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const InsightSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(InsightSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline ReactiveInsight& WithSeverity(const InsightSeverity& value) { SetSeverity(value); return *this;}
    inline ReactiveInsight& WithSeverity(InsightSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of a reactive insight. </p>
     */
    inline const InsightStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InsightStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InsightStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReactiveInsight& WithStatus(const InsightStatus& value) { SetStatus(value); return *this;}
    inline ReactiveInsight& WithStatus(InsightStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const InsightTimeRange& GetInsightTimeRange() const{ return m_insightTimeRange; }
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }
    inline void SetInsightTimeRange(const InsightTimeRange& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = value; }
    inline void SetInsightTimeRange(InsightTimeRange&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::move(value); }
    inline ReactiveInsight& WithInsightTimeRange(const InsightTimeRange& value) { SetInsightTimeRange(value); return *this;}
    inline ReactiveInsight& WithInsightTimeRange(InsightTimeRange&& value) { SetInsightTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }
    inline ReactiveInsight& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}
    inline ReactiveInsight& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline const Aws::String& GetSsmOpsItemId() const{ return m_ssmOpsItemId; }
    inline bool SsmOpsItemIdHasBeenSet() const { return m_ssmOpsItemIdHasBeenSet; }
    inline void SetSsmOpsItemId(const Aws::String& value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId = value; }
    inline void SetSsmOpsItemId(Aws::String&& value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId = std::move(value); }
    inline void SetSsmOpsItemId(const char* value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId.assign(value); }
    inline ReactiveInsight& WithSsmOpsItemId(const Aws::String& value) { SetSsmOpsItemId(value); return *this;}
    inline ReactiveInsight& WithSsmOpsItemId(Aws::String&& value) { SetSsmOpsItemId(std::move(value)); return *this;}
    inline ReactiveInsight& WithSsmOpsItemId(const char* value) { SetSsmOpsItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the reactive insight.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ReactiveInsight& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReactiveInsight& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReactiveInsight& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InsightSeverity m_severity;
    bool m_severityHasBeenSet = false;

    InsightStatus m_status;
    bool m_statusHasBeenSet = false;

    InsightTimeRange m_insightTimeRange;
    bool m_insightTimeRangeHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    Aws::String m_ssmOpsItemId;
    bool m_ssmOpsItemIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
