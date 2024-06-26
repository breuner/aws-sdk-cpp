﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/ParentEntityUpdateRequest.h>
#include <aws/iottwinmaker/model/ComponentUpdateRequest.h>
#include <aws/iottwinmaker/model/CompositeComponentUpdateRequest.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class UpdateEntityRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API UpdateEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEntity"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline UpdateEntityRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline UpdateEntityRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline UpdateEntityRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline UpdateEntityRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline UpdateEntityRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline UpdateEntityRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }
    inline UpdateEntityRequest& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}
    inline UpdateEntityRequest& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}
    inline UpdateEntityRequest& WithEntityName(const char* value) { SetEntityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the entity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateEntityRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateEntityRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateEntityRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, ComponentUpdateRequest>& GetComponentUpdates() const{ return m_componentUpdates; }
    inline bool ComponentUpdatesHasBeenSet() const { return m_componentUpdatesHasBeenSet; }
    inline void SetComponentUpdates(const Aws::Map<Aws::String, ComponentUpdateRequest>& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates = value; }
    inline void SetComponentUpdates(Aws::Map<Aws::String, ComponentUpdateRequest>&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates = std::move(value); }
    inline UpdateEntityRequest& WithComponentUpdates(const Aws::Map<Aws::String, ComponentUpdateRequest>& value) { SetComponentUpdates(value); return *this;}
    inline UpdateEntityRequest& WithComponentUpdates(Aws::Map<Aws::String, ComponentUpdateRequest>&& value) { SetComponentUpdates(std::move(value)); return *this;}
    inline UpdateEntityRequest& AddComponentUpdates(const Aws::String& key, const ComponentUpdateRequest& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, value); return *this; }
    inline UpdateEntityRequest& AddComponentUpdates(Aws::String&& key, const ComponentUpdateRequest& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(std::move(key), value); return *this; }
    inline UpdateEntityRequest& AddComponentUpdates(const Aws::String& key, ComponentUpdateRequest&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, std::move(value)); return *this; }
    inline UpdateEntityRequest& AddComponentUpdates(Aws::String&& key, ComponentUpdateRequest&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateEntityRequest& AddComponentUpdates(const char* key, ComponentUpdateRequest&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, std::move(value)); return *this; }
    inline UpdateEntityRequest& AddComponentUpdates(const char* key, const ComponentUpdateRequest& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is an object that maps strings to <code>compositeComponent</code>
     * updates in the request. Each key of the map represents the
     * <code>componentPath</code> of the <code>compositeComponent</code>.</p>
     */
    inline const Aws::Map<Aws::String, CompositeComponentUpdateRequest>& GetCompositeComponentUpdates() const{ return m_compositeComponentUpdates; }
    inline bool CompositeComponentUpdatesHasBeenSet() const { return m_compositeComponentUpdatesHasBeenSet; }
    inline void SetCompositeComponentUpdates(const Aws::Map<Aws::String, CompositeComponentUpdateRequest>& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates = value; }
    inline void SetCompositeComponentUpdates(Aws::Map<Aws::String, CompositeComponentUpdateRequest>&& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates = std::move(value); }
    inline UpdateEntityRequest& WithCompositeComponentUpdates(const Aws::Map<Aws::String, CompositeComponentUpdateRequest>& value) { SetCompositeComponentUpdates(value); return *this;}
    inline UpdateEntityRequest& WithCompositeComponentUpdates(Aws::Map<Aws::String, CompositeComponentUpdateRequest>&& value) { SetCompositeComponentUpdates(std::move(value)); return *this;}
    inline UpdateEntityRequest& AddCompositeComponentUpdates(const Aws::String& key, const CompositeComponentUpdateRequest& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates.emplace(key, value); return *this; }
    inline UpdateEntityRequest& AddCompositeComponentUpdates(Aws::String&& key, const CompositeComponentUpdateRequest& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates.emplace(std::move(key), value); return *this; }
    inline UpdateEntityRequest& AddCompositeComponentUpdates(const Aws::String& key, CompositeComponentUpdateRequest&& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates.emplace(key, std::move(value)); return *this; }
    inline UpdateEntityRequest& AddCompositeComponentUpdates(Aws::String&& key, CompositeComponentUpdateRequest&& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateEntityRequest& AddCompositeComponentUpdates(const char* key, CompositeComponentUpdateRequest&& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates.emplace(key, std::move(value)); return *this; }
    inline UpdateEntityRequest& AddCompositeComponentUpdates(const char* key, const CompositeComponentUpdateRequest& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline const ParentEntityUpdateRequest& GetParentEntityUpdate() const{ return m_parentEntityUpdate; }
    inline bool ParentEntityUpdateHasBeenSet() const { return m_parentEntityUpdateHasBeenSet; }
    inline void SetParentEntityUpdate(const ParentEntityUpdateRequest& value) { m_parentEntityUpdateHasBeenSet = true; m_parentEntityUpdate = value; }
    inline void SetParentEntityUpdate(ParentEntityUpdateRequest&& value) { m_parentEntityUpdateHasBeenSet = true; m_parentEntityUpdate = std::move(value); }
    inline UpdateEntityRequest& WithParentEntityUpdate(const ParentEntityUpdateRequest& value) { SetParentEntityUpdate(value); return *this;}
    inline UpdateEntityRequest& WithParentEntityUpdate(ParentEntityUpdateRequest&& value) { SetParentEntityUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ComponentUpdateRequest> m_componentUpdates;
    bool m_componentUpdatesHasBeenSet = false;

    Aws::Map<Aws::String, CompositeComponentUpdateRequest> m_compositeComponentUpdates;
    bool m_compositeComponentUpdatesHasBeenSet = false;

    ParentEntityUpdateRequest m_parentEntityUpdate;
    bool m_parentEntityUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
