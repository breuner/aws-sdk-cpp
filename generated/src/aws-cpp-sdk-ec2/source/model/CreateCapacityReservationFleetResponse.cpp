﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateCapacityReservationFleetResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateCapacityReservationFleetResponse::CreateCapacityReservationFleetResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateCapacityReservationFleetResponse& CreateCapacityReservationFleetResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateCapacityReservationFleetResponse"))
  {
    resultNode = rootNode.FirstChild("CreateCapacityReservationFleetResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationFleetIdNode = resultNode.FirstChild("capacityReservationFleetId");
    if(!capacityReservationFleetIdNode.IsNull())
    {
      m_capacityReservationFleetId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationFleetIdNode.GetText());
      m_capacityReservationFleetIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = CapacityReservationFleetStateMapper::GetCapacityReservationFleetStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode totalTargetCapacityNode = resultNode.FirstChild("totalTargetCapacity");
    if(!totalTargetCapacityNode.IsNull())
    {
      m_totalTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalTargetCapacityNode.GetText()).c_str()).c_str());
      m_totalTargetCapacityHasBeenSet = true;
    }
    XmlNode totalFulfilledCapacityNode = resultNode.FirstChild("totalFulfilledCapacity");
    if(!totalFulfilledCapacityNode.IsNull())
    {
      m_totalFulfilledCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalFulfilledCapacityNode.GetText()).c_str()).c_str());
      m_totalFulfilledCapacityHasBeenSet = true;
    }
    XmlNode instanceMatchCriteriaNode = resultNode.FirstChild("instanceMatchCriteria");
    if(!instanceMatchCriteriaNode.IsNull())
    {
      m_instanceMatchCriteria = FleetInstanceMatchCriteriaMapper::GetFleetInstanceMatchCriteriaForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceMatchCriteriaNode.GetText()).c_str()));
      m_instanceMatchCriteriaHasBeenSet = true;
    }
    XmlNode allocationStrategyNode = resultNode.FirstChild("allocationStrategy");
    if(!allocationStrategyNode.IsNull())
    {
      m_allocationStrategy = Aws::Utils::Xml::DecodeEscapedXmlText(allocationStrategyNode.GetText());
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = FleetCapacityReservationTenancyMapper::GetFleetCapacityReservationTenancyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenancyNode.GetText()).c_str()));
      m_tenancyHasBeenSet = true;
    }
    XmlNode fleetCapacityReservationsNode = resultNode.FirstChild("fleetCapacityReservationSet");
    if(!fleetCapacityReservationsNode.IsNull())
    {
      XmlNode fleetCapacityReservationsMember = fleetCapacityReservationsNode.FirstChild("item");
      m_fleetCapacityReservationsHasBeenSet = !fleetCapacityReservationsMember.IsNull();
      while(!fleetCapacityReservationsMember.IsNull())
      {
        m_fleetCapacityReservations.push_back(fleetCapacityReservationsMember);
        fleetCapacityReservationsMember = fleetCapacityReservationsMember.NextNode("item");
      }

      m_fleetCapacityReservationsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateCapacityReservationFleetResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
