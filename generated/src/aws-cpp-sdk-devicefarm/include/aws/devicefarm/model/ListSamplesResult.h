﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Sample.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list samples request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSamplesResult">AWS
   * API Reference</a></p>
   */
  class ListSamplesResult
  {
  public:
    AWS_DEVICEFARM_API ListSamplesResult();
    AWS_DEVICEFARM_API ListSamplesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListSamplesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the samples.</p>
     */
    inline const Aws::Vector<Sample>& GetSamples() const{ return m_samples; }
    inline void SetSamples(const Aws::Vector<Sample>& value) { m_samples = value; }
    inline void SetSamples(Aws::Vector<Sample>&& value) { m_samples = std::move(value); }
    inline ListSamplesResult& WithSamples(const Aws::Vector<Sample>& value) { SetSamples(value); return *this;}
    inline ListSamplesResult& WithSamples(Aws::Vector<Sample>&& value) { SetSamples(std::move(value)); return *this;}
    inline ListSamplesResult& AddSamples(const Sample& value) { m_samples.push_back(value); return *this; }
    inline ListSamplesResult& AddSamples(Sample&& value) { m_samples.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSamplesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSamplesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSamplesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSamplesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSamplesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSamplesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Sample> m_samples;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
