﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/StepInput.h>
#include <utility>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   */
  class UpdateWorkflowRequest : public MigrationHubOrchestratorRequest
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkflow"; }

    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateWorkflowRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateWorkflowRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateWorkflowRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the migration workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the migration workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input parameters required to update a migration workflow.</p>
     */
    inline const Aws::Map<Aws::String, StepInput>& GetInputParameters() const{ return m_inputParameters; }
    inline bool InputParametersHasBeenSet() const { return m_inputParametersHasBeenSet; }
    inline void SetInputParameters(const Aws::Map<Aws::String, StepInput>& value) { m_inputParametersHasBeenSet = true; m_inputParameters = value; }
    inline void SetInputParameters(Aws::Map<Aws::String, StepInput>&& value) { m_inputParametersHasBeenSet = true; m_inputParameters = std::move(value); }
    inline UpdateWorkflowRequest& WithInputParameters(const Aws::Map<Aws::String, StepInput>& value) { SetInputParameters(value); return *this;}
    inline UpdateWorkflowRequest& WithInputParameters(Aws::Map<Aws::String, StepInput>&& value) { SetInputParameters(std::move(value)); return *this;}
    inline UpdateWorkflowRequest& AddInputParameters(const Aws::String& key, const StepInput& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, value); return *this; }
    inline UpdateWorkflowRequest& AddInputParameters(Aws::String&& key, const StepInput& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(std::move(key), value); return *this; }
    inline UpdateWorkflowRequest& AddInputParameters(const Aws::String& key, StepInput&& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateWorkflowRequest& AddInputParameters(Aws::String&& key, StepInput&& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateWorkflowRequest& AddInputParameters(const char* key, StepInput&& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateWorkflowRequest& AddInputParameters(const char* key, const StepInput& value) { m_inputParametersHasBeenSet = true; m_inputParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The servers on which a step will be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepTargets() const{ return m_stepTargets; }
    inline bool StepTargetsHasBeenSet() const { return m_stepTargetsHasBeenSet; }
    inline void SetStepTargets(const Aws::Vector<Aws::String>& value) { m_stepTargetsHasBeenSet = true; m_stepTargets = value; }
    inline void SetStepTargets(Aws::Vector<Aws::String>&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets = std::move(value); }
    inline UpdateWorkflowRequest& WithStepTargets(const Aws::Vector<Aws::String>& value) { SetStepTargets(value); return *this;}
    inline UpdateWorkflowRequest& WithStepTargets(Aws::Vector<Aws::String>&& value) { SetStepTargets(std::move(value)); return *this;}
    inline UpdateWorkflowRequest& AddStepTargets(const Aws::String& value) { m_stepTargetsHasBeenSet = true; m_stepTargets.push_back(value); return *this; }
    inline UpdateWorkflowRequest& AddStepTargets(Aws::String&& value) { m_stepTargetsHasBeenSet = true; m_stepTargets.push_back(std::move(value)); return *this; }
    inline UpdateWorkflowRequest& AddStepTargets(const char* value) { m_stepTargetsHasBeenSet = true; m_stepTargets.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, StepInput> m_inputParameters;
    bool m_inputParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_stepTargets;
    bool m_stepTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
