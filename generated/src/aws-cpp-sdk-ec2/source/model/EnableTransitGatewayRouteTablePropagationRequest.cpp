﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableTransitGatewayRouteTablePropagationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String EnableTransitGatewayRouteTablePropagationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableTransitGatewayRouteTablePropagation&";
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
    ss << "TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
    ss << "TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  EnableTransitGatewayRouteTablePropagationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
