﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GetTileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTileRequest::SerializePayload() const
{
  return {};
}

void GetTileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_arnHasBeenSet)
    {
      ss << m_arn;
      uri.AddQueryStringParameter("Arn", ss.str());
      ss.str("");
    }

    if(m_executionRoleArnHasBeenSet)
    {
      ss << m_executionRoleArn;
      uri.AddQueryStringParameter("ExecutionRoleArn", ss.str());
      ss.str("");
    }

    if(m_imageAssetsHasBeenSet)
    {
      for(const auto& item : m_imageAssets)
      {
        ss << item;
        uri.AddQueryStringParameter("ImageAssets", ss.str());
        ss.str("");
      }
    }

    if(m_imageMaskHasBeenSet)
    {
      ss << m_imageMask;
      uri.AddQueryStringParameter("ImageMask", ss.str());
      ss.str("");
    }

    if(m_outputDataTypeHasBeenSet)
    {
      ss << OutputTypeMapper::GetNameForOutputType(m_outputDataType);
      uri.AddQueryStringParameter("OutputDataType", ss.str());
      ss.str("");
    }

    if(m_outputFormatHasBeenSet)
    {
      ss << m_outputFormat;
      uri.AddQueryStringParameter("OutputFormat", ss.str());
      ss.str("");
    }

    if(m_propertyFiltersHasBeenSet)
    {
      ss << m_propertyFilters;
      uri.AddQueryStringParameter("PropertyFilters", ss.str());
      ss.str("");
    }

    if(m_targetHasBeenSet)
    {
      ss << TargetOptionsMapper::GetNameForTargetOptions(m_target);
      uri.AddQueryStringParameter("Target", ss.str());
      ss.str("");
    }

    if(m_timeRangeFilterHasBeenSet)
    {
      ss << m_timeRangeFilter;
      uri.AddQueryStringParameter("TimeRangeFilter", ss.str());
      ss.str("");
    }

}



