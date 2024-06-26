﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkSpaceAssociatedResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces/model/AssociationState.h>
#include <aws/workspaces/model/AssociationStateReason.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the association between an application and a WorkSpace
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceResourceAssociation">AWS
   * API Reference</a></p>
   */
  class WorkspaceResourceAssociation
  {
  public:
    AWS_WORKSPACES_API WorkspaceResourceAssociation();
    AWS_WORKSPACES_API WorkspaceResourceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceResourceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the associated resource.</p>
     */
    inline const Aws::String& GetAssociatedResourceId() const{ return m_associatedResourceId; }
    inline bool AssociatedResourceIdHasBeenSet() const { return m_associatedResourceIdHasBeenSet; }
    inline void SetAssociatedResourceId(const Aws::String& value) { m_associatedResourceIdHasBeenSet = true; m_associatedResourceId = value; }
    inline void SetAssociatedResourceId(Aws::String&& value) { m_associatedResourceIdHasBeenSet = true; m_associatedResourceId = std::move(value); }
    inline void SetAssociatedResourceId(const char* value) { m_associatedResourceIdHasBeenSet = true; m_associatedResourceId.assign(value); }
    inline WorkspaceResourceAssociation& WithAssociatedResourceId(const Aws::String& value) { SetAssociatedResourceId(value); return *this;}
    inline WorkspaceResourceAssociation& WithAssociatedResourceId(Aws::String&& value) { SetAssociatedResourceId(std::move(value)); return *this;}
    inline WorkspaceResourceAssociation& WithAssociatedResourceId(const char* value) { SetAssociatedResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline const WorkSpaceAssociatedResourceType& GetAssociatedResourceType() const{ return m_associatedResourceType; }
    inline bool AssociatedResourceTypeHasBeenSet() const { return m_associatedResourceTypeHasBeenSet; }
    inline void SetAssociatedResourceType(const WorkSpaceAssociatedResourceType& value) { m_associatedResourceTypeHasBeenSet = true; m_associatedResourceType = value; }
    inline void SetAssociatedResourceType(WorkSpaceAssociatedResourceType&& value) { m_associatedResourceTypeHasBeenSet = true; m_associatedResourceType = std::move(value); }
    inline WorkspaceResourceAssociation& WithAssociatedResourceType(const WorkSpaceAssociatedResourceType& value) { SetAssociatedResourceType(value); return *this;}
    inline WorkspaceResourceAssociation& WithAssociatedResourceType(WorkSpaceAssociatedResourceType&& value) { SetAssociatedResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline WorkspaceResourceAssociation& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline WorkspaceResourceAssociation& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the association status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline WorkspaceResourceAssociation& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline WorkspaceResourceAssociation& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the WorkSpace resource association.</p>
     */
    inline const AssociationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AssociationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline WorkspaceResourceAssociation& WithState(const AssociationState& value) { SetState(value); return *this;}
    inline WorkspaceResourceAssociation& WithState(AssociationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the association deployment failed.</p>
     */
    inline const AssociationStateReason& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const AssociationStateReason& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(AssociationStateReason&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline WorkspaceResourceAssociation& WithStateReason(const AssociationStateReason& value) { SetStateReason(value); return *this;}
    inline WorkspaceResourceAssociation& WithStateReason(AssociationStateReason&& value) { SetStateReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline WorkspaceResourceAssociation& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline WorkspaceResourceAssociation& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline WorkspaceResourceAssociation& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_associatedResourceId;
    bool m_associatedResourceIdHasBeenSet = false;

    WorkSpaceAssociatedResourceType m_associatedResourceType;
    bool m_associatedResourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    AssociationState m_state;
    bool m_stateHasBeenSet = false;

    AssociationStateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
