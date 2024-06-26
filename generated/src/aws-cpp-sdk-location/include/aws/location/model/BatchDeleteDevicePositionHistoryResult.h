﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/BatchDeleteDevicePositionHistoryError.h>
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
namespace LocationService
{
namespace Model
{
  class BatchDeleteDevicePositionHistoryResult
  {
  public:
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryResult();
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains error details for each device history that failed to delete.</p>
     */
    inline const Aws::Vector<BatchDeleteDevicePositionHistoryError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteDevicePositionHistoryError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteDevicePositionHistoryError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteDevicePositionHistoryResult& WithErrors(const Aws::Vector<BatchDeleteDevicePositionHistoryError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteDevicePositionHistoryResult& WithErrors(Aws::Vector<BatchDeleteDevicePositionHistoryError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteDevicePositionHistoryResult& AddErrors(const BatchDeleteDevicePositionHistoryError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteDevicePositionHistoryResult& AddErrors(BatchDeleteDevicePositionHistoryError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteDevicePositionHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteDevicePositionHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteDevicePositionHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteDevicePositionHistoryError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
