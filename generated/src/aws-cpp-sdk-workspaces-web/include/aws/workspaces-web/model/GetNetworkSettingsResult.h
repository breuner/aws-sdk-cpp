﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/NetworkSettings.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class GetNetworkSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API GetNetworkSettingsResult();
    AWS_WORKSPACESWEB_API GetNetworkSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetNetworkSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The network settings.</p>
     */
    inline const NetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }
    inline void SetNetworkSettings(const NetworkSettings& value) { m_networkSettings = value; }
    inline void SetNetworkSettings(NetworkSettings&& value) { m_networkSettings = std::move(value); }
    inline GetNetworkSettingsResult& WithNetworkSettings(const NetworkSettings& value) { SetNetworkSettings(value); return *this;}
    inline GetNetworkSettingsResult& WithNetworkSettings(NetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNetworkSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNetworkSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNetworkSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    NetworkSettings m_networkSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
