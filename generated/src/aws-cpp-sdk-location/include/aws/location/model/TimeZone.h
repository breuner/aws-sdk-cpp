﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Information about a time zone. Includes the name of the time zone and the
   * offset from UTC in seconds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/TimeZone">AWS
   * API Reference</a></p>
   */
  class TimeZone
  {
  public:
    AWS_LOCATIONSERVICE_API TimeZone() = default;
    AWS_LOCATIONSERVICE_API TimeZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API TimeZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the time zone, following the <a
     * href="https://www.iana.org/time-zones"> IANA time zone standard</a>. For
     * example, <code>America/Los_Angeles</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TimeZone& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone's offset, in seconds, from UTC.</p>
     */
    inline int GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline TimeZone& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
