﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANUpdateGatewayTaskEntry.h>
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
   * <p>UpdateWirelessGatewayTaskEntry object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGatewayTaskEntry">AWS
   * API Reference</a></p>
   */
  class UpdateWirelessGatewayTaskEntry
  {
  public:
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskEntry();
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the new wireless gateway task entry.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateWirelessGatewayTaskEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateWirelessGatewayTaskEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateWirelessGatewayTaskEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline const LoRaWANUpdateGatewayTaskEntry& GetLoRaWAN() const{ return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    inline void SetLoRaWAN(const LoRaWANUpdateGatewayTaskEntry& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANUpdateGatewayTaskEntry&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }
    inline UpdateWirelessGatewayTaskEntry& WithLoRaWAN(const LoRaWANUpdateGatewayTaskEntry& value) { SetLoRaWAN(value); return *this;}
    inline UpdateWirelessGatewayTaskEntry& WithLoRaWAN(LoRaWANUpdateGatewayTaskEntry&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateWirelessGatewayTaskEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateWirelessGatewayTaskEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateWirelessGatewayTaskEntry& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LoRaWANUpdateGatewayTaskEntry m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
