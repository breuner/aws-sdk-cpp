﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>

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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The dollar value of the anomaly. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Impact">AWS API
   * Reference</a></p>
   */
  class Impact
  {
  public:
    AWS_COSTEXPLORER_API Impact() = default;
    AWS_COSTEXPLORER_API Impact(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Impact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum dollar value that's observed for an anomaly.</p>
     */
    inline double GetMaxImpact() const { return m_maxImpact; }
    inline bool MaxImpactHasBeenSet() const { return m_maxImpactHasBeenSet; }
    inline void SetMaxImpact(double value) { m_maxImpactHasBeenSet = true; m_maxImpact = value; }
    inline Impact& WithMaxImpact(double value) { SetMaxImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cumulative dollar difference between the total actual spend and total
     * expected spend. It is calculated as <code>TotalActualSpend -
     * TotalExpectedSpend</code>.</p>
     */
    inline double GetTotalImpact() const { return m_totalImpact; }
    inline bool TotalImpactHasBeenSet() const { return m_totalImpactHasBeenSet; }
    inline void SetTotalImpact(double value) { m_totalImpactHasBeenSet = true; m_totalImpact = value; }
    inline Impact& WithTotalImpact(double value) { SetTotalImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cumulative dollar amount that was actually spent during the anomaly.</p>
     */
    inline double GetTotalActualSpend() const { return m_totalActualSpend; }
    inline bool TotalActualSpendHasBeenSet() const { return m_totalActualSpendHasBeenSet; }
    inline void SetTotalActualSpend(double value) { m_totalActualSpendHasBeenSet = true; m_totalActualSpend = value; }
    inline Impact& WithTotalActualSpend(double value) { SetTotalActualSpend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cumulative dollar amount that was expected to be spent during the
     * anomaly. It is calculated using advanced machine learning models to determine
     * the typical spending pattern based on historical data for a customer.</p>
     */
    inline double GetTotalExpectedSpend() const { return m_totalExpectedSpend; }
    inline bool TotalExpectedSpendHasBeenSet() const { return m_totalExpectedSpendHasBeenSet; }
    inline void SetTotalExpectedSpend(double value) { m_totalExpectedSpendHasBeenSet = true; m_totalExpectedSpend = value; }
    inline Impact& WithTotalExpectedSpend(double value) { SetTotalExpectedSpend(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cumulative percentage difference between the total actual spend and total
     * expected spend. It is calculated as <code>(TotalImpact / TotalExpectedSpend) *
     * 100</code>. When <code>TotalExpectedSpend</code> is zero, this field is omitted.
     * Expected spend can be zero in situations such as when you start to use a service
     * for the first time.</p>
     */
    inline double GetTotalImpactPercentage() const { return m_totalImpactPercentage; }
    inline bool TotalImpactPercentageHasBeenSet() const { return m_totalImpactPercentageHasBeenSet; }
    inline void SetTotalImpactPercentage(double value) { m_totalImpactPercentageHasBeenSet = true; m_totalImpactPercentage = value; }
    inline Impact& WithTotalImpactPercentage(double value) { SetTotalImpactPercentage(value); return *this;}
    ///@}
  private:

    double m_maxImpact{0.0};
    bool m_maxImpactHasBeenSet = false;

    double m_totalImpact{0.0};
    bool m_totalImpactHasBeenSet = false;

    double m_totalActualSpend{0.0};
    bool m_totalActualSpendHasBeenSet = false;

    double m_totalExpectedSpend{0.0};
    bool m_totalExpectedSpendHasBeenSet = false;

    double m_totalImpactPercentage{0.0};
    bool m_totalImpactPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
