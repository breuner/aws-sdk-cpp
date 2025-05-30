﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DeleteFleetLocationsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DeleteFleetLocationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFleetLocations"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to delete locations for. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    DeleteFleetLocationsRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of fleet locations to delete. Specify locations in the form of an
     * Amazon Web Services Region code, such as <code>us-west-2</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    DeleteFleetLocationsRequest& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = Aws::String>
    DeleteFleetLocationsRequest& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
