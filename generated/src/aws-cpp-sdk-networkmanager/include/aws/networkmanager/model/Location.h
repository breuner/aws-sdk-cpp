﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Location">AWS
   * API Reference</a></p>
   */
  class Location
  {
  public:
    AWS_NETWORKMANAGER_API Location();
    AWS_NETWORKMANAGER_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The physical address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline Location& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline Location& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline Location& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude.</p>
     */
    inline const Aws::String& GetLatitude() const{ return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    inline void SetLatitude(const Aws::String& value) { m_latitudeHasBeenSet = true; m_latitude = value; }
    inline void SetLatitude(Aws::String&& value) { m_latitudeHasBeenSet = true; m_latitude = std::move(value); }
    inline void SetLatitude(const char* value) { m_latitudeHasBeenSet = true; m_latitude.assign(value); }
    inline Location& WithLatitude(const Aws::String& value) { SetLatitude(value); return *this;}
    inline Location& WithLatitude(Aws::String&& value) { SetLatitude(std::move(value)); return *this;}
    inline Location& WithLatitude(const char* value) { SetLatitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The longitude.</p>
     */
    inline const Aws::String& GetLongitude() const{ return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    inline void SetLongitude(const Aws::String& value) { m_longitudeHasBeenSet = true; m_longitude = value; }
    inline void SetLongitude(Aws::String&& value) { m_longitudeHasBeenSet = true; m_longitude = std::move(value); }
    inline void SetLongitude(const char* value) { m_longitudeHasBeenSet = true; m_longitude.assign(value); }
    inline Location& WithLongitude(const Aws::String& value) { SetLongitude(value); return *this;}
    inline Location& WithLongitude(Aws::String&& value) { SetLongitude(std::move(value)); return *this;}
    inline Location& WithLongitude(const char* value) { SetLongitude(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_latitude;
    bool m_latitudeHasBeenSet = false;

    Aws::String m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
