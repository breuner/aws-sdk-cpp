﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameSession.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A game session's properties plus the protection policy currently in
   * force.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionDetail">AWS
   * API Reference</a></p>
   */
  class GameSessionDetail
  {
  public:
    AWS_GAMELIFT_API GameSessionDetail() = default;
    AWS_GAMELIFT_API GameSessionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Object that describes a game session.</p>
     */
    inline const GameSession& GetGameSession() const { return m_gameSession; }
    inline bool GameSessionHasBeenSet() const { return m_gameSessionHasBeenSet; }
    template<typename GameSessionT = GameSession>
    void SetGameSession(GameSessionT&& value) { m_gameSessionHasBeenSet = true; m_gameSession = std::forward<GameSessionT>(value); }
    template<typename GameSessionT = GameSession>
    GameSessionDetail& WithGameSession(GameSessionT&& value) { SetGameSession(std::forward<GameSessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline ProtectionPolicy GetProtectionPolicy() const { return m_protectionPolicy; }
    inline bool ProtectionPolicyHasBeenSet() const { return m_protectionPolicyHasBeenSet; }
    inline void SetProtectionPolicy(ProtectionPolicy value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = value; }
    inline GameSessionDetail& WithProtectionPolicy(ProtectionPolicy value) { SetProtectionPolicy(value); return *this;}
    ///@}
  private:

    GameSession m_gameSession;
    bool m_gameSessionHasBeenSet = false;

    ProtectionPolicy m_protectionPolicy{ProtectionPolicy::NOT_SET};
    bool m_protectionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
