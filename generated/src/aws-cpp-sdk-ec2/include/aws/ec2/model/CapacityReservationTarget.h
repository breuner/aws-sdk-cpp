﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a target Capacity Reservation or Capacity Reservation
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationTarget">AWS
   * API Reference</a></p>
   */
  class CapacityReservationTarget
  {
  public:
    AWS_EC2_API CapacityReservationTarget();
    AWS_EC2_API CapacityReservationTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Reservation in which to run the instance.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }
    inline CapacityReservationTarget& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}
    inline CapacityReservationTarget& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}
    inline CapacityReservationTarget& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Capacity Reservation resource group in which to run the
     * instance.</p>
     */
    inline const Aws::String& GetCapacityReservationResourceGroupArn() const{ return m_capacityReservationResourceGroupArn; }
    inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }
    inline void SetCapacityReservationResourceGroupArn(const Aws::String& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = value; }
    inline void SetCapacityReservationResourceGroupArn(Aws::String&& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = std::move(value); }
    inline void SetCapacityReservationResourceGroupArn(const char* value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn.assign(value); }
    inline CapacityReservationTarget& WithCapacityReservationResourceGroupArn(const Aws::String& value) { SetCapacityReservationResourceGroupArn(value); return *this;}
    inline CapacityReservationTarget& WithCapacityReservationResourceGroupArn(Aws::String&& value) { SetCapacityReservationResourceGroupArn(std::move(value)); return *this;}
    inline CapacityReservationTarget& WithCapacityReservationResourceGroupArn(const char* value) { SetCapacityReservationResourceGroupArn(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_capacityReservationResourceGroupArn;
    bool m_capacityReservationResourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
