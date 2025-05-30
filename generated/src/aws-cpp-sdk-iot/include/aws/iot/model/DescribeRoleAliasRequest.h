﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeRoleAliasRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeRoleAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRoleAlias"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The role alias to describe.</p>
     */
    inline const Aws::String& GetRoleAlias() const { return m_roleAlias; }
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }
    template<typename RoleAliasT = Aws::String>
    void SetRoleAlias(RoleAliasT&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::forward<RoleAliasT>(value); }
    template<typename RoleAliasT = Aws::String>
    DescribeRoleAliasRequest& WithRoleAlias(RoleAliasT&& value) { SetRoleAlias(std::forward<RoleAliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
