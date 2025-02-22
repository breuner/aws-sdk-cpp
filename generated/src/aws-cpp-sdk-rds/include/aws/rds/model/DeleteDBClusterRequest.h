﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class DeleteDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB cluster identifier for the DB cluster to be deleted. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DeleteDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to skip the creation of a final DB cluster snapshot before
     * RDS deletes the DB cluster. If you set this value to <code>true</code>, RDS
     * doesn't create a final DB cluster snapshot. If you set this value to
     * <code>false</code> or don't specify it, RDS creates a DB cluster snapshot before
     * it deletes the DB cluster. By default, this parameter is disabled, so RDS
     * creates a final DB cluster snapshot.</p>  <p>If
     * <code>SkipFinalSnapshot</code> is disabled, you must specify a value for the
     * <code>FinalDBSnapshotIdentifier</code> parameter.</p> 
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }
    inline DeleteDBClusterRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster snapshot identifier of the new DB cluster snapshot created
     * when <code>SkipFinalSnapshot</code> is disabled.</p>  <p>If you specify
     * this parameter and also skip the creation of a final DB cluster snapshot with
     * the <code>SkipFinalShapshot</code> parameter, the request results in an
     * error.</p>  <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline const Aws::String& GetFinalDBSnapshotIdentifier() const{ return m_finalDBSnapshotIdentifier; }
    inline bool FinalDBSnapshotIdentifierHasBeenSet() const { return m_finalDBSnapshotIdentifierHasBeenSet; }
    inline void SetFinalDBSnapshotIdentifier(const Aws::String& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = value; }
    inline void SetFinalDBSnapshotIdentifier(Aws::String&& value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier = std::move(value); }
    inline void SetFinalDBSnapshotIdentifier(const char* value) { m_finalDBSnapshotIdentifierHasBeenSet = true; m_finalDBSnapshotIdentifier.assign(value); }
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(const Aws::String& value) { SetFinalDBSnapshotIdentifier(value); return *this;}
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(Aws::String&& value) { SetFinalDBSnapshotIdentifier(std::move(value)); return *this;}
    inline DeleteDBClusterRequest& WithFinalDBSnapshotIdentifier(const char* value) { SetFinalDBSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to remove automated backups immediately after the DB
     * cluster is deleted. This parameter isn't case-sensitive. The default is to
     * remove automated backups immediately after the DB cluster is deleted, unless the
     * Amazon Web Services Backup policy specifies a point-in-time restore rule.</p>
     */
    inline bool GetDeleteAutomatedBackups() const{ return m_deleteAutomatedBackups; }
    inline bool DeleteAutomatedBackupsHasBeenSet() const { return m_deleteAutomatedBackupsHasBeenSet; }
    inline void SetDeleteAutomatedBackups(bool value) { m_deleteAutomatedBackupsHasBeenSet = true; m_deleteAutomatedBackups = value; }
    inline DeleteDBClusterRequest& WithDeleteAutomatedBackups(bool value) { SetDeleteAutomatedBackups(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet = false;

    Aws::String m_finalDBSnapshotIdentifier;
    bool m_finalDBSnapshotIdentifierHasBeenSet = false;

    bool m_deleteAutomatedBackups;
    bool m_deleteAutomatedBackupsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
