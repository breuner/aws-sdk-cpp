﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/UserAccessLoggingSettings.h>
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
  class UpdateUserAccessLoggingSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateUserAccessLoggingSettingsResult();
    AWS_WORKSPACESWEB_API UpdateUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateUserAccessLoggingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user access logging settings.</p>
     */
    inline const UserAccessLoggingSettings& GetUserAccessLoggingSettings() const{ return m_userAccessLoggingSettings; }
    inline void SetUserAccessLoggingSettings(const UserAccessLoggingSettings& value) { m_userAccessLoggingSettings = value; }
    inline void SetUserAccessLoggingSettings(UserAccessLoggingSettings&& value) { m_userAccessLoggingSettings = std::move(value); }
    inline UpdateUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(const UserAccessLoggingSettings& value) { SetUserAccessLoggingSettings(value); return *this;}
    inline UpdateUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(UserAccessLoggingSettings&& value) { SetUserAccessLoggingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateUserAccessLoggingSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateUserAccessLoggingSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateUserAccessLoggingSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UserAccessLoggingSettings m_userAccessLoggingSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
