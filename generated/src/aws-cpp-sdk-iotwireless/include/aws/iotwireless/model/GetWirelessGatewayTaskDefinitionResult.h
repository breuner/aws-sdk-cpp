﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayTaskCreate.h>
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
  class GetWirelessGatewayTaskDefinitionResult
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult();
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetWirelessGatewayTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline bool GetAutoCreateTasks() const{ return m_autoCreateTasks; }
    inline void SetAutoCreateTasks(bool value) { m_autoCreateTasks = value; }
    inline GetWirelessGatewayTaskDefinitionResult& WithAutoCreateTasks(bool value) { SetAutoCreateTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetWirelessGatewayTaskDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWirelessGatewayTaskDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskDefinitionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the gateways to update.</p>
     */
    inline const UpdateWirelessGatewayTaskCreate& GetUpdate() const{ return m_update; }
    inline void SetUpdate(const UpdateWirelessGatewayTaskCreate& value) { m_update = value; }
    inline void SetUpdate(UpdateWirelessGatewayTaskCreate&& value) { m_update = std::move(value); }
    inline GetWirelessGatewayTaskDefinitionResult& WithUpdate(const UpdateWirelessGatewayTaskCreate& value) { SetUpdate(value); return *this;}
    inline GetWirelessGatewayTaskDefinitionResult& WithUpdate(UpdateWirelessGatewayTaskCreate&& value) { SetUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetWirelessGatewayTaskDefinitionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetWirelessGatewayTaskDefinitionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskDefinitionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWirelessGatewayTaskDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWirelessGatewayTaskDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWirelessGatewayTaskDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_autoCreateTasks;

    Aws::String m_name;

    UpdateWirelessGatewayTaskCreate m_update;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
