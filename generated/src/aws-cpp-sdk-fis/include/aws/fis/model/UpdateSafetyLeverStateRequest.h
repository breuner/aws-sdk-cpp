﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/FISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/UpdateSafetyLeverStateInput.h>
#include <utility>

namespace Aws
{
namespace FIS
{
namespace Model
{

  /**
   */
  class UpdateSafetyLeverStateRequest : public FISRequest
  {
  public:
    AWS_FIS_API UpdateSafetyLeverStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSafetyLeverState"; }

    AWS_FIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ID of the safety lever. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateSafetyLeverStateRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of the safety lever. </p>
     */
    inline const UpdateSafetyLeverStateInput& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = UpdateSafetyLeverStateInput>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = UpdateSafetyLeverStateInput>
    UpdateSafetyLeverStateRequest& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    UpdateSafetyLeverStateInput m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
