﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of the <code>Select all</code> options in a list
   * control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ListControlSelectAllOptions">AWS
   * API Reference</a></p>
   */
  class ListControlSelectAllOptions
  {
  public:
    AWS_QUICKSIGHT_API ListControlSelectAllOptions() = default;
    AWS_QUICKSIGHT_API ListControlSelectAllOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ListControlSelectAllOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility configuration of the <code>Select all</code> options in a list
     * control.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline ListControlSelectAllOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
