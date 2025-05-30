﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ConfigurationOptionDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ConfigurationOptionDescription::ConfigurationOptionDescription(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ConfigurationOptionDescription& ConfigurationOptionDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceNode.GetText());
      m_namespaceHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode changeSeverityNode = resultNode.FirstChild("ChangeSeverity");
    if(!changeSeverityNode.IsNull())
    {
      m_changeSeverity = Aws::Utils::Xml::DecodeEscapedXmlText(changeSeverityNode.GetText());
      m_changeSeverityHasBeenSet = true;
    }
    XmlNode userDefinedNode = resultNode.FirstChild("UserDefined");
    if(!userDefinedNode.IsNull())
    {
      m_userDefined = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(userDefinedNode.GetText()).c_str()).c_str());
      m_userDefinedHasBeenSet = true;
    }
    XmlNode valueTypeNode = resultNode.FirstChild("ValueType");
    if(!valueTypeNode.IsNull())
    {
      m_valueType = ConfigurationOptionValueTypeMapper::GetConfigurationOptionValueTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(valueTypeNode.GetText()).c_str()));
      m_valueTypeHasBeenSet = true;
    }
    XmlNode valueOptionsNode = resultNode.FirstChild("ValueOptions");
    if(!valueOptionsNode.IsNull())
    {
      XmlNode valueOptionsMember = valueOptionsNode.FirstChild("member");
      m_valueOptionsHasBeenSet = !valueOptionsMember.IsNull();
      while(!valueOptionsMember.IsNull())
      {
        m_valueOptions.push_back(valueOptionsMember.GetText());
        valueOptionsMember = valueOptionsMember.NextNode("member");
      }

      m_valueOptionsHasBeenSet = true;
    }
    XmlNode minValueNode = resultNode.FirstChild("MinValue");
    if(!minValueNode.IsNull())
    {
      m_minValue = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minValueNode.GetText()).c_str()).c_str());
      m_minValueHasBeenSet = true;
    }
    XmlNode maxValueNode = resultNode.FirstChild("MaxValue");
    if(!maxValueNode.IsNull())
    {
      m_maxValue = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxValueNode.GetText()).c_str()).c_str());
      m_maxValueHasBeenSet = true;
    }
    XmlNode maxLengthNode = resultNode.FirstChild("MaxLength");
    if(!maxLengthNode.IsNull())
    {
      m_maxLength = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxLengthNode.GetText()).c_str()).c_str());
      m_maxLengthHasBeenSet = true;
    }
    XmlNode regexNode = resultNode.FirstChild("Regex");
    if(!regexNode.IsNull())
    {
      m_regex = regexNode;
      m_regexHasBeenSet = true;
    }
  }

  return *this;
}

void ConfigurationOptionDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_changeSeverityHasBeenSet)
  {
      oStream << location << index << locationValue << ".ChangeSeverity=" << StringUtils::URLEncode(m_changeSeverity.c_str()) << "&";
  }

  if(m_userDefinedHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserDefined=" << std::boolalpha << m_userDefined << "&";
  }

  if(m_valueTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValueType=" << StringUtils::URLEncode(ConfigurationOptionValueTypeMapper::GetNameForConfigurationOptionValueType(m_valueType)) << "&";
  }

  if(m_valueOptionsHasBeenSet)
  {
      unsigned valueOptionsIdx = 1;
      for(auto& item : m_valueOptions)
      {
        oStream << location << index << locationValue << ".ValueOptions.member." << valueOptionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_minValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinValue=" << m_minValue << "&";
  }

  if(m_maxValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxValue=" << m_maxValue << "&";
  }

  if(m_maxLengthHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxLength=" << m_maxLength << "&";
  }

  if(m_regexHasBeenSet)
  {
      Aws::StringStream regexLocationAndMemberSs;
      regexLocationAndMemberSs << location << index << locationValue << ".Regex";
      m_regex.OutputToStream(oStream, regexLocationAndMemberSs.str().c_str());
  }

}

void ConfigurationOptionDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_changeSeverityHasBeenSet)
  {
      oStream << location << ".ChangeSeverity=" << StringUtils::URLEncode(m_changeSeverity.c_str()) << "&";
  }
  if(m_userDefinedHasBeenSet)
  {
      oStream << location << ".UserDefined=" << std::boolalpha << m_userDefined << "&";
  }
  if(m_valueTypeHasBeenSet)
  {
      oStream << location << ".ValueType=" << StringUtils::URLEncode(ConfigurationOptionValueTypeMapper::GetNameForConfigurationOptionValueType(m_valueType)) << "&";
  }
  if(m_valueOptionsHasBeenSet)
  {
      unsigned valueOptionsIdx = 1;
      for(auto& item : m_valueOptions)
      {
        oStream << location << ".ValueOptions.member." << valueOptionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_minValueHasBeenSet)
  {
      oStream << location << ".MinValue=" << m_minValue << "&";
  }
  if(m_maxValueHasBeenSet)
  {
      oStream << location << ".MaxValue=" << m_maxValue << "&";
  }
  if(m_maxLengthHasBeenSet)
  {
      oStream << location << ".MaxLength=" << m_maxLength << "&";
  }
  if(m_regexHasBeenSet)
  {
      Aws::String regexLocationAndMember(location);
      regexLocationAndMember += ".Regex";
      m_regex.OutputToStream(oStream, regexLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
