﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteGeofenceCollectionResult
  {
  public:
    AWS_LOCATIONSERVICE_API DeleteGeofenceCollectionResult();
    AWS_LOCATIONSERVICE_API DeleteGeofenceCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DeleteGeofenceCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteGeofenceCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteGeofenceCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteGeofenceCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
