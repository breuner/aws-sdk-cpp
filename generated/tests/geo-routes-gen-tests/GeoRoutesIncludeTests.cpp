/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/geo-routes/GeoRoutesClient.h>
#include <aws/geo-routes/GeoRoutesEndpointProvider.h>
#include <aws/geo-routes/GeoRoutesEndpointRules.h>
#include <aws/geo-routes/GeoRoutesErrorMarshaller.h>
#include <aws/geo-routes/GeoRoutesErrors.h>
#include <aws/geo-routes/GeoRoutesRequest.h>
#include <aws/geo-routes/GeoRoutesServiceClientModel.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/CalculateIsolinesRequest.h>
#include <aws/geo-routes/model/CalculateIsolinesResult.h>
#include <aws/geo-routes/model/CalculateRouteMatrixRequest.h>
#include <aws/geo-routes/model/CalculateRouteMatrixResult.h>
#include <aws/geo-routes/model/CalculateRoutesRequest.h>
#include <aws/geo-routes/model/CalculateRoutesResult.h>
#include <aws/geo-routes/model/Circle.h>
#include <aws/geo-routes/model/Corridor.h>
#include <aws/geo-routes/model/DayOfWeek.h>
#include <aws/geo-routes/model/GeometryFormat.h>
#include <aws/geo-routes/model/Isoline.h>
#include <aws/geo-routes/model/IsolineAllowOptions.h>
#include <aws/geo-routes/model/IsolineAvoidanceArea.h>
#include <aws/geo-routes/model/IsolineAvoidanceAreaGeometry.h>
#include <aws/geo-routes/model/IsolineAvoidanceOptions.h>
#include <aws/geo-routes/model/IsolineAvoidanceZoneCategory.h>
#include <aws/geo-routes/model/IsolineCarOptions.h>
#include <aws/geo-routes/model/IsolineConnection.h>
#include <aws/geo-routes/model/IsolineConnectionGeometry.h>
#include <aws/geo-routes/model/IsolineDestinationOptions.h>
#include <aws/geo-routes/model/IsolineEngineType.h>
#include <aws/geo-routes/model/IsolineGranularityOptions.h>
#include <aws/geo-routes/model/IsolineHazardousCargoType.h>
#include <aws/geo-routes/model/IsolineMatchingOptions.h>
#include <aws/geo-routes/model/IsolineOptimizationObjective.h>
#include <aws/geo-routes/model/IsolineOriginOptions.h>
#include <aws/geo-routes/model/IsolineScooterOptions.h>
#include <aws/geo-routes/model/IsolineShapeGeometry.h>
#include <aws/geo-routes/model/IsolineSideOfStreetOptions.h>
#include <aws/geo-routes/model/IsolineThresholds.h>
#include <aws/geo-routes/model/IsolineTrafficOptions.h>
#include <aws/geo-routes/model/IsolineTrailerOptions.h>
#include <aws/geo-routes/model/IsolineTravelMode.h>
#include <aws/geo-routes/model/IsolineTravelModeOptions.h>
#include <aws/geo-routes/model/IsolineTruckOptions.h>
#include <aws/geo-routes/model/IsolineTruckType.h>
#include <aws/geo-routes/model/IsolineVehicleLicensePlate.h>
#include <aws/geo-routes/model/IsolineZoneCategory.h>
#include <aws/geo-routes/model/LocalizedString.h>
#include <aws/geo-routes/model/MatchingStrategy.h>
#include <aws/geo-routes/model/MeasurementSystem.h>
#include <aws/geo-routes/model/OptimizeWaypointsRequest.h>
#include <aws/geo-routes/model/OptimizeWaypointsResult.h>
#include <aws/geo-routes/model/PolylineCorridor.h>
#include <aws/geo-routes/model/RoadSnapHazardousCargoType.h>
#include <aws/geo-routes/model/RoadSnapNotice.h>
#include <aws/geo-routes/model/RoadSnapNoticeCode.h>
#include <aws/geo-routes/model/RoadSnapSnappedGeometry.h>
#include <aws/geo-routes/model/RoadSnapSnappedTracePoint.h>
#include <aws/geo-routes/model/RoadSnapTracePoint.h>
#include <aws/geo-routes/model/RoadSnapTrailerOptions.h>
#include <aws/geo-routes/model/RoadSnapTravelMode.h>
#include <aws/geo-routes/model/RoadSnapTravelModeOptions.h>
#include <aws/geo-routes/model/RoadSnapTruckOptions.h>
#include <aws/geo-routes/model/Route.h>
#include <aws/geo-routes/model/RouteAllowOptions.h>
#include <aws/geo-routes/model/RouteAvoidanceArea.h>
#include <aws/geo-routes/model/RouteAvoidanceAreaGeometry.h>
#include <aws/geo-routes/model/RouteAvoidanceOptions.h>
#include <aws/geo-routes/model/RouteAvoidanceZoneCategory.h>
#include <aws/geo-routes/model/RouteCarOptions.h>
#include <aws/geo-routes/model/RouteContinueHighwayStepDetails.h>
#include <aws/geo-routes/model/RouteContinueStepDetails.h>
#include <aws/geo-routes/model/RouteDestinationOptions.h>
#include <aws/geo-routes/model/RouteDirection.h>
#include <aws/geo-routes/model/RouteDriverOptions.h>
#include <aws/geo-routes/model/RouteDriverScheduleInterval.h>
#include <aws/geo-routes/model/RouteEmissionType.h>
#include <aws/geo-routes/model/RouteEngineType.h>
#include <aws/geo-routes/model/RouteEnterHighwayStepDetails.h>
#include <aws/geo-routes/model/RouteExclusionOptions.h>
#include <aws/geo-routes/model/RouteExitStepDetails.h>
#include <aws/geo-routes/model/RouteFerryAfterTravelStep.h>
#include <aws/geo-routes/model/RouteFerryAfterTravelStepType.h>
#include <aws/geo-routes/model/RouteFerryArrival.h>
#include <aws/geo-routes/model/RouteFerryBeforeTravelStep.h>
#include <aws/geo-routes/model/RouteFerryBeforeTravelStepType.h>
#include <aws/geo-routes/model/RouteFerryDeparture.h>
#include <aws/geo-routes/model/RouteFerryLegDetails.h>
#include <aws/geo-routes/model/RouteFerryNotice.h>
#include <aws/geo-routes/model/RouteFerryNoticeCode.h>
#include <aws/geo-routes/model/RouteFerryOverviewSummary.h>
#include <aws/geo-routes/model/RouteFerryPlace.h>
#include <aws/geo-routes/model/RouteFerrySpan.h>
#include <aws/geo-routes/model/RouteFerrySummary.h>
#include <aws/geo-routes/model/RouteFerryTravelOnlySummary.h>
#include <aws/geo-routes/model/RouteFerryTravelStep.h>
#include <aws/geo-routes/model/RouteFerryTravelStepType.h>
#include <aws/geo-routes/model/RouteHazardousCargoType.h>
#include <aws/geo-routes/model/RouteKeepStepDetails.h>
#include <aws/geo-routes/model/RouteLeg.h>
#include <aws/geo-routes/model/RouteLegAdditionalFeature.h>
#include <aws/geo-routes/model/RouteLegGeometry.h>
#include <aws/geo-routes/model/RouteLegTravelMode.h>
#include <aws/geo-routes/model/RouteLegType.h>
#include <aws/geo-routes/model/RouteMajorRoadLabel.h>
#include <aws/geo-routes/model/RouteMatchingOptions.h>
#include <aws/geo-routes/model/RouteMatrixAllowOptions.h>
#include <aws/geo-routes/model/RouteMatrixAutoCircle.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceArea.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceAreaGeometry.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceOptions.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceZoneCategory.h>
#include <aws/geo-routes/model/RouteMatrixBoundary.h>
#include <aws/geo-routes/model/RouteMatrixBoundaryGeometry.h>
#include <aws/geo-routes/model/RouteMatrixCarOptions.h>
#include <aws/geo-routes/model/RouteMatrixDestination.h>
#include <aws/geo-routes/model/RouteMatrixDestinationOptions.h>
#include <aws/geo-routes/model/RouteMatrixEntry.h>
#include <aws/geo-routes/model/RouteMatrixErrorCode.h>
#include <aws/geo-routes/model/RouteMatrixExclusionOptions.h>
#include <aws/geo-routes/model/RouteMatrixHazardousCargoType.h>
#include <aws/geo-routes/model/RouteMatrixMatchingOptions.h>
#include <aws/geo-routes/model/RouteMatrixOrigin.h>
#include <aws/geo-routes/model/RouteMatrixOriginOptions.h>
#include <aws/geo-routes/model/RouteMatrixScooterOptions.h>
#include <aws/geo-routes/model/RouteMatrixSideOfStreetOptions.h>
#include <aws/geo-routes/model/RouteMatrixTrafficOptions.h>
#include <aws/geo-routes/model/RouteMatrixTrailerOptions.h>
#include <aws/geo-routes/model/RouteMatrixTravelMode.h>
#include <aws/geo-routes/model/RouteMatrixTravelModeOptions.h>
#include <aws/geo-routes/model/RouteMatrixTruckOptions.h>
#include <aws/geo-routes/model/RouteMatrixTruckType.h>
#include <aws/geo-routes/model/RouteMatrixVehicleLicensePlate.h>
#include <aws/geo-routes/model/RouteMatrixZoneCategory.h>
#include <aws/geo-routes/model/RouteNoticeDetailRange.h>
#include <aws/geo-routes/model/RouteNoticeImpact.h>
#include <aws/geo-routes/model/RouteNumber.h>
#include <aws/geo-routes/model/RouteOriginOptions.h>
#include <aws/geo-routes/model/RoutePassThroughPlace.h>
#include <aws/geo-routes/model/RoutePassThroughWaypoint.h>
#include <aws/geo-routes/model/RoutePedestrianArrival.h>
#include <aws/geo-routes/model/RoutePedestrianDeparture.h>
#include <aws/geo-routes/model/RoutePedestrianLegDetails.h>
#include <aws/geo-routes/model/RoutePedestrianNotice.h>
#include <aws/geo-routes/model/RoutePedestrianNoticeCode.h>
#include <aws/geo-routes/model/RoutePedestrianOptions.h>
#include <aws/geo-routes/model/RoutePedestrianOverviewSummary.h>
#include <aws/geo-routes/model/RoutePedestrianPlace.h>
#include <aws/geo-routes/model/RoutePedestrianSpan.h>
#include <aws/geo-routes/model/RoutePedestrianSummary.h>
#include <aws/geo-routes/model/RoutePedestrianTravelOnlySummary.h>
#include <aws/geo-routes/model/RoutePedestrianTravelStep.h>
#include <aws/geo-routes/model/RoutePedestrianTravelStepType.h>
#include <aws/geo-routes/model/RouteRampStepDetails.h>
#include <aws/geo-routes/model/RouteResponseNotice.h>
#include <aws/geo-routes/model/RouteResponseNoticeCode.h>
#include <aws/geo-routes/model/RouteRoad.h>
#include <aws/geo-routes/model/RouteRoadType.h>
#include <aws/geo-routes/model/RouteRoundaboutEnterStepDetails.h>
#include <aws/geo-routes/model/RouteRoundaboutExitStepDetails.h>
#include <aws/geo-routes/model/RouteRoundaboutPassStepDetails.h>
#include <aws/geo-routes/model/RouteScooterOptions.h>
#include <aws/geo-routes/model/RouteSideOfStreet.h>
#include <aws/geo-routes/model/RouteSideOfStreetOptions.h>
#include <aws/geo-routes/model/RouteSignpost.h>
#include <aws/geo-routes/model/RouteSignpostLabel.h>
#include <aws/geo-routes/model/RouteSpanAdditionalFeature.h>
#include <aws/geo-routes/model/RouteSpanCarAccessAttribute.h>
#include <aws/geo-routes/model/RouteSpanDynamicSpeedDetails.h>
#include <aws/geo-routes/model/RouteSpanGateAttribute.h>
#include <aws/geo-routes/model/RouteSpanPedestrianAccessAttribute.h>
#include <aws/geo-routes/model/RouteSpanRailwayCrossingAttribute.h>
#include <aws/geo-routes/model/RouteSpanRoadAttribute.h>
#include <aws/geo-routes/model/RouteSpanScooterAccessAttribute.h>
#include <aws/geo-routes/model/RouteSpanSpeedLimitDetails.h>
#include <aws/geo-routes/model/RouteSpanTruckAccessAttribute.h>
#include <aws/geo-routes/model/RouteSteeringDirection.h>
#include <aws/geo-routes/model/RouteSummary.h>
#include <aws/geo-routes/model/RouteToll.h>
#include <aws/geo-routes/model/RouteTollOptions.h>
#include <aws/geo-routes/model/RouteTollPass.h>
#include <aws/geo-routes/model/RouteTollPassValidityPeriod.h>
#include <aws/geo-routes/model/RouteTollPassValidityPeriodType.h>
#include <aws/geo-routes/model/RouteTollPaymentMethod.h>
#include <aws/geo-routes/model/RouteTollPaymentSite.h>
#include <aws/geo-routes/model/RouteTollPrice.h>
#include <aws/geo-routes/model/RouteTollPriceSummary.h>
#include <aws/geo-routes/model/RouteTollPriceValueRange.h>
#include <aws/geo-routes/model/RouteTollRate.h>
#include <aws/geo-routes/model/RouteTollSummary.h>
#include <aws/geo-routes/model/RouteTollSystem.h>
#include <aws/geo-routes/model/RouteTollVehicleCategory.h>
#include <aws/geo-routes/model/RouteTrafficOptions.h>
#include <aws/geo-routes/model/RouteTrailerOptions.h>
#include <aws/geo-routes/model/RouteTransponder.h>
#include <aws/geo-routes/model/RouteTravelMode.h>
#include <aws/geo-routes/model/RouteTravelModeOptions.h>
#include <aws/geo-routes/model/RouteTravelStepType.h>
#include <aws/geo-routes/model/RouteTruckOptions.h>
#include <aws/geo-routes/model/RouteTruckType.h>
#include <aws/geo-routes/model/RouteTurnIntensity.h>
#include <aws/geo-routes/model/RouteTurnStepDetails.h>
#include <aws/geo-routes/model/RouteUTurnStepDetails.h>
#include <aws/geo-routes/model/RouteVehicleArrival.h>
#include <aws/geo-routes/model/RouteVehicleDeparture.h>
#include <aws/geo-routes/model/RouteVehicleIncident.h>
#include <aws/geo-routes/model/RouteVehicleIncidentSeverity.h>
#include <aws/geo-routes/model/RouteVehicleIncidentType.h>
#include <aws/geo-routes/model/RouteVehicleLegDetails.h>
#include <aws/geo-routes/model/RouteVehicleLicensePlate.h>
#include <aws/geo-routes/model/RouteVehicleNotice.h>
#include <aws/geo-routes/model/RouteVehicleNoticeCode.h>
#include <aws/geo-routes/model/RouteVehicleNoticeDetail.h>
#include <aws/geo-routes/model/RouteVehicleOverviewSummary.h>
#include <aws/geo-routes/model/RouteVehiclePlace.h>
#include <aws/geo-routes/model/RouteVehicleSpan.h>
#include <aws/geo-routes/model/RouteVehicleSummary.h>
#include <aws/geo-routes/model/RouteVehicleTravelOnlySummary.h>
#include <aws/geo-routes/model/RouteVehicleTravelStep.h>
#include <aws/geo-routes/model/RouteVehicleTravelStepType.h>
#include <aws/geo-routes/model/RouteViolatedConstraints.h>
#include <aws/geo-routes/model/RouteWaypoint.h>
#include <aws/geo-routes/model/RouteWeightConstraint.h>
#include <aws/geo-routes/model/RouteWeightConstraintType.h>
#include <aws/geo-routes/model/RouteZone.h>
#include <aws/geo-routes/model/RouteZoneCategory.h>
#include <aws/geo-routes/model/RoutingObjective.h>
#include <aws/geo-routes/model/SideOfStreetMatchingStrategy.h>
#include <aws/geo-routes/model/SnapToRoadsRequest.h>
#include <aws/geo-routes/model/SnapToRoadsResult.h>
#include <aws/geo-routes/model/TrafficUsage.h>
#include <aws/geo-routes/model/ValidationException.h>
#include <aws/geo-routes/model/ValidationExceptionField.h>
#include <aws/geo-routes/model/ValidationExceptionReason.h>
#include <aws/geo-routes/model/WaypointOptimizationAccessHours.h>
#include <aws/geo-routes/model/WaypointOptimizationAccessHoursEntry.h>
#include <aws/geo-routes/model/WaypointOptimizationAvoidanceArea.h>
#include <aws/geo-routes/model/WaypointOptimizationAvoidanceAreaGeometry.h>
#include <aws/geo-routes/model/WaypointOptimizationAvoidanceOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationClusteringAlgorithm.h>
#include <aws/geo-routes/model/WaypointOptimizationClusteringOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationConnection.h>
#include <aws/geo-routes/model/WaypointOptimizationConstraint.h>
#include <aws/geo-routes/model/WaypointOptimizationDestinationOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationDriverOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationDrivingDistanceOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationExclusionOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationFailedConstraint.h>
#include <aws/geo-routes/model/WaypointOptimizationHazardousCargoType.h>
#include <aws/geo-routes/model/WaypointOptimizationImpedingWaypoint.h>
#include <aws/geo-routes/model/WaypointOptimizationOptimizedWaypoint.h>
#include <aws/geo-routes/model/WaypointOptimizationOriginOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationPedestrianOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationRestCycleDurations.h>
#include <aws/geo-routes/model/WaypointOptimizationRestCycles.h>
#include <aws/geo-routes/model/WaypointOptimizationRestProfile.h>
#include <aws/geo-routes/model/WaypointOptimizationSequencingObjective.h>
#include <aws/geo-routes/model/WaypointOptimizationServiceTimeTreatment.h>
#include <aws/geo-routes/model/WaypointOptimizationSideOfStreetOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTimeBreakdown.h>
#include <aws/geo-routes/model/WaypointOptimizationTrafficOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTrailerOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTravelMode.h>
#include <aws/geo-routes/model/WaypointOptimizationTravelModeOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTruckOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTruckType.h>
#include <aws/geo-routes/model/WaypointOptimizationWaypoint.h>
#include <aws/geo-routes/model/WeightPerAxleGroup.h>

using GeoRoutesIncludeTest = ::testing::Test;

TEST_F(GeoRoutesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::GeoRoutes::GeoRoutesClient>("GeoRoutesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
