﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/RecoveryLifeCycle.h>
#include <aws/drs/model/ReplicationStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>The ARN of the Source Network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/SourceNetwork">AWS
   * API Reference</a></p>
   */
  class SourceNetwork
  {
  public:
    AWS_DRS_API SourceNetwork();
    AWS_DRS_API SourceNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Source Network.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SourceNetwork& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SourceNetwork& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SourceNetwork& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CloudFormation stack name that was deployed for recovering the Source
     * Network.</p>
     */
    inline const Aws::String& GetCfnStackName() const{ return m_cfnStackName; }
    inline bool CfnStackNameHasBeenSet() const { return m_cfnStackNameHasBeenSet; }
    inline void SetCfnStackName(const Aws::String& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = value; }
    inline void SetCfnStackName(Aws::String&& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = std::move(value); }
    inline void SetCfnStackName(const char* value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName.assign(value); }
    inline SourceNetwork& WithCfnStackName(const Aws::String& value) { SetCfnStackName(value); return *this;}
    inline SourceNetwork& WithCfnStackName(Aws::String&& value) { SetCfnStackName(std::move(value)); return *this;}
    inline SourceNetwork& WithCfnStackName(const char* value) { SetCfnStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information regarding the last recovery of the Source
     * Network.</p>
     */
    inline const RecoveryLifeCycle& GetLastRecovery() const{ return m_lastRecovery; }
    inline bool LastRecoveryHasBeenSet() const { return m_lastRecoveryHasBeenSet; }
    inline void SetLastRecovery(const RecoveryLifeCycle& value) { m_lastRecoveryHasBeenSet = true; m_lastRecovery = value; }
    inline void SetLastRecovery(RecoveryLifeCycle&& value) { m_lastRecoveryHasBeenSet = true; m_lastRecovery = std::move(value); }
    inline SourceNetwork& WithLastRecovery(const RecoveryLifeCycle& value) { SetLastRecovery(value); return *this;}
    inline SourceNetwork& WithLastRecovery(RecoveryLifeCycle&& value) { SetLastRecovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the recovered VPC following Source Network recovery.</p>
     */
    inline const Aws::String& GetLaunchedVpcID() const{ return m_launchedVpcID; }
    inline bool LaunchedVpcIDHasBeenSet() const { return m_launchedVpcIDHasBeenSet; }
    inline void SetLaunchedVpcID(const Aws::String& value) { m_launchedVpcIDHasBeenSet = true; m_launchedVpcID = value; }
    inline void SetLaunchedVpcID(Aws::String&& value) { m_launchedVpcIDHasBeenSet = true; m_launchedVpcID = std::move(value); }
    inline void SetLaunchedVpcID(const char* value) { m_launchedVpcIDHasBeenSet = true; m_launchedVpcID.assign(value); }
    inline SourceNetwork& WithLaunchedVpcID(const Aws::String& value) { SetLaunchedVpcID(value); return *this;}
    inline SourceNetwork& WithLaunchedVpcID(Aws::String&& value) { SetLaunchedVpcID(std::move(value)); return *this;}
    inline SourceNetwork& WithLaunchedVpcID(const char* value) { SetLaunchedVpcID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of Source Network Replication. Possible values: (a) STOPPED - Source
     * Network is not replicating. (b) IN_PROGRESS - Source Network is being
     * replicated. (c) PROTECTED - Source Network was replicated successfully and is
     * being synchronized for changes. (d) ERROR - Source Network replication has
     * failed</p>
     */
    inline const ReplicationStatus& GetReplicationStatus() const{ return m_replicationStatus; }
    inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
    inline void SetReplicationStatus(const ReplicationStatus& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline void SetReplicationStatus(ReplicationStatus&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = std::move(value); }
    inline SourceNetwork& WithReplicationStatus(const ReplicationStatus& value) { SetReplicationStatus(value); return *this;}
    inline SourceNetwork& WithReplicationStatus(ReplicationStatus&& value) { SetReplicationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error details in case Source Network replication status is ERROR.</p>
     */
    inline const Aws::String& GetReplicationStatusDetails() const{ return m_replicationStatusDetails; }
    inline bool ReplicationStatusDetailsHasBeenSet() const { return m_replicationStatusDetailsHasBeenSet; }
    inline void SetReplicationStatusDetails(const Aws::String& value) { m_replicationStatusDetailsHasBeenSet = true; m_replicationStatusDetails = value; }
    inline void SetReplicationStatusDetails(Aws::String&& value) { m_replicationStatusDetailsHasBeenSet = true; m_replicationStatusDetails = std::move(value); }
    inline void SetReplicationStatusDetails(const char* value) { m_replicationStatusDetailsHasBeenSet = true; m_replicationStatusDetails.assign(value); }
    inline SourceNetwork& WithReplicationStatusDetails(const Aws::String& value) { SetReplicationStatusDetails(value); return *this;}
    inline SourceNetwork& WithReplicationStatusDetails(Aws::String&& value) { SetReplicationStatusDetails(std::move(value)); return *this;}
    inline SourceNetwork& WithReplicationStatusDetails(const char* value) { SetReplicationStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID containing the VPC protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceAccountID() const{ return m_sourceAccountID; }
    inline bool SourceAccountIDHasBeenSet() const { return m_sourceAccountIDHasBeenSet; }
    inline void SetSourceAccountID(const Aws::String& value) { m_sourceAccountIDHasBeenSet = true; m_sourceAccountID = value; }
    inline void SetSourceAccountID(Aws::String&& value) { m_sourceAccountIDHasBeenSet = true; m_sourceAccountID = std::move(value); }
    inline void SetSourceAccountID(const char* value) { m_sourceAccountIDHasBeenSet = true; m_sourceAccountID.assign(value); }
    inline SourceNetwork& WithSourceAccountID(const Aws::String& value) { SetSourceAccountID(value); return *this;}
    inline SourceNetwork& WithSourceAccountID(Aws::String&& value) { SetSourceAccountID(std::move(value)); return *this;}
    inline SourceNetwork& WithSourceAccountID(const char* value) { SetSourceAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source Network ID.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = value; }
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::move(value); }
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID.assign(value); }
    inline SourceNetwork& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}
    inline SourceNetwork& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}
    inline SourceNetwork& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region containing the VPC protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }
    inline SourceNetwork& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline SourceNetwork& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline SourceNetwork& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>VPC ID protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceVpcID() const{ return m_sourceVpcID; }
    inline bool SourceVpcIDHasBeenSet() const { return m_sourceVpcIDHasBeenSet; }
    inline void SetSourceVpcID(const Aws::String& value) { m_sourceVpcIDHasBeenSet = true; m_sourceVpcID = value; }
    inline void SetSourceVpcID(Aws::String&& value) { m_sourceVpcIDHasBeenSet = true; m_sourceVpcID = std::move(value); }
    inline void SetSourceVpcID(const char* value) { m_sourceVpcIDHasBeenSet = true; m_sourceVpcID.assign(value); }
    inline SourceNetwork& WithSourceVpcID(const Aws::String& value) { SetSourceVpcID(value); return *this;}
    inline SourceNetwork& WithSourceVpcID(Aws::String&& value) { SetSourceVpcID(std::move(value)); return *this;}
    inline SourceNetwork& WithSourceVpcID(const char* value) { SetSourceVpcID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the Source Network.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SourceNetwork& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SourceNetwork& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SourceNetwork& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SourceNetwork& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SourceNetwork& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SourceNetwork& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SourceNetwork& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SourceNetwork& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SourceNetwork& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_cfnStackName;
    bool m_cfnStackNameHasBeenSet = false;

    RecoveryLifeCycle m_lastRecovery;
    bool m_lastRecoveryHasBeenSet = false;

    Aws::String m_launchedVpcID;
    bool m_launchedVpcIDHasBeenSet = false;

    ReplicationStatus m_replicationStatus;
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_replicationStatusDetails;
    bool m_replicationStatusDetailsHasBeenSet = false;

    Aws::String m_sourceAccountID;
    bool m_sourceAccountIDHasBeenSet = false;

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceVpcID;
    bool m_sourceVpcIDHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
