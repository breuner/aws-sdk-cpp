﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>

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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p> The possible Amazon Web Services Free Tier configurations. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CreateFreeTierConfig">AWS
   * API Reference</a></p>
   */
  class CreateFreeTierConfig
  {
  public:
    AWS_BILLINGCONDUCTOR_API CreateFreeTierConfig() = default;
    AWS_BILLINGCONDUCTOR_API CreateFreeTierConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CreateFreeTierConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Activate or deactivate Amazon Web Services Free Tier. </p>
     */
    inline bool GetActivated() const { return m_activated; }
    inline bool ActivatedHasBeenSet() const { return m_activatedHasBeenSet; }
    inline void SetActivated(bool value) { m_activatedHasBeenSet = true; m_activated = value; }
    inline CreateFreeTierConfig& WithActivated(bool value) { SetActivated(value); return *this;}
    ///@}
  private:

    bool m_activated{false};
    bool m_activatedHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
