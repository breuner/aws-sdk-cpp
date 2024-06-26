﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the status and settings of the APNs (Apple Push
   * Notification service) channel for an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSChannelResponse">AWS
   * API Reference</a></p>
   */
  class APNSChannelResponse
  {
  public:
    AWS_PINPOINT_API APNSChannelResponse();
    AWS_PINPOINT_API APNSChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API APNSChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the APNs channel applies
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline APNSChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline APNSChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline APNSChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the APNs channel was enabled.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline APNSChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline APNSChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline APNSChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication method that Amazon Pinpoint uses to authenticate
     * with APNs for this channel, key or certificate.</p>
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const{ return m_defaultAuthenticationMethod; }
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }
    inline void SetDefaultAuthenticationMethod(const Aws::String& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = value; }
    inline void SetDefaultAuthenticationMethod(Aws::String&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::move(value); }
    inline void SetDefaultAuthenticationMethod(const char* value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod.assign(value); }
    inline APNSChannelResponse& WithDefaultAuthenticationMethod(const Aws::String& value) { SetDefaultAuthenticationMethod(value); return *this;}
    inline APNSChannelResponse& WithDefaultAuthenticationMethod(Aws::String&& value) { SetDefaultAuthenticationMethod(std::move(value)); return *this;}
    inline APNSChannelResponse& WithDefaultAuthenticationMethod(const char* value) { SetDefaultAuthenticationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the APNs channel is enabled for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline APNSChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline bool GetHasCredential() const{ return m_hasCredential; }
    inline bool HasCredentialHasBeenSet() const { return m_hasCredentialHasBeenSet; }
    inline void SetHasCredential(bool value) { m_hasCredentialHasBeenSet = true; m_hasCredential = value; }
    inline APNSChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the APNs channel is configured to communicate with APNs by
     * using APNs tokens. To provide an authentication key for APNs tokens, set the
     * TokenKey property of the channel.</p>
     */
    inline bool GetHasTokenKey() const{ return m_hasTokenKey; }
    inline bool HasTokenKeyHasBeenSet() const { return m_hasTokenKeyHasBeenSet; }
    inline void SetHasTokenKey(bool value) { m_hasTokenKeyHasBeenSet = true; m_hasTokenKey = value; }
    inline APNSChannelResponse& WithHasTokenKey(bool value) { SetHasTokenKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) An identifier for the APNs channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline APNSChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline APNSChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline APNSChannelResponse& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the APNs channel is archived.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline APNSChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last modified the APNs channel.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }
    inline APNSChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline APNSChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline APNSChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the APNs channel was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }
    inline APNSChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline APNSChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline APNSChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of messaging or notification platform for the channel. For the APNs
     * channel, this value is APNS.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline APNSChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline APNSChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline APNSChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the APNs channel.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline APNSChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_hasCredential;
    bool m_hasCredentialHasBeenSet = false;

    bool m_hasTokenKey;
    bool m_hasTokenKeyHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
