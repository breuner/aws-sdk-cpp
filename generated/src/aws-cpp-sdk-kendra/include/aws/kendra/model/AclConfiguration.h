﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about the column that should be used for filtering the
   * query response by groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AclConfiguration">AWS
   * API Reference</a></p>
   */
  class AclConfiguration
  {
  public:
    AWS_KENDRA_API AclConfiguration() = default;
    AWS_KENDRA_API AclConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AclConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the
     * <code>Query</code> API.</p>
     */
    inline const Aws::String& GetAllowedGroupsColumnName() const { return m_allowedGroupsColumnName; }
    inline bool AllowedGroupsColumnNameHasBeenSet() const { return m_allowedGroupsColumnNameHasBeenSet; }
    template<typename AllowedGroupsColumnNameT = Aws::String>
    void SetAllowedGroupsColumnName(AllowedGroupsColumnNameT&& value) { m_allowedGroupsColumnNameHasBeenSet = true; m_allowedGroupsColumnName = std::forward<AllowedGroupsColumnNameT>(value); }
    template<typename AllowedGroupsColumnNameT = Aws::String>
    AclConfiguration& WithAllowedGroupsColumnName(AllowedGroupsColumnNameT&& value) { SetAllowedGroupsColumnName(std::forward<AllowedGroupsColumnNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_allowedGroupsColumnName;
    bool m_allowedGroupsColumnNameHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
