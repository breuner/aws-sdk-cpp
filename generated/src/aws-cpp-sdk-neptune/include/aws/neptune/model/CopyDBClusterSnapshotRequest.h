﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class CopyDBClusterSnapshotRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API CopyDBClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBClusterSnapshot"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the "available" state.</p> </li> <li> <p>Specify a valid DB snapshot
     * identifier.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline const Aws::String& GetSourceDBClusterSnapshotIdentifier() const{ return m_sourceDBClusterSnapshotIdentifier; }
    inline bool SourceDBClusterSnapshotIdentifierHasBeenSet() const { return m_sourceDBClusterSnapshotIdentifierHasBeenSet; }
    inline void SetSourceDBClusterSnapshotIdentifier(const Aws::String& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = value; }
    inline void SetSourceDBClusterSnapshotIdentifier(Aws::String&& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = std::move(value); }
    inline void SetSourceDBClusterSnapshotIdentifier(const char* value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier.assign(value); }
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const Aws::String& value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(Aws::String&& value) { SetSourceDBClusterSnapshotIdentifier(std::move(value)); return *this;}
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const char* value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterSnapshotIdentifier() const{ return m_targetDBClusterSnapshotIdentifier; }
    inline bool TargetDBClusterSnapshotIdentifierHasBeenSet() const { return m_targetDBClusterSnapshotIdentifierHasBeenSet; }
    inline void SetTargetDBClusterSnapshotIdentifier(const Aws::String& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = value; }
    inline void SetTargetDBClusterSnapshotIdentifier(Aws::String&& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = std::move(value); }
    inline void SetTargetDBClusterSnapshotIdentifier(const char* value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier.assign(value); }
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const Aws::String& value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(Aws::String&& value) { SetTargetDBClusterSnapshotIdentifier(std::move(value)); return *this;}
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const char* value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Amazon KMS key ID for an encrypted DB cluster snapshot. The KMS
     * key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you copy an encrypted DB cluster
     * snapshot from your Amazon account, you can specify a value for
     * <code>KmsKeyId</code> to encrypt the copy with a new KMS encryption key. If you
     * don't specify a value for <code>KmsKeyId</code>, then the copy of the DB cluster
     * snapshot is encrypted with the same KMS key as the source DB cluster
     * snapshot.</p> <p>If you copy an encrypted DB cluster snapshot that is shared
     * from another Amazon account, then you must specify a value for
     * <code>KmsKeyId</code>.</p> <p> KMS encryption keys are specific to the Amazon
     * Region that they are created in, and you can't use encryption keys from one
     * Amazon Region in another Amazon Region.</p> <p>You cannot encrypt an unencrypted
     * DB cluster snapshot when you copy it. If you try to copy an unencrypted DB
     * cluster snapshot and specify a value for the KmsKeyId parameter, an error is
     * returned.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CopyDBClusterSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not currently supported.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}
    inline CopyDBClusterSnapshotRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to copy all tags from the source DB cluster snapshot to the target DB
     * cluster snapshot, and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CopyDBClusterSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the new DB cluster snapshot copy.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CopyDBClusterSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CopyDBClusterSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CopyDBClusterSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CopyDBClusterSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }
    inline CopyDBClusterSnapshotRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline CopyDBClusterSnapshotRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline CopyDBClusterSnapshotRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceDBClusterSnapshotIdentifier;
    bool m_sourceDBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_targetDBClusterSnapshotIdentifier;
    bool m_targetDBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
