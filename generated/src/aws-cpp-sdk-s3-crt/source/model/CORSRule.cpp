﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/CORSRule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

CORSRule::CORSRule(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CORSRule& CORSRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode iDNode = resultNode.FirstChild("ID");
    if(!iDNode.IsNull())
    {
      m_iD = Aws::Utils::Xml::DecodeEscapedXmlText(iDNode.GetText());
      m_iDHasBeenSet = true;
    }
    XmlNode allowedHeadersNode = resultNode.FirstChild("AllowedHeader");
    if(!allowedHeadersNode.IsNull())
    {
      XmlNode allowedHeaderMember = allowedHeadersNode;
      m_allowedHeadersHasBeenSet = !allowedHeaderMember.IsNull();
      while(!allowedHeaderMember.IsNull())
      {
        m_allowedHeaders.push_back(allowedHeaderMember.GetText());
        allowedHeaderMember = allowedHeaderMember.NextNode("AllowedHeader");
      }

      m_allowedHeadersHasBeenSet = true;
    }
    XmlNode allowedMethodsNode = resultNode.FirstChild("AllowedMethod");
    if(!allowedMethodsNode.IsNull())
    {
      XmlNode allowedMethodMember = allowedMethodsNode;
      m_allowedMethodsHasBeenSet = !allowedMethodMember.IsNull();
      while(!allowedMethodMember.IsNull())
      {
        m_allowedMethods.push_back(allowedMethodMember.GetText());
        allowedMethodMember = allowedMethodMember.NextNode("AllowedMethod");
      }

      m_allowedMethodsHasBeenSet = true;
    }
    XmlNode allowedOriginsNode = resultNode.FirstChild("AllowedOrigin");
    if(!allowedOriginsNode.IsNull())
    {
      XmlNode allowedOriginMember = allowedOriginsNode;
      m_allowedOriginsHasBeenSet = !allowedOriginMember.IsNull();
      while(!allowedOriginMember.IsNull())
      {
        m_allowedOrigins.push_back(allowedOriginMember.GetText());
        allowedOriginMember = allowedOriginMember.NextNode("AllowedOrigin");
      }

      m_allowedOriginsHasBeenSet = true;
    }
    XmlNode exposeHeadersNode = resultNode.FirstChild("ExposeHeader");
    if(!exposeHeadersNode.IsNull())
    {
      XmlNode exposeHeaderMember = exposeHeadersNode;
      m_exposeHeadersHasBeenSet = !exposeHeaderMember.IsNull();
      while(!exposeHeaderMember.IsNull())
      {
        m_exposeHeaders.push_back(exposeHeaderMember.GetText());
        exposeHeaderMember = exposeHeaderMember.NextNode("ExposeHeader");
      }

      m_exposeHeadersHasBeenSet = true;
    }
    XmlNode maxAgeSecondsNode = resultNode.FirstChild("MaxAgeSeconds");
    if(!maxAgeSecondsNode.IsNull())
    {
      m_maxAgeSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxAgeSecondsNode.GetText()).c_str()).c_str());
      m_maxAgeSecondsHasBeenSet = true;
    }
  }

  return *this;
}

void CORSRule::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_iDHasBeenSet)
  {
   XmlNode iDNode = parentNode.CreateChildElement("ID");
   iDNode.SetText(m_iD);
  }

  if(m_allowedHeadersHasBeenSet)
  {
   for(const auto& item : m_allowedHeaders)
   {
     XmlNode allowedHeadersNode = parentNode.CreateChildElement("AllowedHeader");
     allowedHeadersNode.SetText(item);
   }
  }

  if(m_allowedMethodsHasBeenSet)
  {
   for(const auto& item : m_allowedMethods)
   {
     XmlNode allowedMethodsNode = parentNode.CreateChildElement("AllowedMethod");
     allowedMethodsNode.SetText(item);
   }
  }

  if(m_allowedOriginsHasBeenSet)
  {
   for(const auto& item : m_allowedOrigins)
   {
     XmlNode allowedOriginsNode = parentNode.CreateChildElement("AllowedOrigin");
     allowedOriginsNode.SetText(item);
   }
  }

  if(m_exposeHeadersHasBeenSet)
  {
   for(const auto& item : m_exposeHeaders)
   {
     XmlNode exposeHeadersNode = parentNode.CreateChildElement("ExposeHeader");
     exposeHeadersNode.SetText(item);
   }
  }

  if(m_maxAgeSecondsHasBeenSet)
  {
   XmlNode maxAgeSecondsNode = parentNode.CreateChildElement("MaxAgeSeconds");
   ss << m_maxAgeSeconds;
   maxAgeSecondsNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
