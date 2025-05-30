﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerRequest.h>
#include <aws/applicationcostprofiler/model/SourceS3Location.h>
#include <utility>

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{

  /**
   */
  class ImportApplicationUsageRequest : public ApplicationCostProfilerRequest
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API ImportApplicationUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportApplicationUsage"; }

    AWS_APPLICATIONCOSTPROFILER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon S3 location to import application usage data from.</p>
     */
    inline const SourceS3Location& GetSourceS3Location() const { return m_sourceS3Location; }
    inline bool SourceS3LocationHasBeenSet() const { return m_sourceS3LocationHasBeenSet; }
    template<typename SourceS3LocationT = SourceS3Location>
    void SetSourceS3Location(SourceS3LocationT&& value) { m_sourceS3LocationHasBeenSet = true; m_sourceS3Location = std::forward<SourceS3LocationT>(value); }
    template<typename SourceS3LocationT = SourceS3Location>
    ImportApplicationUsageRequest& WithSourceS3Location(SourceS3LocationT&& value) { SetSourceS3Location(std::forward<SourceS3LocationT>(value)); return *this;}
    ///@}
  private:

    SourceS3Location m_sourceS3Location;
    bool m_sourceS3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
