﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class GetVehicleStatusRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API GetVehicleStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVehicleStatus"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. This parameter is only supported for resources of type
     * <code>CAMPAIGN</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetVehicleStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetVehicleStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetVehicleStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return, between 1 and 100, inclusive. This
     * parameter is only supported for resources of type <code>CAMPAIGN</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetVehicleStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the vehicle to retrieve information about. </p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }
    inline GetVehicleStatusRequest& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline GetVehicleStatusRequest& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline GetVehicleStatusRequest& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
