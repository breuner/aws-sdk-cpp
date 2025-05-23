﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/codedeploy/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListOnPremisesInstances</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListOnPremisesInstancesInput">AWS
   * API Reference</a></p>
   */
  class ListOnPremisesInstancesRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API ListOnPremisesInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOnPremisesInstances"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The registration status of the on-premises instances:</p> <ul> <li> <p>
     * <code>Deregistered</code>: Include deregistered on-premises instances in the
     * resulting list.</p> </li> <li> <p> <code>Registered</code>: Include registered
     * on-premises instances in the resulting list.</p> </li> </ul>
     */
    inline RegistrationStatus GetRegistrationStatus() const { return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(RegistrationStatus value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline ListOnPremisesInstancesRequest& WithRegistrationStatus(RegistrationStatus value) { SetRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The on-premises instance tags that are used to restrict the on-premises
     * instance names returned.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTagFilters() const { return m_tagFilters; }
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }
    template<typename TagFiltersT = Aws::Vector<TagFilter>>
    void SetTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::forward<TagFiltersT>(value); }
    template<typename TagFiltersT = Aws::Vector<TagFilter>>
    ListOnPremisesInstancesRequest& WithTagFilters(TagFiltersT&& value) { SetTagFilters(std::forward<TagFiltersT>(value)); return *this;}
    template<typename TagFiltersT = TagFilter>
    ListOnPremisesInstancesRequest& AddTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.emplace_back(std::forward<TagFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier returned from the previous list on-premises instances call. It
     * can be used to return the next set of on-premises instances in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOnPremisesInstancesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    RegistrationStatus m_registrationStatus{RegistrationStatus::NOT_SET};
    bool m_registrationStatusHasBeenSet = false;

    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
