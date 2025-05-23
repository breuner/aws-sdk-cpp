﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerGroupDeleteOption.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DeleteGameServerGroupRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DeleteGameServerGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGameServerGroup"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const { return m_gameServerGroupName; }
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }
    template<typename GameServerGroupNameT = Aws::String>
    void SetGameServerGroupName(GameServerGroupNameT&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::forward<GameServerGroupNameT>(value); }
    template<typename GameServerGroupNameT = Aws::String>
    DeleteGameServerGroupRequest& WithGameServerGroupName(GameServerGroupNameT&& value) { SetGameServerGroupName(std::forward<GameServerGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of delete to perform. Options include the following:</p> <ul> <li>
     * <p> <code>SAFE_DELETE</code> – (default) Terminates the game server group and
     * Amazon EC2 Auto Scaling group only when it has no game servers that are in
     * <code>UTILIZED</code> status.</p> </li> <li> <p> <code>FORCE_DELETE</code> –
     * Terminates the game server group, including all active game servers regardless
     * of their utilization status, and the Amazon EC2 Auto Scaling group. </p> </li>
     * <li> <p> <code>RETAIN</code> – Does a safe delete of the game server group but
     * retains the Amazon EC2 Auto Scaling group as is.</p> </li> </ul>
     */
    inline GameServerGroupDeleteOption GetDeleteOption() const { return m_deleteOption; }
    inline bool DeleteOptionHasBeenSet() const { return m_deleteOptionHasBeenSet; }
    inline void SetDeleteOption(GameServerGroupDeleteOption value) { m_deleteOptionHasBeenSet = true; m_deleteOption = value; }
    inline DeleteGameServerGroupRequest& WithDeleteOption(GameServerGroupDeleteOption value) { SetDeleteOption(value); return *this;}
    ///@}
  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    GameServerGroupDeleteOption m_deleteOption{GameServerGroupDeleteOption::NOT_SET};
    bool m_deleteOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
