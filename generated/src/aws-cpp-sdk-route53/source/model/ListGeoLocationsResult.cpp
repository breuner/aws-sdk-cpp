﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListGeoLocationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListGeoLocationsResult::ListGeoLocationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListGeoLocationsResult& ListGeoLocationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode geoLocationDetailsListNode = resultNode.FirstChild("GeoLocationDetailsList");
    if(!geoLocationDetailsListNode.IsNull())
    {
      XmlNode geoLocationDetailsListMember = geoLocationDetailsListNode.FirstChild("GeoLocationDetails");
      m_geoLocationDetailsListHasBeenSet = !geoLocationDetailsListMember.IsNull();
      while(!geoLocationDetailsListMember.IsNull())
      {
        m_geoLocationDetailsList.push_back(geoLocationDetailsListMember);
        geoLocationDetailsListMember = geoLocationDetailsListMember.NextNode("GeoLocationDetails");
      }

      m_geoLocationDetailsListHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode nextContinentCodeNode = resultNode.FirstChild("NextContinentCode");
    if(!nextContinentCodeNode.IsNull())
    {
      m_nextContinentCode = Aws::Utils::Xml::DecodeEscapedXmlText(nextContinentCodeNode.GetText());
      m_nextContinentCodeHasBeenSet = true;
    }
    XmlNode nextCountryCodeNode = resultNode.FirstChild("NextCountryCode");
    if(!nextCountryCodeNode.IsNull())
    {
      m_nextCountryCode = Aws::Utils::Xml::DecodeEscapedXmlText(nextCountryCodeNode.GetText());
      m_nextCountryCodeHasBeenSet = true;
    }
    XmlNode nextSubdivisionCodeNode = resultNode.FirstChild("NextSubdivisionCode");
    if(!nextSubdivisionCodeNode.IsNull())
    {
      m_nextSubdivisionCode = Aws::Utils::Xml::DecodeEscapedXmlText(nextSubdivisionCodeNode.GetText());
      m_nextSubdivisionCodeHasBeenSet = true;
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
      m_maxItemsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
