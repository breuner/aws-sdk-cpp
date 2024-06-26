﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class DeleteSuiteDefinitionRequest : public IoTDeviceAdvisorRequest
  {
  public:
    AWS_IOTDEVICEADVISOR_API DeleteSuiteDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSuiteDefinition"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Suite definition ID of the test suite to be deleted.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }
    inline DeleteSuiteDefinitionRequest& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}
    inline DeleteSuiteDefinitionRequest& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}
    inline DeleteSuiteDefinitionRequest& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
