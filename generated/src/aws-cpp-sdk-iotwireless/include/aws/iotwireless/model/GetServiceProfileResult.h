﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANGetServiceProfileInfo.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetServiceProfileResult
  {
  public:
    AWS_IOTWIRELESS_API GetServiceProfileResult();
    AWS_IOTWIRELESS_API GetServiceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetServiceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetServiceProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetServiceProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetServiceProfileResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetServiceProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetServiceProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetServiceProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetServiceProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetServiceProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetServiceProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the service profile.</p>
     */
    inline const LoRaWANGetServiceProfileInfo& GetLoRaWAN() const{ return m_loRaWAN; }
    inline void SetLoRaWAN(const LoRaWANGetServiceProfileInfo& value) { m_loRaWAN = value; }
    inline void SetLoRaWAN(LoRaWANGetServiceProfileInfo&& value) { m_loRaWAN = std::move(value); }
    inline GetServiceProfileResult& WithLoRaWAN(const LoRaWANGetServiceProfileInfo& value) { SetLoRaWAN(value); return *this;}
    inline GetServiceProfileResult& WithLoRaWAN(LoRaWANGetServiceProfileInfo&& value) { SetLoRaWAN(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_id;

    LoRaWANGetServiceProfileInfo m_loRaWAN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
