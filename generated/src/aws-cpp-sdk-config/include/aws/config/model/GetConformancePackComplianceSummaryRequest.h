﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetConformancePackComplianceSummaryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetConformancePackComplianceSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConformancePackComplianceSummary"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Names of conformance packs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConformancePackNames() const { return m_conformancePackNames; }
    inline bool ConformancePackNamesHasBeenSet() const { return m_conformancePackNamesHasBeenSet; }
    template<typename ConformancePackNamesT = Aws::Vector<Aws::String>>
    void SetConformancePackNames(ConformancePackNamesT&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = std::forward<ConformancePackNamesT>(value); }
    template<typename ConformancePackNamesT = Aws::Vector<Aws::String>>
    GetConformancePackComplianceSummaryRequest& WithConformancePackNames(ConformancePackNamesT&& value) { SetConformancePackNames(std::forward<ConformancePackNamesT>(value)); return *this;}
    template<typename ConformancePackNamesT = Aws::String>
    GetConformancePackComplianceSummaryRequest& AddConformancePackNames(ConformancePackNamesT&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.emplace_back(std::forward<ConformancePackNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of conformance packs returned on each page.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetConformancePackComplianceSummaryRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetConformancePackComplianceSummaryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_conformancePackNames;
    bool m_conformancePackNamesHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
