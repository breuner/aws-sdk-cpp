﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The column schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnSchema">AWS
   * API Reference</a></p>
   */
  class ColumnSchema
  {
  public:
    AWS_QUICKSIGHT_API ColumnSchema();
    AWS_QUICKSIGHT_API ColumnSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ColumnSchema& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ColumnSchema& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ColumnSchema& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column schema.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline ColumnSchema& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline ColumnSchema& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline ColumnSchema& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic role of the column schema.</p>
     */
    inline const Aws::String& GetGeographicRole() const{ return m_geographicRole; }
    inline bool GeographicRoleHasBeenSet() const { return m_geographicRoleHasBeenSet; }
    inline void SetGeographicRole(const Aws::String& value) { m_geographicRoleHasBeenSet = true; m_geographicRole = value; }
    inline void SetGeographicRole(Aws::String&& value) { m_geographicRoleHasBeenSet = true; m_geographicRole = std::move(value); }
    inline void SetGeographicRole(const char* value) { m_geographicRoleHasBeenSet = true; m_geographicRole.assign(value); }
    inline ColumnSchema& WithGeographicRole(const Aws::String& value) { SetGeographicRole(value); return *this;}
    inline ColumnSchema& WithGeographicRole(Aws::String&& value) { SetGeographicRole(std::move(value)); return *this;}
    inline ColumnSchema& WithGeographicRole(const char* value) { SetGeographicRole(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_geographicRole;
    bool m_geographicRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
