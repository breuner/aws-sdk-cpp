﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/CelebrityRecognitionSortBy.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class GetCelebrityRecognitionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API GetCelebrityRecognitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCelebrityRecognition"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Job identifier for the required celebrity recognition analysis. You can get
     * the job identifer from a call to <code>StartCelebrityRecognition</code>.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetCelebrityRecognitionRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return per paginated call. The largest value you
     * can specify is 1000. If you specify a value greater than 1000, a maximum of 1000
     * results is returned. The default value is 1000.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCelebrityRecognitionRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more recognized
     * celebrities to retrieve), Amazon Rekognition Video returns a pagination token in
     * the response. You can use this pagination token to retrieve the next set of
     * celebrities. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCelebrityRecognitionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort to use for celebrities returned in <code>Celebrities</code> field.
     * Specify <code>ID</code> to sort by the celebrity identifier, specify
     * <code>TIMESTAMP</code> to sort by the time the celebrity was recognized.</p>
     */
    inline CelebrityRecognitionSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(CelebrityRecognitionSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline GetCelebrityRecognitionRequest& WithSortBy(CelebrityRecognitionSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    CelebrityRecognitionSortBy m_sortBy{CelebrityRecognitionSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
