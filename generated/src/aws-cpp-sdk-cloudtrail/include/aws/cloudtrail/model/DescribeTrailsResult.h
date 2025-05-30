﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/Trail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrailsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTrailsResult
  {
  public:
    AWS_CLOUDTRAIL_API DescribeTrailsResult() = default;
    AWS_CLOUDTRAIL_API DescribeTrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API DescribeTrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of trail objects. Trail objects with string values are only returned
     * if values for the objects exist in a trail's configuration. For example,
     * <code>SNSTopicName</code> and <code>SNSTopicARN</code> are only returned in
     * results if a trail is configured to send SNS notifications. Similarly,
     * <code>KMSKeyId</code> only appears in results if a trail's log files are
     * encrypted with KMS customer managed keys.</p>
     */
    inline const Aws::Vector<Trail>& GetTrailList() const { return m_trailList; }
    template<typename TrailListT = Aws::Vector<Trail>>
    void SetTrailList(TrailListT&& value) { m_trailListHasBeenSet = true; m_trailList = std::forward<TrailListT>(value); }
    template<typename TrailListT = Aws::Vector<Trail>>
    DescribeTrailsResult& WithTrailList(TrailListT&& value) { SetTrailList(std::forward<TrailListT>(value)); return *this;}
    template<typename TrailListT = Trail>
    DescribeTrailsResult& AddTrailList(TrailListT&& value) { m_trailListHasBeenSet = true; m_trailList.emplace_back(std::forward<TrailListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Trail> m_trailList;
    bool m_trailListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
