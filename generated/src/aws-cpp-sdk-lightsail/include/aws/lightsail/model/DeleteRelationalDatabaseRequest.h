﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DeleteRelationalDatabaseRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteRelationalDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRelationalDatabase"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the database that you are deleting.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }
    inline DeleteRelationalDatabaseRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}
    inline DeleteRelationalDatabaseRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}
    inline DeleteRelationalDatabaseRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a final database snapshot is created before your database
     * is deleted. If <code>true</code> is specified, no database snapshot is created.
     * If <code>false</code> is specified, a database snapshot is created before your
     * database is deleted.</p> <p>You must specify the <code>final relational database
     * snapshot name</code> parameter if the <code>skip final snapshot</code> parameter
     * is <code>false</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetSkipFinalSnapshot() const{ return m_skipFinalSnapshot; }
    inline bool SkipFinalSnapshotHasBeenSet() const { return m_skipFinalSnapshotHasBeenSet; }
    inline void SetSkipFinalSnapshot(bool value) { m_skipFinalSnapshotHasBeenSet = true; m_skipFinalSnapshot = value; }
    inline DeleteRelationalDatabaseRequest& WithSkipFinalSnapshot(bool value) { SetSkipFinalSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database snapshot created if <code>skip final snapshot</code>
     * is <code>false</code>, which is the default value for that parameter.</p> 
     * <p>Specifying this parameter and also specifying the <code>skip final
     * snapshot</code> parameter to <code>true</code> results in an error.</p> 
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline const Aws::String& GetFinalRelationalDatabaseSnapshotName() const{ return m_finalRelationalDatabaseSnapshotName; }
    inline bool FinalRelationalDatabaseSnapshotNameHasBeenSet() const { return m_finalRelationalDatabaseSnapshotNameHasBeenSet; }
    inline void SetFinalRelationalDatabaseSnapshotName(const Aws::String& value) { m_finalRelationalDatabaseSnapshotNameHasBeenSet = true; m_finalRelationalDatabaseSnapshotName = value; }
    inline void SetFinalRelationalDatabaseSnapshotName(Aws::String&& value) { m_finalRelationalDatabaseSnapshotNameHasBeenSet = true; m_finalRelationalDatabaseSnapshotName = std::move(value); }
    inline void SetFinalRelationalDatabaseSnapshotName(const char* value) { m_finalRelationalDatabaseSnapshotNameHasBeenSet = true; m_finalRelationalDatabaseSnapshotName.assign(value); }
    inline DeleteRelationalDatabaseRequest& WithFinalRelationalDatabaseSnapshotName(const Aws::String& value) { SetFinalRelationalDatabaseSnapshotName(value); return *this;}
    inline DeleteRelationalDatabaseRequest& WithFinalRelationalDatabaseSnapshotName(Aws::String&& value) { SetFinalRelationalDatabaseSnapshotName(std::move(value)); return *this;}
    inline DeleteRelationalDatabaseRequest& WithFinalRelationalDatabaseSnapshotName(const char* value) { SetFinalRelationalDatabaseSnapshotName(value); return *this;}
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    bool m_skipFinalSnapshot;
    bool m_skipFinalSnapshotHasBeenSet = false;

    Aws::String m_finalRelationalDatabaseSnapshotName;
    bool m_finalRelationalDatabaseSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
