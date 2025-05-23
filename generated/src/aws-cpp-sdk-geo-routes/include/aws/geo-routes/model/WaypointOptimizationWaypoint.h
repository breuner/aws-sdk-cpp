﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationAccessHours.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/WaypointOptimizationSideOfStreetOptions.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Waypoint between the Origin and Destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationWaypoint">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationWaypoint
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationWaypoint() = default;
    AWS_GEOROUTES_API WaypointOptimizationWaypoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationWaypoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Access hours corresponding to when a waypoint can be visited.</p>
     */
    inline const WaypointOptimizationAccessHours& GetAccessHours() const { return m_accessHours; }
    inline bool AccessHoursHasBeenSet() const { return m_accessHoursHasBeenSet; }
    template<typename AccessHoursT = WaypointOptimizationAccessHours>
    void SetAccessHours(AccessHoursT&& value) { m_accessHoursHasBeenSet = true; m_accessHours = std::forward<AccessHoursT>(value); }
    template<typename AccessHoursT = WaypointOptimizationAccessHours>
    WaypointOptimizationWaypoint& WithAccessHours(AccessHoursT&& value) { SetAccessHours(std::forward<AccessHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Appointment time at the waypoint.</p>
     */
    inline const Aws::String& GetAppointmentTime() const { return m_appointmentTime; }
    inline bool AppointmentTimeHasBeenSet() const { return m_appointmentTimeHasBeenSet; }
    template<typename AppointmentTimeT = Aws::String>
    void SetAppointmentTime(AppointmentTimeT&& value) { m_appointmentTimeHasBeenSet = true; m_appointmentTime = std::forward<AppointmentTimeT>(value); }
    template<typename AppointmentTimeT = Aws::String>
    WaypointOptimizationWaypoint& WithAppointmentTime(AppointmentTimeT&& value) { SetAppointmentTime(std::forward<AppointmentTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Constraint defining what waypoints are to be visited after this waypoint.</p>
     */
    inline const Aws::Vector<int>& GetBefore() const { return m_before; }
    inline bool BeforeHasBeenSet() const { return m_beforeHasBeenSet; }
    template<typename BeforeT = Aws::Vector<int>>
    void SetBefore(BeforeT&& value) { m_beforeHasBeenSet = true; m_before = std::forward<BeforeT>(value); }
    template<typename BeforeT = Aws::Vector<int>>
    WaypointOptimizationWaypoint& WithBefore(BeforeT&& value) { SetBefore(std::forward<BeforeT>(value)); return *this;}
    inline WaypointOptimizationWaypoint& AddBefore(int value) { m_beforeHasBeenSet = true; m_before.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>GPS Heading at the position.</p>
     */
    inline double GetHeading() const { return m_heading; }
    inline bool HeadingHasBeenSet() const { return m_headingHasBeenSet; }
    inline void SetHeading(double value) { m_headingHasBeenSet = true; m_heading = value; }
    inline WaypointOptimizationWaypoint& WithHeading(double value) { SetHeading(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waypoint Id.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WaypointOptimizationWaypoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    WaypointOptimizationWaypoint& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline WaypointOptimizationWaypoint& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Service time spent at the waypoint. At an appointment, the service time
     * should be the appointment duration.</p> <p> <b>Unit</b>: <code>seconds</code>
     * </p>
     */
    inline long long GetServiceDuration() const { return m_serviceDuration; }
    inline bool ServiceDurationHasBeenSet() const { return m_serviceDurationHasBeenSet; }
    inline void SetServiceDuration(long long value) { m_serviceDurationHasBeenSet = true; m_serviceDuration = value; }
    inline WaypointOptimizationWaypoint& WithServiceDuration(long long value) { SetServiceDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure matching the provided position to a side of the
     * street.</p>
     */
    inline const WaypointOptimizationSideOfStreetOptions& GetSideOfStreet() const { return m_sideOfStreet; }
    inline bool SideOfStreetHasBeenSet() const { return m_sideOfStreetHasBeenSet; }
    template<typename SideOfStreetT = WaypointOptimizationSideOfStreetOptions>
    void SetSideOfStreet(SideOfStreetT&& value) { m_sideOfStreetHasBeenSet = true; m_sideOfStreet = std::forward<SideOfStreetT>(value); }
    template<typename SideOfStreetT = WaypointOptimizationSideOfStreetOptions>
    WaypointOptimizationWaypoint& WithSideOfStreet(SideOfStreetT&& value) { SetSideOfStreet(std::forward<SideOfStreetT>(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationAccessHours m_accessHours;
    bool m_accessHoursHasBeenSet = false;

    Aws::String m_appointmentTime;
    bool m_appointmentTimeHasBeenSet = false;

    Aws::Vector<int> m_before;
    bool m_beforeHasBeenSet = false;

    double m_heading{0.0};
    bool m_headingHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    long long m_serviceDuration{0};
    bool m_serviceDurationHasBeenSet = false;

    WaypointOptimizationSideOfStreetOptions m_sideOfStreet;
    bool m_sideOfStreetHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
