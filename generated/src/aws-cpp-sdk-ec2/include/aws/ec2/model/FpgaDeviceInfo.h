﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FpgaDeviceMemoryInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the FPGA accelerator for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FpgaDeviceInfo">AWS
   * API Reference</a></p>
   */
  class FpgaDeviceInfo
  {
  public:
    AWS_EC2_API FpgaDeviceInfo() = default;
    AWS_EC2_API FpgaDeviceInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaDeviceInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the FPGA accelerator.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FpgaDeviceInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manufacturer of the FPGA accelerator.</p>
     */
    inline const Aws::String& GetManufacturer() const { return m_manufacturer; }
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }
    template<typename ManufacturerT = Aws::String>
    void SetManufacturer(ManufacturerT&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::forward<ManufacturerT>(value); }
    template<typename ManufacturerT = Aws::String>
    FpgaDeviceInfo& WithManufacturer(ManufacturerT&& value) { SetManufacturer(std::forward<ManufacturerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of FPGA accelerators for the instance type.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline FpgaDeviceInfo& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the memory for the FPGA accelerator for the instance type.</p>
     */
    inline const FpgaDeviceMemoryInfo& GetMemoryInfo() const { return m_memoryInfo; }
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }
    template<typename MemoryInfoT = FpgaDeviceMemoryInfo>
    void SetMemoryInfo(MemoryInfoT&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::forward<MemoryInfoT>(value); }
    template<typename MemoryInfoT = FpgaDeviceMemoryInfo>
    FpgaDeviceInfo& WithMemoryInfo(MemoryInfoT&& value) { SetMemoryInfo(std::forward<MemoryInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    FpgaDeviceMemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
