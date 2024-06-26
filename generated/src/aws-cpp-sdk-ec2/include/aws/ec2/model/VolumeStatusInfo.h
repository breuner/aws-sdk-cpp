﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VolumeStatusInfoStatus.h>
#include <aws/ec2/model/VolumeStatusDetails.h>
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
   * <p>Describes the status of a volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeStatusInfo">AWS
   * API Reference</a></p>
   */
  class VolumeStatusInfo
  {
  public:
    AWS_EC2_API VolumeStatusInfo();
    AWS_EC2_API VolumeStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The details of the volume status.</p>
     */
    inline const Aws::Vector<VolumeStatusDetails>& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::Vector<VolumeStatusDetails>& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::Vector<VolumeStatusDetails>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline VolumeStatusInfo& WithDetails(const Aws::Vector<VolumeStatusDetails>& value) { SetDetails(value); return *this;}
    inline VolumeStatusInfo& WithDetails(Aws::Vector<VolumeStatusDetails>&& value) { SetDetails(std::move(value)); return *this;}
    inline VolumeStatusInfo& AddDetails(const VolumeStatusDetails& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }
    inline VolumeStatusInfo& AddDetails(VolumeStatusDetails&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the volume.</p>
     */
    inline const VolumeStatusInfoStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VolumeStatusInfoStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VolumeStatusInfoStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VolumeStatusInfo& WithStatus(const VolumeStatusInfoStatus& value) { SetStatus(value); return *this;}
    inline VolumeStatusInfo& WithStatus(VolumeStatusInfoStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VolumeStatusDetails> m_details;
    bool m_detailsHasBeenSet = false;

    VolumeStatusInfoStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
