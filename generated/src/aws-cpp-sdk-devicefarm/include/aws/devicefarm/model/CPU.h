﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the amount of CPU that an app is using on a physical device. Does
   * not represent system-wide CPU usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CPU">AWS API
   * Reference</a></p>
   */
  class CPU
  {
  public:
    AWS_DEVICEFARM_API CPU();
    AWS_DEVICEFARM_API CPU(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API CPU& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CPU's frequency.</p>
     */
    inline const Aws::String& GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(const Aws::String& value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline void SetFrequency(Aws::String&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }
    inline void SetFrequency(const char* value) { m_frequencyHasBeenSet = true; m_frequency.assign(value); }
    inline CPU& WithFrequency(const Aws::String& value) { SetFrequency(value); return *this;}
    inline CPU& WithFrequency(Aws::String&& value) { SetFrequency(std::move(value)); return *this;}
    inline CPU& WithFrequency(const char* value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU's architecture (for example, x86 or ARM).</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline CPU& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline CPU& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline CPU& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clock speed of the device's CPU, expressed in hertz (Hz). For example, a
     * 1.2 GHz CPU is expressed as 1200000000.</p>
     */
    inline double GetClock() const{ return m_clock; }
    inline bool ClockHasBeenSet() const { return m_clockHasBeenSet; }
    inline void SetClock(double value) { m_clockHasBeenSet = true; m_clock = value; }
    inline CPU& WithClock(double value) { SetClock(value); return *this;}
    ///@}
  private:

    Aws::String m_frequency;
    bool m_frequencyHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    double m_clock;
    bool m_clockHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
