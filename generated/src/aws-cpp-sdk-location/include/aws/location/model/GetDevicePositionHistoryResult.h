﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DevicePosition.h>
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
  class GetDevicePositionHistoryResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryResult();
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the position history details for the requested device.</p>
     */
    inline const Aws::Vector<DevicePosition>& GetDevicePositions() const{ return m_devicePositions; }
    inline void SetDevicePositions(const Aws::Vector<DevicePosition>& value) { m_devicePositions = value; }
    inline void SetDevicePositions(Aws::Vector<DevicePosition>&& value) { m_devicePositions = std::move(value); }
    inline GetDevicePositionHistoryResult& WithDevicePositions(const Aws::Vector<DevicePosition>& value) { SetDevicePositions(value); return *this;}
    inline GetDevicePositionHistoryResult& WithDevicePositions(Aws::Vector<DevicePosition>&& value) { SetDevicePositions(std::move(value)); return *this;}
    inline GetDevicePositionHistoryResult& AddDevicePositions(const DevicePosition& value) { m_devicePositions.push_back(value); return *this; }
    inline GetDevicePositionHistoryResult& AddDevicePositions(DevicePosition&& value) { m_devicePositions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetDevicePositionHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDevicePositionHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDevicePositionHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDevicePositionHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDevicePositionHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDevicePositionHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DevicePosition> m_devicePositions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
