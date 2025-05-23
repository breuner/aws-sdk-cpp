﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/KxDataviewStatus.h>
#include <aws/finspace/model/KxDataviewSegmentConfiguration.h>
#include <aws/finspace/model/KxDataviewActiveVersion.h>
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
namespace finspace
{
namespace Model
{
  class GetKxDataviewResult
  {
  public:
    AWS_FINSPACE_API GetKxDataviewResult() = default;
    AWS_FINSPACE_API GetKxDataviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxDataviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the database where you created the dataview.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetKxDataviewResult& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const { return m_dataviewName; }
    template<typename DataviewNameT = Aws::String>
    void SetDataviewName(DataviewNameT&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::forward<DataviewNameT>(value); }
    template<typename DataviewNameT = Aws::String>
    GetKxDataviewResult& WithDataviewName(DataviewNameT&& value) { SetDataviewName(std::forward<DataviewNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline KxAzMode GetAzMode() const { return m_azMode; }
    inline void SetAzMode(KxAzMode value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline GetKxDataviewResult& WithAzMode(KxAzMode value) { SetAzMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    GetKxDataviewResult& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    GetKxDataviewResult& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const { return m_segmentConfigurations; }
    template<typename SegmentConfigurationsT = Aws::Vector<KxDataviewSegmentConfiguration>>
    void SetSegmentConfigurations(SegmentConfigurationsT&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::forward<SegmentConfigurationsT>(value); }
    template<typename SegmentConfigurationsT = Aws::Vector<KxDataviewSegmentConfiguration>>
    GetKxDataviewResult& WithSegmentConfigurations(SegmentConfigurationsT&& value) { SetSegmentConfigurations(std::forward<SegmentConfigurationsT>(value)); return *this;}
    template<typename SegmentConfigurationsT = KxDataviewSegmentConfiguration>
    GetKxDataviewResult& AddSegmentConfigurations(SegmentConfigurationsT&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.emplace_back(std::forward<SegmentConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The current active changeset versions of the database on the given dataview.
     * </p>
     */
    inline const Aws::Vector<KxDataviewActiveVersion>& GetActiveVersions() const { return m_activeVersions; }
    template<typename ActiveVersionsT = Aws::Vector<KxDataviewActiveVersion>>
    void SetActiveVersions(ActiveVersionsT&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions = std::forward<ActiveVersionsT>(value); }
    template<typename ActiveVersionsT = Aws::Vector<KxDataviewActiveVersion>>
    GetKxDataviewResult& WithActiveVersions(ActiveVersionsT&& value) { SetActiveVersions(std::forward<ActiveVersionsT>(value)); return *this;}
    template<typename ActiveVersionsT = KxDataviewActiveVersion>
    GetKxDataviewResult& AddActiveVersions(ActiveVersionsT&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions.emplace_back(std::forward<ActiveVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the dataview.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetKxDataviewResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when new changesets are ingested. The
     * default value is false.</p>
     */
    inline bool GetAutoUpdate() const { return m_autoUpdate; }
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline GetKxDataviewResult& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns True if the dataview is created as writeable and False otherwise.
     * </p>
     */
    inline bool GetReadWrite() const { return m_readWrite; }
    inline void SetReadWrite(bool value) { m_readWriteHasBeenSet = true; m_readWrite = value; }
    inline GetKxDataviewResult& WithReadWrite(bool value) { SetReadWrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment, from where you want to retrieve
     * the dataview details.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    GetKxDataviewResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetKxDataviewResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time that the dataview was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    GetKxDataviewResult& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of dataview creation.</p> <ul> <li> <p> <code>CREATING</code> –
     * The dataview creation is in progress.</p> </li> <li> <p> <code>UPDATING</code> –
     * The dataview is in the process of being updated.</p> </li> <li> <p>
     * <code>ACTIVE</code> – The dataview is active.</p> </li> </ul>
     */
    inline KxDataviewStatus GetStatus() const { return m_status; }
    inline void SetStatus(KxDataviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetKxDataviewResult& WithStatus(KxDataviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetKxDataviewResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKxDataviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    KxAzMode m_azMode{KxAzMode::NOT_SET};
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;

    Aws::Vector<KxDataviewActiveVersion> m_activeVersions;
    bool m_activeVersionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoUpdate{false};
    bool m_autoUpdateHasBeenSet = false;

    bool m_readWrite{false};
    bool m_readWriteHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    KxDataviewStatus m_status{KxDataviewStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
