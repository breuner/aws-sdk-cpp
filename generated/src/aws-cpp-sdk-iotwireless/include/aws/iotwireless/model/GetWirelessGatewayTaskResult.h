﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessGatewayTaskStatus.h>
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
  class GetWirelessGatewayTaskResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::String& GetWirelessGatewayId() const{ return m_wirelessGatewayId; }
    inline void SetWirelessGatewayId(const Aws::String& value) { m_wirelessGatewayId = value; }
    inline void SetWirelessGatewayId(Aws::String&& value) { m_wirelessGatewayId = std::move(value); }
    inline void SetWirelessGatewayId(const char* value) { m_wirelessGatewayId.assign(value); }
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayId(const Aws::String& value) { SetWirelessGatewayId(value); return *this;}
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayId(Aws::String&& value) { SetWirelessGatewayId(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayId(const char* value) { SetWirelessGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the WirelessGatewayTask.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const{ return m_wirelessGatewayTaskDefinitionId; }
    inline void SetWirelessGatewayTaskDefinitionId(const Aws::String& value) { m_wirelessGatewayTaskDefinitionId = value; }
    inline void SetWirelessGatewayTaskDefinitionId(Aws::String&& value) { m_wirelessGatewayTaskDefinitionId = std::move(value); }
    inline void SetWirelessGatewayTaskDefinitionId(const char* value) { m_wirelessGatewayTaskDefinitionId.assign(value); }
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const Aws::String& value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(Aws::String&& value) { SetWirelessGatewayTaskDefinitionId(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskResult& WithWirelessGatewayTaskDefinitionId(const char* value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the most recent uplink was received.</p> 
     * <p>This value is only valid for 3 months.</p> 
     */
    inline const Aws::String& GetLastUplinkReceivedAt() const{ return m_lastUplinkReceivedAt; }
    inline void SetLastUplinkReceivedAt(const Aws::String& value) { m_lastUplinkReceivedAt = value; }
    inline void SetLastUplinkReceivedAt(Aws::String&& value) { m_lastUplinkReceivedAt = std::move(value); }
    inline void SetLastUplinkReceivedAt(const char* value) { m_lastUplinkReceivedAt.assign(value); }
    inline GetWirelessGatewayTaskResult& WithLastUplinkReceivedAt(const Aws::String& value) { SetLastUplinkReceivedAt(value); return *this;}
    inline GetWirelessGatewayTaskResult& WithLastUplinkReceivedAt(Aws::String&& value) { SetLastUplinkReceivedAt(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskResult& WithLastUplinkReceivedAt(const char* value) { SetLastUplinkReceivedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the task was created.</p>
     */
    inline const Aws::String& GetTaskCreatedAt() const{ return m_taskCreatedAt; }
    inline void SetTaskCreatedAt(const Aws::String& value) { m_taskCreatedAt = value; }
    inline void SetTaskCreatedAt(Aws::String&& value) { m_taskCreatedAt = std::move(value); }
    inline void SetTaskCreatedAt(const char* value) { m_taskCreatedAt.assign(value); }
    inline GetWirelessGatewayTaskResult& WithTaskCreatedAt(const Aws::String& value) { SetTaskCreatedAt(value); return *this;}
    inline GetWirelessGatewayTaskResult& WithTaskCreatedAt(Aws::String&& value) { SetTaskCreatedAt(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskResult& WithTaskCreatedAt(const char* value) { SetTaskCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline const WirelessGatewayTaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WirelessGatewayTaskStatus& value) { m_status = value; }
    inline void SetStatus(WirelessGatewayTaskStatus&& value) { m_status = std::move(value); }
    inline GetWirelessGatewayTaskResult& WithStatus(const WirelessGatewayTaskStatus& value) { SetStatus(value); return *this;}
    inline GetWirelessGatewayTaskResult& WithStatus(WirelessGatewayTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWirelessGatewayTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWirelessGatewayTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_wirelessGatewayId;

    Aws::String m_wirelessGatewayTaskDefinitionId;

    Aws::String m_lastUplinkReceivedAt;

    Aws::String m_taskCreatedAt;

    WirelessGatewayTaskStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
