﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/WorkflowDefinitionSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecatalyst/model/WorkflowRunMode.h>
#include <aws/codecatalyst/model/WorkflowStatus.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/WorkflowSummary">AWS
   * API Reference</a></p>
   */
  class WorkflowSummary
  {
  public:
    AWS_CODECATALYST_API WorkflowSummary();
    AWS_CODECATALYST_API WorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API WorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated unique ID of a workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WorkflowSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WorkflowSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WorkflowSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkflowSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source repository where the workflow definition file is
     * stored.</p>
     */
    inline const Aws::String& GetSourceRepositoryName() const{ return m_sourceRepositoryName; }
    inline bool SourceRepositoryNameHasBeenSet() const { return m_sourceRepositoryNameHasBeenSet; }
    inline void SetSourceRepositoryName(const Aws::String& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = value; }
    inline void SetSourceRepositoryName(Aws::String&& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = std::move(value); }
    inline void SetSourceRepositoryName(const char* value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName.assign(value); }
    inline WorkflowSummary& WithSourceRepositoryName(const Aws::String& value) { SetSourceRepositoryName(value); return *this;}
    inline WorkflowSummary& WithSourceRepositoryName(Aws::String&& value) { SetSourceRepositoryName(std::move(value)); return *this;}
    inline WorkflowSummary& WithSourceRepositoryName(const char* value) { SetSourceRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch of the source repository where the workflow definition
     * file is stored.</p>
     */
    inline const Aws::String& GetSourceBranchName() const{ return m_sourceBranchName; }
    inline bool SourceBranchNameHasBeenSet() const { return m_sourceBranchNameHasBeenSet; }
    inline void SetSourceBranchName(const Aws::String& value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName = value; }
    inline void SetSourceBranchName(Aws::String&& value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName = std::move(value); }
    inline void SetSourceBranchName(const char* value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName.assign(value); }
    inline WorkflowSummary& WithSourceBranchName(const Aws::String& value) { SetSourceBranchName(value); return *this;}
    inline WorkflowSummary& WithSourceBranchName(Aws::String&& value) { SetSourceBranchName(std::move(value)); return *this;}
    inline WorkflowSummary& WithSourceBranchName(const char* value) { SetSourceBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the workflow definition file.</p>
     */
    inline const WorkflowDefinitionSummary& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const WorkflowDefinitionSummary& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(WorkflowDefinitionSummary&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline WorkflowSummary& WithDefinition(const WorkflowDefinitionSummary& value) { SetDefinition(value); return *this;}
    inline WorkflowSummary& WithDefinition(WorkflowDefinitionSummary&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline WorkflowSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline WorkflowSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline WorkflowSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline WorkflowSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run mode of the workflow.</p>
     */
    inline const WorkflowRunMode& GetRunMode() const{ return m_runMode; }
    inline bool RunModeHasBeenSet() const { return m_runModeHasBeenSet; }
    inline void SetRunMode(const WorkflowRunMode& value) { m_runModeHasBeenSet = true; m_runMode = value; }
    inline void SetRunMode(WorkflowRunMode&& value) { m_runModeHasBeenSet = true; m_runMode = std::move(value); }
    inline WorkflowSummary& WithRunMode(const WorkflowRunMode& value) { SetRunMode(value); return *this;}
    inline WorkflowSummary& WithRunMode(WorkflowRunMode&& value) { SetRunMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the workflow.</p>
     */
    inline const WorkflowStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkflowStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkflowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkflowSummary& WithStatus(const WorkflowStatus& value) { SetStatus(value); return *this;}
    inline WorkflowSummary& WithStatus(WorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceRepositoryName;
    bool m_sourceRepositoryNameHasBeenSet = false;

    Aws::String m_sourceBranchName;
    bool m_sourceBranchNameHasBeenSet = false;

    WorkflowDefinitionSummary m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    WorkflowRunMode m_runMode;
    bool m_runModeHasBeenSet = false;

    WorkflowStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
