﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DeleteInstanceRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstance"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the instance to delete.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline DeleteInstanceRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline DeleteInstanceRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline DeleteInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether to delete all add-ons for the
     * instance.</p>
     */
    inline bool GetForceDeleteAddOns() const{ return m_forceDeleteAddOns; }
    inline bool ForceDeleteAddOnsHasBeenSet() const { return m_forceDeleteAddOnsHasBeenSet; }
    inline void SetForceDeleteAddOns(bool value) { m_forceDeleteAddOnsHasBeenSet = true; m_forceDeleteAddOns = value; }
    inline DeleteInstanceRequest& WithForceDeleteAddOns(bool value) { SetForceDeleteAddOns(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    bool m_forceDeleteAddOns;
    bool m_forceDeleteAddOnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
