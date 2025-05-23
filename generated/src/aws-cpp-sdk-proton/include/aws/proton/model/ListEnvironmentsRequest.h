﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/EnvironmentTemplateFilter.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class ListEnvironmentsRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListEnvironmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironments"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline const Aws::Vector<EnvironmentTemplateFilter>& GetEnvironmentTemplates() const { return m_environmentTemplates; }
    inline bool EnvironmentTemplatesHasBeenSet() const { return m_environmentTemplatesHasBeenSet; }
    template<typename EnvironmentTemplatesT = Aws::Vector<EnvironmentTemplateFilter>>
    void SetEnvironmentTemplates(EnvironmentTemplatesT&& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates = std::forward<EnvironmentTemplatesT>(value); }
    template<typename EnvironmentTemplatesT = Aws::Vector<EnvironmentTemplateFilter>>
    ListEnvironmentsRequest& WithEnvironmentTemplates(EnvironmentTemplatesT&& value) { SetEnvironmentTemplates(std::forward<EnvironmentTemplatesT>(value)); return *this;}
    template<typename EnvironmentTemplatesT = EnvironmentTemplateFilter>
    ListEnvironmentsRequest& AddEnvironmentTemplates(EnvironmentTemplatesT&& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates.emplace_back(std::forward<EnvironmentTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of environments to list.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEnvironmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentTemplateFilter> m_environmentTemplates;
    bool m_environmentTemplatesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
