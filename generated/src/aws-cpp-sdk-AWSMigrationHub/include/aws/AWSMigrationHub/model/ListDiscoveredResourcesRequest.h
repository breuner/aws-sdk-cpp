﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class ListDiscoveredResourcesRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API ListDiscoveredResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDiscoveredResources"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the ProgressUpdateStream.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const { return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    template<typename ProgressUpdateStreamT = Aws::String>
    void SetProgressUpdateStream(ProgressUpdateStreamT&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::forward<ProgressUpdateStreamT>(value); }
    template<typename ProgressUpdateStreamT = Aws::String>
    ListDiscoveredResourcesRequest& WithProgressUpdateStream(ProgressUpdateStreamT&& value) { SetProgressUpdateStream(std::forward<ProgressUpdateStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the MigrationTask. <i>Do not store personal data in this
     * field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const { return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    template<typename MigrationTaskNameT = Aws::String>
    void SetMigrationTaskName(MigrationTaskNameT&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::forward<MigrationTaskNameT>(value); }
    template<typename MigrationTaskNameT = Aws::String>
    ListDiscoveredResourcesRequest& WithMigrationTaskName(MigrationTaskNameT&& value) { SetMigrationTaskName(std::forward<MigrationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDiscoveredResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDiscoveredResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
