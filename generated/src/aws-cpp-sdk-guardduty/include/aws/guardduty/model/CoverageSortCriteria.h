﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CoverageSortKey.h>
#include <aws/guardduty/model/OrderBy.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the sorting criteria used in the coverage
   * statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageSortCriteria">AWS
   * API Reference</a></p>
   */
  class CoverageSortCriteria
  {
  public:
    AWS_GUARDDUTY_API CoverageSortCriteria() = default;
    AWS_GUARDDUTY_API CoverageSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the field name used to sort the coverage details.</p> 
     * <p>Replace the enum value <code>CLUSTER_NAME</code> with
     * <code>EKS_CLUSTER_NAME</code>. <code>CLUSTER_NAME</code> has been
     * deprecated.</p> 
     */
    inline CoverageSortKey GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(CoverageSortKey value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline CoverageSortCriteria& WithAttributeName(CoverageSortKey value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which the sorted findings are to be displayed.</p>
     */
    inline OrderBy GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(OrderBy value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline CoverageSortCriteria& WithOrderBy(OrderBy value) { SetOrderBy(value); return *this;}
    ///@}
  private:

    CoverageSortKey m_attributeName{CoverageSortKey::NOT_SET};
    bool m_attributeNameHasBeenSet = false;

    OrderBy m_orderBy{OrderBy::NOT_SET};
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
