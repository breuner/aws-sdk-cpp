﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/PipelineObject.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjectsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeObjectsResult
  {
  public:
    AWS_DATAPIPELINE_API DescribeObjectsResult();
    AWS_DATAPIPELINE_API DescribeObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API DescribeObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of object definitions.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const{ return m_pipelineObjects; }
    inline void SetPipelineObjects(const Aws::Vector<PipelineObject>& value) { m_pipelineObjects = value; }
    inline void SetPipelineObjects(Aws::Vector<PipelineObject>&& value) { m_pipelineObjects = std::move(value); }
    inline DescribeObjectsResult& WithPipelineObjects(const Aws::Vector<PipelineObject>& value) { SetPipelineObjects(value); return *this;}
    inline DescribeObjectsResult& WithPipelineObjects(Aws::Vector<PipelineObject>&& value) { SetPipelineObjects(std::move(value)); return *this;}
    inline DescribeObjectsResult& AddPipelineObjects(const PipelineObject& value) { m_pipelineObjects.push_back(value); return *this; }
    inline DescribeObjectsResult& AddPipelineObjects(PipelineObject&& value) { m_pipelineObjects.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeObjectsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeObjectsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeObjectsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more results to return.</p>
     */
    inline bool GetHasMoreResults() const{ return m_hasMoreResults; }
    inline void SetHasMoreResults(bool value) { m_hasMoreResults = value; }
    inline DescribeObjectsResult& WithHasMoreResults(bool value) { SetHasMoreResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeObjectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeObjectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeObjectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineObject> m_pipelineObjects;

    Aws::String m_marker;

    bool m_hasMoreResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
