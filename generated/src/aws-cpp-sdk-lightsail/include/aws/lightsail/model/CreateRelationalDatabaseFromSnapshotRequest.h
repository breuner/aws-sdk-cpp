﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateRelationalDatabaseFromSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateRelationalDatabaseFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelationalDatabaseFromSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database snapshot from which to create your new database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseSnapshotName() const{ return m_relationalDatabaseSnapshotName; }
    inline bool RelationalDatabaseSnapshotNameHasBeenSet() const { return m_relationalDatabaseSnapshotNameHasBeenSet; }
    inline void SetRelationalDatabaseSnapshotName(const Aws::String& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = value; }
    inline void SetRelationalDatabaseSnapshotName(Aws::String&& value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName = std::move(value); }
    inline void SetRelationalDatabaseSnapshotName(const char* value) { m_relationalDatabaseSnapshotNameHasBeenSet = true; m_relationalDatabaseSnapshotName.assign(value); }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseSnapshotName(const Aws::String& value) { SetRelationalDatabaseSnapshotName(value); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseSnapshotName(Aws::String&& value) { SetRelationalDatabaseSnapshotName(std::move(value)); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseSnapshotName(const char* value) { SetRelationalDatabaseSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     * <p>When creating a new database from a snapshot, you cannot choose a bundle that
     * is smaller than the bundle of the source database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBundleId() const{ return m_relationalDatabaseBundleId; }
    inline bool RelationalDatabaseBundleIdHasBeenSet() const { return m_relationalDatabaseBundleIdHasBeenSet; }
    inline void SetRelationalDatabaseBundleId(const Aws::String& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = value; }
    inline void SetRelationalDatabaseBundleId(Aws::String&& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = std::move(value); }
    inline void SetRelationalDatabaseBundleId(const char* value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId.assign(value); }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseBundleId(const Aws::String& value) { SetRelationalDatabaseBundleId(value); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseBundleId(Aws::String&& value) { SetRelationalDatabaseBundleId(std::move(value)); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRelationalDatabaseBundleId(const char* value) { SetRelationalDatabaseBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database.</p>
     */
    inline const Aws::String& GetSourceRelationalDatabaseName() const{ return m_sourceRelationalDatabaseName; }
    inline bool SourceRelationalDatabaseNameHasBeenSet() const { return m_sourceRelationalDatabaseNameHasBeenSet; }
    inline void SetSourceRelationalDatabaseName(const Aws::String& value) { m_sourceRelationalDatabaseNameHasBeenSet = true; m_sourceRelationalDatabaseName = value; }
    inline void SetSourceRelationalDatabaseName(Aws::String&& value) { m_sourceRelationalDatabaseNameHasBeenSet = true; m_sourceRelationalDatabaseName = std::move(value); }
    inline void SetSourceRelationalDatabaseName(const char* value) { m_sourceRelationalDatabaseNameHasBeenSet = true; m_sourceRelationalDatabaseName.assign(value); }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithSourceRelationalDatabaseName(const Aws::String& value) { SetSourceRelationalDatabaseName(value); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithSourceRelationalDatabaseName(Aws::String&& value) { SetSourceRelationalDatabaseName(std::move(value)); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithSourceRelationalDatabaseName(const char* value) { SetSourceRelationalDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time to restore your database from.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be before the latest restorable time for the database.</p> </li>
     * <li> <p>Cannot be specified if the <code>use latest restorable time</code>
     * parameter is <code>true</code>.</p> </li> <li> <p>Specified in Coordinated
     * Universal Time (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p>
     * <p>For example, if you wish to use a restore time of October 1, 2018, at 8 PM
     * UTC, then you input <code>1538424000</code> as the restore time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetRestoreTime() const{ return m_restoreTime; }
    inline bool RestoreTimeHasBeenSet() const { return m_restoreTimeHasBeenSet; }
    inline void SetRestoreTime(const Aws::Utils::DateTime& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = value; }
    inline void SetRestoreTime(Aws::Utils::DateTime&& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = std::move(value); }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRestoreTime(const Aws::Utils::DateTime& value) { SetRestoreTime(value); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithRestoreTime(Aws::Utils::DateTime&& value) { SetRestoreTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether your database is restored from the latest backup time. A
     * value of <code>true</code> restores from the latest backup time. </p>
     * <p>Default: <code>false</code> </p> <p>Constraints: Cannot be specified if the
     * <code>restore time</code> parameter is provided.</p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRelationalDatabaseFromSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRelationalDatabaseFromSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRelationalDatabaseFromSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_relationalDatabaseSnapshotName;
    bool m_relationalDatabaseSnapshotNameHasBeenSet = false;

    Aws::String m_relationalDatabaseBundleId;
    bool m_relationalDatabaseBundleIdHasBeenSet = false;

    Aws::String m_sourceRelationalDatabaseName;
    bool m_sourceRelationalDatabaseNameHasBeenSet = false;

    Aws::Utils::DateTime m_restoreTime;
    bool m_restoreTimeHasBeenSet = false;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
