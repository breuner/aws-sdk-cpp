﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class ListRepositoriesRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API ListRepositoriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositories"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> A prefix used to filter returned repositories. Only repositories with names
     * that start with <code>repositoryPrefix</code> are returned.</p>
     */
    inline const Aws::String& GetRepositoryPrefix() const { return m_repositoryPrefix; }
    inline bool RepositoryPrefixHasBeenSet() const { return m_repositoryPrefixHasBeenSet; }
    template<typename RepositoryPrefixT = Aws::String>
    void SetRepositoryPrefix(RepositoryPrefixT&& value) { m_repositoryPrefixHasBeenSet = true; m_repositoryPrefix = std::forward<RepositoryPrefixT>(value); }
    template<typename RepositoryPrefixT = Aws::String>
    ListRepositoriesRequest& WithRepositoryPrefix(RepositoryPrefixT&& value) { SetRepositoryPrefix(std::forward<RepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRepositoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositoriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryPrefix;
    bool m_repositoryPrefixHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
