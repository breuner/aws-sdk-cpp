﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListHostedZonesRequest.h>
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


Aws::String ListHostedZonesRequest::SerializePayload() const
{
  return {};
}

void ListHostedZonesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

    if(m_delegationSetIdHasBeenSet)
    {
      ss << m_delegationSetId;
      uri.AddQueryStringParameter("delegationsetid", ss.str());
      ss.str("");
    }

    if(m_hostedZoneTypeHasBeenSet)
    {
      ss << HostedZoneTypeMapper::GetNameForHostedZoneType(m_hostedZoneType);
      uri.AddQueryStringParameter("hostedzonetype", ss.str());
      ss.str("");
    }

}

