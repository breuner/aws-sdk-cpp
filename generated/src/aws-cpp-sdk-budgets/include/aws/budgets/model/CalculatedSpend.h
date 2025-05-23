﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Spend.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The spend objects that are associated with this budget. The
   * <code>actualSpend</code> tracks how much you've used, cost, usage, RI units, or
   * Savings Plans units and the <code>forecastedSpend</code> tracks how much that
   * you're predicted to spend based on your historical usage profile.</p> <p>For
   * example, if it's the 20th of the month and you have spent <code>50</code>
   * dollars on Amazon EC2, your <code>actualSpend</code> is <code>50 USD</code>, and
   * your <code>forecastedSpend</code> is <code>75 USD</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CalculatedSpend">AWS
   * API Reference</a></p>
   */
  class CalculatedSpend
  {
  public:
    AWS_BUDGETS_API CalculatedSpend() = default;
    AWS_BUDGETS_API CalculatedSpend(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API CalculatedSpend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of cost, usage, RI units, or Savings Plans units that you
     * used.</p>
     */
    inline const Spend& GetActualSpend() const { return m_actualSpend; }
    inline bool ActualSpendHasBeenSet() const { return m_actualSpendHasBeenSet; }
    template<typename ActualSpendT = Spend>
    void SetActualSpend(ActualSpendT&& value) { m_actualSpendHasBeenSet = true; m_actualSpend = std::forward<ActualSpendT>(value); }
    template<typename ActualSpendT = Spend>
    CalculatedSpend& WithActualSpend(ActualSpendT&& value) { SetActualSpend(std::forward<ActualSpendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of cost, usage, RI units, or Savings Plans units that you're
     * forecasted to use.</p>
     */
    inline const Spend& GetForecastedSpend() const { return m_forecastedSpend; }
    inline bool ForecastedSpendHasBeenSet() const { return m_forecastedSpendHasBeenSet; }
    template<typename ForecastedSpendT = Spend>
    void SetForecastedSpend(ForecastedSpendT&& value) { m_forecastedSpendHasBeenSet = true; m_forecastedSpend = std::forward<ForecastedSpendT>(value); }
    template<typename ForecastedSpendT = Spend>
    CalculatedSpend& WithForecastedSpend(ForecastedSpendT&& value) { SetForecastedSpend(std::forward<ForecastedSpendT>(value)); return *this;}
    ///@}
  private:

    Spend m_actualSpend;
    bool m_actualSpendHasBeenSet = false;

    Spend m_forecastedSpend;
    bool m_forecastedSpendHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
