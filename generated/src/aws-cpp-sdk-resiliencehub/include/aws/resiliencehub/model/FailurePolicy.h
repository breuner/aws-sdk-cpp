﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a failure policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/FailurePolicy">AWS
   * API Reference</a></p>
   */
  class FailurePolicy
  {
  public:
    AWS_RESILIENCEHUB_API FailurePolicy() = default;
    AWS_RESILIENCEHUB_API FailurePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API FailurePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Recovery Point Objective (RPO) in seconds.</p>
     */
    inline int GetRpoInSecs() const { return m_rpoInSecs; }
    inline bool RpoInSecsHasBeenSet() const { return m_rpoInSecsHasBeenSet; }
    inline void SetRpoInSecs(int value) { m_rpoInSecsHasBeenSet = true; m_rpoInSecs = value; }
    inline FailurePolicy& WithRpoInSecs(int value) { SetRpoInSecs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recovery Time Objective (RTO) in seconds.</p>
     */
    inline int GetRtoInSecs() const { return m_rtoInSecs; }
    inline bool RtoInSecsHasBeenSet() const { return m_rtoInSecsHasBeenSet; }
    inline void SetRtoInSecs(int value) { m_rtoInSecsHasBeenSet = true; m_rtoInSecs = value; }
    inline FailurePolicy& WithRtoInSecs(int value) { SetRtoInSecs(value); return *this;}
    ///@}
  private:

    int m_rpoInSecs{0};
    bool m_rpoInSecsHasBeenSet = false;

    int m_rtoInSecs{0};
    bool m_rtoInSecsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
