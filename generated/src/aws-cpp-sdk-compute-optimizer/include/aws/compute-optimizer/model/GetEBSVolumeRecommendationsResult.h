﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/VolumeRecommendation.h>
#include <aws/compute-optimizer/model/GetRecommendationError.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetEBSVolumeRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEBSVolumeRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetEBSVolumeRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEBSVolumeRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to advance to the next page of volume recommendations.</p>
     * <p>This value is null when there are no more pages of volume recommendations to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetEBSVolumeRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetEBSVolumeRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetEBSVolumeRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe volume recommendations.</p>
     */
    inline const Aws::Vector<VolumeRecommendation>& GetVolumeRecommendations() const{ return m_volumeRecommendations; }
    inline void SetVolumeRecommendations(const Aws::Vector<VolumeRecommendation>& value) { m_volumeRecommendations = value; }
    inline void SetVolumeRecommendations(Aws::Vector<VolumeRecommendation>&& value) { m_volumeRecommendations = std::move(value); }
    inline GetEBSVolumeRecommendationsResult& WithVolumeRecommendations(const Aws::Vector<VolumeRecommendation>& value) { SetVolumeRecommendations(value); return *this;}
    inline GetEBSVolumeRecommendationsResult& WithVolumeRecommendations(Aws::Vector<VolumeRecommendation>&& value) { SetVolumeRecommendations(std::move(value)); return *this;}
    inline GetEBSVolumeRecommendationsResult& AddVolumeRecommendations(const VolumeRecommendation& value) { m_volumeRecommendations.push_back(value); return *this; }
    inline GetEBSVolumeRecommendationsResult& AddVolumeRecommendations(VolumeRecommendation&& value) { m_volumeRecommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported
     * volume.</p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<GetRecommendationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<GetRecommendationError>&& value) { m_errors = std::move(value); }
    inline GetEBSVolumeRecommendationsResult& WithErrors(const Aws::Vector<GetRecommendationError>& value) { SetErrors(value); return *this;}
    inline GetEBSVolumeRecommendationsResult& WithErrors(Aws::Vector<GetRecommendationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline GetEBSVolumeRecommendationsResult& AddErrors(const GetRecommendationError& value) { m_errors.push_back(value); return *this; }
    inline GetEBSVolumeRecommendationsResult& AddErrors(GetRecommendationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEBSVolumeRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEBSVolumeRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEBSVolumeRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<VolumeRecommendation> m_volumeRecommendations;

    Aws::Vector<GetRecommendationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
