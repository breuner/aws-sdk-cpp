﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DescribeDirectoryConfigsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DescribeDirectoryConfigsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectoryConfigs"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The directory names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryNames() const { return m_directoryNames; }
    inline bool DirectoryNamesHasBeenSet() const { return m_directoryNamesHasBeenSet; }
    template<typename DirectoryNamesT = Aws::Vector<Aws::String>>
    void SetDirectoryNames(DirectoryNamesT&& value) { m_directoryNamesHasBeenSet = true; m_directoryNames = std::forward<DirectoryNamesT>(value); }
    template<typename DirectoryNamesT = Aws::Vector<Aws::String>>
    DescribeDirectoryConfigsRequest& WithDirectoryNames(DirectoryNamesT&& value) { SetDirectoryNames(std::forward<DirectoryNamesT>(value)); return *this;}
    template<typename DirectoryNamesT = Aws::String>
    DescribeDirectoryConfigsRequest& AddDirectoryNames(DirectoryNamesT&& value) { m_directoryNamesHasBeenSet = true; m_directoryNames.emplace_back(std::forward<DirectoryNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeDirectoryConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDirectoryConfigsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_directoryNames;
    bool m_directoryNamesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
