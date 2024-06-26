﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/VPCEConfiguration.h>
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
namespace DeviceFarm
{
namespace Model
{
  class CreateVPCEConfigurationResult
  {
  public:
    AWS_DEVICEFARM_API CreateVPCEConfigurationResult();
    AWS_DEVICEFARM_API CreateVPCEConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API CreateVPCEConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about your VPC endpoint
     * configuration.</p>
     */
    inline const VPCEConfiguration& GetVpceConfiguration() const{ return m_vpceConfiguration; }
    inline void SetVpceConfiguration(const VPCEConfiguration& value) { m_vpceConfiguration = value; }
    inline void SetVpceConfiguration(VPCEConfiguration&& value) { m_vpceConfiguration = std::move(value); }
    inline CreateVPCEConfigurationResult& WithVpceConfiguration(const VPCEConfiguration& value) { SetVpceConfiguration(value); return *this;}
    inline CreateVPCEConfigurationResult& WithVpceConfiguration(VPCEConfiguration&& value) { SetVpceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateVPCEConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateVPCEConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateVPCEConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VPCEConfiguration m_vpceConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
