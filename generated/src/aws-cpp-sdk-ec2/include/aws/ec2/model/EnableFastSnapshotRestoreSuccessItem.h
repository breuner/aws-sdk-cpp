﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FastSnapshotRestoreStateCode.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes fast snapshot restores that were successfully
   * enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableFastSnapshotRestoreSuccessItem">AWS
   * API Reference</a></p>
   */
  class EnableFastSnapshotRestoreSuccessItem
  {
  public:
    AWS_EC2_API EnableFastSnapshotRestoreSuccessItem();
    AWS_EC2_API EnableFastSnapshotRestoreSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EnableFastSnapshotRestoreSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of fast snapshot restores.</p>
     */
    inline const FastSnapshotRestoreStateCode& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const FastSnapshotRestoreStateCode& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(FastSnapshotRestoreStateCode&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithState(const FastSnapshotRestoreStateCode& value) { SetState(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithState(FastSnapshotRestoreStateCode&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state transition. The possible values are as follows:</p>
     * <ul> <li> <p> <code>Client.UserInitiated</code> - The state successfully
     * transitioned to <code>enabling</code> or <code>disabling</code>.</p> </li> <li>
     * <p> <code>Client.UserInitiated - Lifecycle state transition</code> - The state
     * successfully transitioned to <code>optimizing</code>, <code>enabled</code>, or
     * <code>disabled</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = value; }
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::move(value); }
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason.assign(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that enabled fast snapshot restores
     * on the snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services owner alias that enabled fast snapshot restores on
     * the snapshot. This is intended for future use.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = value; }
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::move(value); }
    inline void SetOwnerAlias(const char* value) { m_ownerAliasHasBeenSet = true; m_ownerAlias.assign(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>enabling</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetEnablingTime() const{ return m_enablingTime; }
    inline bool EnablingTimeHasBeenSet() const { return m_enablingTimeHasBeenSet; }
    inline void SetEnablingTime(const Aws::Utils::DateTime& value) { m_enablingTimeHasBeenSet = true; m_enablingTime = value; }
    inline void SetEnablingTime(Aws::Utils::DateTime&& value) { m_enablingTimeHasBeenSet = true; m_enablingTime = std::move(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithEnablingTime(const Aws::Utils::DateTime& value) { SetEnablingTime(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithEnablingTime(Aws::Utils::DateTime&& value) { SetEnablingTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>optimizing</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizingTime() const{ return m_optimizingTime; }
    inline bool OptimizingTimeHasBeenSet() const { return m_optimizingTimeHasBeenSet; }
    inline void SetOptimizingTime(const Aws::Utils::DateTime& value) { m_optimizingTimeHasBeenSet = true; m_optimizingTime = value; }
    inline void SetOptimizingTime(Aws::Utils::DateTime&& value) { m_optimizingTimeHasBeenSet = true; m_optimizingTime = std::move(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithOptimizingTime(const Aws::Utils::DateTime& value) { SetOptimizingTime(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithOptimizingTime(Aws::Utils::DateTime&& value) { SetOptimizingTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>enabled</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledTime() const{ return m_enabledTime; }
    inline bool EnabledTimeHasBeenSet() const { return m_enabledTimeHasBeenSet; }
    inline void SetEnabledTime(const Aws::Utils::DateTime& value) { m_enabledTimeHasBeenSet = true; m_enabledTime = value; }
    inline void SetEnabledTime(Aws::Utils::DateTime&& value) { m_enabledTimeHasBeenSet = true; m_enabledTime = std::move(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithEnabledTime(const Aws::Utils::DateTime& value) { SetEnabledTime(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithEnabledTime(Aws::Utils::DateTime&& value) { SetEnabledTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>disabling</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetDisablingTime() const{ return m_disablingTime; }
    inline bool DisablingTimeHasBeenSet() const { return m_disablingTimeHasBeenSet; }
    inline void SetDisablingTime(const Aws::Utils::DateTime& value) { m_disablingTimeHasBeenSet = true; m_disablingTime = value; }
    inline void SetDisablingTime(Aws::Utils::DateTime&& value) { m_disablingTimeHasBeenSet = true; m_disablingTime = std::move(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithDisablingTime(const Aws::Utils::DateTime& value) { SetDisablingTime(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithDisablingTime(Aws::Utils::DateTime&& value) { SetDisablingTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>disabled</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledTime() const{ return m_disabledTime; }
    inline bool DisabledTimeHasBeenSet() const { return m_disabledTimeHasBeenSet; }
    inline void SetDisabledTime(const Aws::Utils::DateTime& value) { m_disabledTimeHasBeenSet = true; m_disabledTime = value; }
    inline void SetDisabledTime(Aws::Utils::DateTime&& value) { m_disabledTimeHasBeenSet = true; m_disabledTime = std::move(value); }
    inline EnableFastSnapshotRestoreSuccessItem& WithDisabledTime(const Aws::Utils::DateTime& value) { SetDisabledTime(value); return *this;}
    inline EnableFastSnapshotRestoreSuccessItem& WithDisabledTime(Aws::Utils::DateTime&& value) { SetDisabledTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    FastSnapshotRestoreStateCode m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet = false;

    Aws::Utils::DateTime m_enablingTime;
    bool m_enablingTimeHasBeenSet = false;

    Aws::Utils::DateTime m_optimizingTime;
    bool m_optimizingTimeHasBeenSet = false;

    Aws::Utils::DateTime m_enabledTime;
    bool m_enabledTimeHasBeenSet = false;

    Aws::Utils::DateTime m_disablingTime;
    bool m_disablingTimeHasBeenSet = false;

    Aws::Utils::DateTime m_disabledTime;
    bool m_disabledTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
