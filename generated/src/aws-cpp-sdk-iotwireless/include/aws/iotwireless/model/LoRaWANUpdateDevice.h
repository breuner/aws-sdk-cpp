﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/UpdateAbpV1_1.h>
#include <aws/iotwireless/model/UpdateAbpV1_0_x.h>
#include <aws/iotwireless/model/UpdateFPorts.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWAN object for update functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANUpdateDevice">AWS
   * API Reference</a></p>
   */
  class LoRaWANUpdateDevice
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANUpdateDevice();
    AWS_IOTWIRELESS_API LoRaWANUpdateDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANUpdateDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the device profile for the wireless device.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const{ return m_deviceProfileId; }
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
    inline void SetDeviceProfileId(const Aws::String& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = value; }
    inline void SetDeviceProfileId(Aws::String&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::move(value); }
    inline void SetDeviceProfileId(const char* value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId.assign(value); }
    inline LoRaWANUpdateDevice& WithDeviceProfileId(const Aws::String& value) { SetDeviceProfileId(value); return *this;}
    inline LoRaWANUpdateDevice& WithDeviceProfileId(Aws::String&& value) { SetDeviceProfileId(std::move(value)); return *this;}
    inline LoRaWANUpdateDevice& WithDeviceProfileId(const char* value) { SetDeviceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service profile.</p>
     */
    inline const Aws::String& GetServiceProfileId() const{ return m_serviceProfileId; }
    inline bool ServiceProfileIdHasBeenSet() const { return m_serviceProfileIdHasBeenSet; }
    inline void SetServiceProfileId(const Aws::String& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = value; }
    inline void SetServiceProfileId(Aws::String&& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = std::move(value); }
    inline void SetServiceProfileId(const char* value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId.assign(value); }
    inline LoRaWANUpdateDevice& WithServiceProfileId(const Aws::String& value) { SetServiceProfileId(value); return *this;}
    inline LoRaWANUpdateDevice& WithServiceProfileId(Aws::String&& value) { SetServiceProfileId(std::move(value)); return *this;}
    inline LoRaWANUpdateDevice& WithServiceProfileId(const char* value) { SetServiceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ABP device object for update APIs for v1.1</p>
     */
    inline const UpdateAbpV1_1& GetAbpV1_1() const{ return m_abpV1_1; }
    inline bool AbpV1_1HasBeenSet() const { return m_abpV1_1HasBeenSet; }
    inline void SetAbpV1_1(const UpdateAbpV1_1& value) { m_abpV1_1HasBeenSet = true; m_abpV1_1 = value; }
    inline void SetAbpV1_1(UpdateAbpV1_1&& value) { m_abpV1_1HasBeenSet = true; m_abpV1_1 = std::move(value); }
    inline LoRaWANUpdateDevice& WithAbpV1_1(const UpdateAbpV1_1& value) { SetAbpV1_1(value); return *this;}
    inline LoRaWANUpdateDevice& WithAbpV1_1(UpdateAbpV1_1&& value) { SetAbpV1_1(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ABP device object for update APIs for v1.0.x</p>
     */
    inline const UpdateAbpV1_0_x& GetAbpV1_0_x() const{ return m_abpV1_0_x; }
    inline bool AbpV1_0_xHasBeenSet() const { return m_abpV1_0_xHasBeenSet; }
    inline void SetAbpV1_0_x(const UpdateAbpV1_0_x& value) { m_abpV1_0_xHasBeenSet = true; m_abpV1_0_x = value; }
    inline void SetAbpV1_0_x(UpdateAbpV1_0_x&& value) { m_abpV1_0_xHasBeenSet = true; m_abpV1_0_x = std::move(value); }
    inline LoRaWANUpdateDevice& WithAbpV1_0_x(const UpdateAbpV1_0_x& value) { SetAbpV1_0_x(value); return *this;}
    inline LoRaWANUpdateDevice& WithAbpV1_0_x(UpdateAbpV1_0_x&& value) { SetAbpV1_0_x(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>FPorts object for the positioning information of the device.</p>
     */
    inline const UpdateFPorts& GetFPorts() const{ return m_fPorts; }
    inline bool FPortsHasBeenSet() const { return m_fPortsHasBeenSet; }
    inline void SetFPorts(const UpdateFPorts& value) { m_fPortsHasBeenSet = true; m_fPorts = value; }
    inline void SetFPorts(UpdateFPorts&& value) { m_fPortsHasBeenSet = true; m_fPorts = std::move(value); }
    inline LoRaWANUpdateDevice& WithFPorts(const UpdateFPorts& value) { SetFPorts(value); return *this;}
    inline LoRaWANUpdateDevice& WithFPorts(UpdateFPorts&& value) { SetFPorts(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;

    Aws::String m_serviceProfileId;
    bool m_serviceProfileIdHasBeenSet = false;

    UpdateAbpV1_1 m_abpV1_1;
    bool m_abpV1_1HasBeenSet = false;

    UpdateAbpV1_0_x m_abpV1_0_x;
    bool m_abpV1_0_xHasBeenSet = false;

    UpdateFPorts m_fPorts;
    bool m_fPortsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
