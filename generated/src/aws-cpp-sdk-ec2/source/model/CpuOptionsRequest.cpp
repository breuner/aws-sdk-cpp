﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CpuOptionsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

CpuOptionsRequest::CpuOptionsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CpuOptionsRequest& CpuOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode coreCountNode = resultNode.FirstChild("CoreCount");
    if(!coreCountNode.IsNull())
    {
      m_coreCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(coreCountNode.GetText()).c_str()).c_str());
      m_coreCountHasBeenSet = true;
    }
    XmlNode threadsPerCoreNode = resultNode.FirstChild("ThreadsPerCore");
    if(!threadsPerCoreNode.IsNull())
    {
      m_threadsPerCore = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(threadsPerCoreNode.GetText()).c_str()).c_str());
      m_threadsPerCoreHasBeenSet = true;
    }
    XmlNode amdSevSnpNode = resultNode.FirstChild("AmdSevSnp");
    if(!amdSevSnpNode.IsNull())
    {
      m_amdSevSnp = AmdSevSnpSpecificationMapper::GetAmdSevSnpSpecificationForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amdSevSnpNode.GetText()).c_str()));
      m_amdSevSnpHasBeenSet = true;
    }
  }

  return *this;
}

void CpuOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_coreCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoreCount=" << m_coreCount << "&";
  }

  if(m_threadsPerCoreHasBeenSet)
  {
      oStream << location << index << locationValue << ".ThreadsPerCore=" << m_threadsPerCore << "&";
  }

  if(m_amdSevSnpHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmdSevSnp=" << StringUtils::URLEncode(AmdSevSnpSpecificationMapper::GetNameForAmdSevSnpSpecification(m_amdSevSnp)) << "&";
  }

}

void CpuOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_coreCountHasBeenSet)
  {
      oStream << location << ".CoreCount=" << m_coreCount << "&";
  }
  if(m_threadsPerCoreHasBeenSet)
  {
      oStream << location << ".ThreadsPerCore=" << m_threadsPerCore << "&";
  }
  if(m_amdSevSnpHasBeenSet)
  {
      oStream << location << ".AmdSevSnp=" << StringUtils::URLEncode(AmdSevSnpSpecificationMapper::GetNameForAmdSevSnpSpecification(m_amdSevSnp)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
