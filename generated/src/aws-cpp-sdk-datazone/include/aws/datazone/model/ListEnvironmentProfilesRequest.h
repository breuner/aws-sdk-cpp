﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListEnvironmentProfilesRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListEnvironmentProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironmentProfiles"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account where you want to list
     * environment profiles.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    ListEnvironmentProfilesRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region where you want to list environment
     * profiles.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const { return m_awsAccountRegion; }
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }
    template<typename AwsAccountRegionT = Aws::String>
    void SetAwsAccountRegion(AwsAccountRegionT&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::forward<AwsAccountRegionT>(value); }
    template<typename AwsAccountRegionT = Aws::String>
    ListEnvironmentProfilesRequest& WithAwsAccountRegion(AwsAccountRegionT&& value) { SetAwsAccountRegion(std::forward<AwsAccountRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListEnvironmentProfilesRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the blueprint that was used to create the environment
     * profiles that you want to list.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const { return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    void SetEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::forward<EnvironmentBlueprintIdentifierT>(value); }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    ListEnvironmentProfilesRequest& WithEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { SetEnvironmentBlueprintIdentifier(std::forward<EnvironmentBlueprintIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of environment profiles to return in a single call to
     * <code>ListEnvironmentProfiles</code>. When the number of environment profiles to
     * be listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListEnvironmentProfiles</code> to list the next set of environment
     * profiles.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEnvironmentProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListEnvironmentProfilesRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of environment profiles is greater than the default value for
     * the <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of environment profiles,
     * the response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListEnvironmentProfiles</code> to list the next set of environment
     * profiles.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentProfilesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone project.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    template<typename ProjectIdentifierT = Aws::String>
    void SetProjectIdentifier(ProjectIdentifierT&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::forward<ProjectIdentifierT>(value); }
    template<typename ProjectIdentifierT = Aws::String>
    ListEnvironmentProfilesRequest& WithProjectIdentifier(ProjectIdentifierT&& value) { SetProjectIdentifier(std::forward<ProjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountRegion;
    bool m_awsAccountRegionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentBlueprintIdentifier;
    bool m_environmentBlueprintIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
