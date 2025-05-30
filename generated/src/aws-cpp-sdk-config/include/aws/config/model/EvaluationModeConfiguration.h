﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EvaluationMode.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The configuration object for Config rule evaluation mode. The supported valid
   * values are Detective or Proactive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/EvaluationModeConfiguration">AWS
   * API Reference</a></p>
   */
  class EvaluationModeConfiguration
  {
  public:
    AWS_CONFIGSERVICE_API EvaluationModeConfiguration() = default;
    AWS_CONFIGSERVICE_API EvaluationModeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationModeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode of an evaluation. The valid values are Detective or Proactive.</p>
     */
    inline EvaluationMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(EvaluationMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline EvaluationModeConfiguration& WithMode(EvaluationMode value) { SetMode(value); return *this;}
    ///@}
  private:

    EvaluationMode m_mode{EvaluationMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
