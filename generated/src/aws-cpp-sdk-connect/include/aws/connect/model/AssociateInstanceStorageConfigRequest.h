﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceStorageResourceType.h>
#include <aws/connect/model/InstanceStorageConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AssociateInstanceStorageConfigRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateInstanceStorageConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateInstanceStorageConfig"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AssociateInstanceStorageConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AssociateInstanceStorageConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AssociateInstanceStorageConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid resource type. To <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-contact-analysis-segment-streams.html">enable
     * streaming for real-time analysis of contacts</a>, use the following types:</p>
     * <ul> <li> <p>For chat contacts, use
     * <code>REAL_TIME_CONTACT_ANALYSIS_CHAT_SEGMENTS</code>.</p> </li> <li> <p>For
     * voice contacts, use <code>REAL_TIME_CONTACT_ANALYSIS_VOICE_SEGMENTS</code>.</p>
     * </li> </ul>  <p> <code>REAL_TIME_CONTACT_ANALYSIS_SEGMENTS</code> is
     * deprecated, but it is still supported and will apply only to VOICE channel
     * contacts. Use <code>REAL_TIME_CONTACT_ANALYSIS_VOICE_SEGMENTS</code> for voice
     * contacts moving forward.</p> <p>If you have previously associated a stream with
     * <code>REAL_TIME_CONTACT_ANALYSIS_SEGMENTS</code>, no action is needed to update
     * the stream to <code>REAL_TIME_CONTACT_ANALYSIS_VOICE_SEGMENTS</code>.</p>
     * 
     */
    inline const InstanceStorageResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const InstanceStorageResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(InstanceStorageResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline AssociateInstanceStorageConfigRequest& WithResourceType(const InstanceStorageResourceType& value) { SetResourceType(value); return *this;}
    inline AssociateInstanceStorageConfigRequest& WithResourceType(InstanceStorageResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid storage type.</p>
     */
    inline const InstanceStorageConfig& GetStorageConfig() const{ return m_storageConfig; }
    inline bool StorageConfigHasBeenSet() const { return m_storageConfigHasBeenSet; }
    inline void SetStorageConfig(const InstanceStorageConfig& value) { m_storageConfigHasBeenSet = true; m_storageConfig = value; }
    inline void SetStorageConfig(InstanceStorageConfig&& value) { m_storageConfigHasBeenSet = true; m_storageConfig = std::move(value); }
    inline AssociateInstanceStorageConfigRequest& WithStorageConfig(const InstanceStorageConfig& value) { SetStorageConfig(value); return *this;}
    inline AssociateInstanceStorageConfigRequest& WithStorageConfig(InstanceStorageConfig&& value) { SetStorageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AssociateInstanceStorageConfigRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AssociateInstanceStorageConfigRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AssociateInstanceStorageConfigRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceStorageResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    InstanceStorageConfig m_storageConfig;
    bool m_storageConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
