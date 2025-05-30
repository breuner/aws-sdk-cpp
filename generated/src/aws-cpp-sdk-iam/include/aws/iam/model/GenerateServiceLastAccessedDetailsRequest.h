﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/AccessAdvisorUsageGranularityType.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class GenerateServiceLastAccessedDetailsRequest : public IAMRequest
  {
  public:
    AWS_IAM_API GenerateServiceLastAccessedDetailsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateServiceLastAccessedDetails"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an Amazon Web Services service.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GenerateServiceLastAccessedDetailsRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of detail that you want to generate. You can specify whether you
     * want to generate information about the last attempt to access services or
     * actions. If you specify service-level granularity, this operation generates only
     * service data. If you specify action-level granularity, it generates service and
     * action data. If you don't include this optional parameter, the operation
     * generates service data.</p>
     */
    inline AccessAdvisorUsageGranularityType GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(AccessAdvisorUsageGranularityType value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline GenerateServiceLastAccessedDetailsRequest& WithGranularity(AccessAdvisorUsageGranularityType value) { SetGranularity(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AccessAdvisorUsageGranularityType m_granularity{AccessAdvisorUsageGranularityType::NOT_SET};
    bool m_granularityHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
