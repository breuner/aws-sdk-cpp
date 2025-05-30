﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeProjectRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProject"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    DescribeProjectRequest& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
