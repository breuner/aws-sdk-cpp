﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/CreateGeneratedTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String CreateGeneratedTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateGeneratedTemplate&";
  if(m_resourcesHasBeenSet)
  {
    if (m_resources.empty())
    {
      ss << "Resources=&";
    }
    else
    {
      unsigned resourcesCount = 1;
      for(auto& item : m_resources)
      {
        item.OutputToStream(ss, "Resources.member.", resourcesCount, "");
        resourcesCount++;
      }
    }
  }

  if(m_generatedTemplateNameHasBeenSet)
  {
    ss << "GeneratedTemplateName=" << StringUtils::URLEncode(m_generatedTemplateName.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_templateConfigurationHasBeenSet)
  {
    m_templateConfiguration.OutputToStream(ss, "TemplateConfiguration");
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  CreateGeneratedTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
