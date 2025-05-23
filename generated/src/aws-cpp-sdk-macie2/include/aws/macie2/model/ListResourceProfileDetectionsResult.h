﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/Detection.h>
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
namespace Macie2
{
namespace Model
{
  class ListResourceProfileDetectionsResult
  {
  public:
    AWS_MACIE2_API ListResourceProfileDetectionsResult() = default;
    AWS_MACIE2_API ListResourceProfileDetectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListResourceProfileDetectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline const Aws::Vector<Detection>& GetDetections() const { return m_detections; }
    template<typename DetectionsT = Aws::Vector<Detection>>
    void SetDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections = std::forward<DetectionsT>(value); }
    template<typename DetectionsT = Aws::Vector<Detection>>
    ListResourceProfileDetectionsResult& WithDetections(DetectionsT&& value) { SetDetections(std::forward<DetectionsT>(value)); return *this;}
    template<typename DetectionsT = Detection>
    ListResourceProfileDetectionsResult& AddDetections(DetectionsT&& value) { m_detectionsHasBeenSet = true; m_detections.emplace_back(std::forward<DetectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceProfileDetectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceProfileDetectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Detection> m_detections;
    bool m_detectionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
