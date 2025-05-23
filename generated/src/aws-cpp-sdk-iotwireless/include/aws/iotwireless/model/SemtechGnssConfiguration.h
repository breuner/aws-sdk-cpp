﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/PositionConfigurationStatus.h>
#include <aws/iotwireless/model/PositionConfigurationFec.h>
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
   * <p>Information about the Semtech GNSS solver configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SemtechGnssConfiguration">AWS
   * API Reference</a></p>
   */
  class SemtechGnssConfiguration
  {
  public:
    AWS_IOTWIRELESS_API SemtechGnssConfiguration() = default;
    AWS_IOTWIRELESS_API SemtechGnssConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SemtechGnssConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status indicating whether the solver is enabled.</p>
     */
    inline PositionConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PositionConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SemtechGnssConfiguration& WithStatus(PositionConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether forward error correction is enabled.</p>
     */
    inline PositionConfigurationFec GetFec() const { return m_fec; }
    inline bool FecHasBeenSet() const { return m_fecHasBeenSet; }
    inline void SetFec(PositionConfigurationFec value) { m_fecHasBeenSet = true; m_fec = value; }
    inline SemtechGnssConfiguration& WithFec(PositionConfigurationFec value) { SetFec(value); return *this;}
    ///@}
  private:

    PositionConfigurationStatus m_status{PositionConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PositionConfigurationFec m_fec{PositionConfigurationFec::NOT_SET};
    bool m_fecHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
