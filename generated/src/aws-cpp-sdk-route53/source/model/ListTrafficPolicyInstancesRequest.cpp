﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTrafficPolicyInstancesRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;


Aws::String ListTrafficPolicyInstancesRequest::SerializePayload() const
{
  return {};
}

void ListTrafficPolicyInstancesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_hostedZoneIdMarkerHasBeenSet)
    {
      ss << m_hostedZoneIdMarker;
      uri.AddQueryStringParameter("hostedzoneid", ss.str());
      ss.str("");
    }

    if(m_trafficPolicyInstanceNameMarkerHasBeenSet)
    {
      ss << m_trafficPolicyInstanceNameMarker;
      uri.AddQueryStringParameter("trafficpolicyinstancename", ss.str());
      ss.str("");
    }

    if(m_trafficPolicyInstanceTypeMarkerHasBeenSet)
    {
      ss << RRTypeMapper::GetNameForRRType(m_trafficPolicyInstanceTypeMarker);
      uri.AddQueryStringParameter("trafficpolicyinstancetype", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

}

