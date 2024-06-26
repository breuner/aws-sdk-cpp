﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetErrorDetails.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class BatchAssociateProjectAssetsResult
  {
  public:
    AWS_IOTSITEWISE_API BatchAssociateProjectAssetsResult();
    AWS_IOTSITEWISE_API BatchAssociateProjectAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API BatchAssociateProjectAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline const Aws::Vector<AssetErrorDetails>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<AssetErrorDetails>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<AssetErrorDetails>&& value) { m_errors = std::move(value); }
    inline BatchAssociateProjectAssetsResult& WithErrors(const Aws::Vector<AssetErrorDetails>& value) { SetErrors(value); return *this;}
    inline BatchAssociateProjectAssetsResult& WithErrors(Aws::Vector<AssetErrorDetails>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchAssociateProjectAssetsResult& AddErrors(const AssetErrorDetails& value) { m_errors.push_back(value); return *this; }
    inline BatchAssociateProjectAssetsResult& AddErrors(AssetErrorDetails&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchAssociateProjectAssetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchAssociateProjectAssetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchAssociateProjectAssetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetErrorDetails> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
