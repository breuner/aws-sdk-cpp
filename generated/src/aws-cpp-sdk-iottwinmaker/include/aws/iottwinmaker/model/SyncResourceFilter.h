﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/SyncResourceState.h>
#include <aws/iottwinmaker/model/SyncResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The sync resource filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SyncResourceFilter">AWS
   * API Reference</a></p>
   */
  class SyncResourceFilter
  {
  public:
    AWS_IOTTWINMAKER_API SyncResourceFilter();
    AWS_IOTTWINMAKER_API SyncResourceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SyncResourceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sync resource filter's state.</p>
     */
    inline const SyncResourceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SyncResourceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SyncResourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SyncResourceFilter& WithState(const SyncResourceState& value) { SetState(value); return *this;}
    inline SyncResourceFilter& WithState(SyncResourceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync resource filter resource type</p>
     */
    inline const SyncResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const SyncResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(SyncResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline SyncResourceFilter& WithResourceType(const SyncResourceType& value) { SetResourceType(value); return *this;}
    inline SyncResourceFilter& WithResourceType(SyncResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync resource filter resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline SyncResourceFilter& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline SyncResourceFilter& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline SyncResourceFilter& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline SyncResourceFilter& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline SyncResourceFilter& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline SyncResourceFilter& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
  private:

    SyncResourceState m_state;
    bool m_stateHasBeenSet = false;

    SyncResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
