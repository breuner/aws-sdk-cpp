﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/ResponseItemType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/DocumentMetadata.h>
#include <aws/workdocs/model/FolderMetadata.h>
#include <aws/workdocs/model/CommentMetadata.h>
#include <aws/workdocs/model/DocumentVersionMetadata.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>List of Documents, Folders, Comments, and Document Versions matching the
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ResponseItem">AWS
   * API Reference</a></p>
   */
  class ResponseItem
  {
  public:
    AWS_WORKDOCS_API ResponseItem();
    AWS_WORKDOCS_API ResponseItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API ResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of item being returned.</p>
     */
    inline const ResponseItemType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResponseItemType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResponseItemType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResponseItem& WithResourceType(const ResponseItemType& value) { SetResourceType(value); return *this;}
    inline ResponseItem& WithResourceType(ResponseItemType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The webUrl of the item being returned.</p>
     */
    inline const Aws::String& GetWebUrl() const{ return m_webUrl; }
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }
    inline void SetWebUrl(const Aws::String& value) { m_webUrlHasBeenSet = true; m_webUrl = value; }
    inline void SetWebUrl(Aws::String&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::move(value); }
    inline void SetWebUrl(const char* value) { m_webUrlHasBeenSet = true; m_webUrl.assign(value); }
    inline ResponseItem& WithWebUrl(const Aws::String& value) { SetWebUrl(value); return *this;}
    inline ResponseItem& WithWebUrl(Aws::String&& value) { SetWebUrl(std::move(value)); return *this;}
    inline ResponseItem& WithWebUrl(const char* value) { SetWebUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document that matches the query.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline bool DocumentMetadataHasBeenSet() const { return m_documentMetadataHasBeenSet; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::move(value); }
    inline ResponseItem& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline ResponseItem& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder that matches the query.</p>
     */
    inline const FolderMetadata& GetFolderMetadata() const{ return m_folderMetadata; }
    inline bool FolderMetadataHasBeenSet() const { return m_folderMetadataHasBeenSet; }
    inline void SetFolderMetadata(const FolderMetadata& value) { m_folderMetadataHasBeenSet = true; m_folderMetadata = value; }
    inline void SetFolderMetadata(FolderMetadata&& value) { m_folderMetadataHasBeenSet = true; m_folderMetadata = std::move(value); }
    inline ResponseItem& WithFolderMetadata(const FolderMetadata& value) { SetFolderMetadata(value); return *this;}
    inline ResponseItem& WithFolderMetadata(FolderMetadata&& value) { SetFolderMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment that matches the query.</p>
     */
    inline const CommentMetadata& GetCommentMetadata() const{ return m_commentMetadata; }
    inline bool CommentMetadataHasBeenSet() const { return m_commentMetadataHasBeenSet; }
    inline void SetCommentMetadata(const CommentMetadata& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = value; }
    inline void SetCommentMetadata(CommentMetadata&& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = std::move(value); }
    inline ResponseItem& WithCommentMetadata(const CommentMetadata& value) { SetCommentMetadata(value); return *this;}
    inline ResponseItem& WithCommentMetadata(CommentMetadata&& value) { SetCommentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version that matches the metadata.</p>
     */
    inline const DocumentVersionMetadata& GetDocumentVersionMetadata() const{ return m_documentVersionMetadata; }
    inline bool DocumentVersionMetadataHasBeenSet() const { return m_documentVersionMetadataHasBeenSet; }
    inline void SetDocumentVersionMetadata(const DocumentVersionMetadata& value) { m_documentVersionMetadataHasBeenSet = true; m_documentVersionMetadata = value; }
    inline void SetDocumentVersionMetadata(DocumentVersionMetadata&& value) { m_documentVersionMetadataHasBeenSet = true; m_documentVersionMetadata = std::move(value); }
    inline ResponseItem& WithDocumentVersionMetadata(const DocumentVersionMetadata& value) { SetDocumentVersionMetadata(value); return *this;}
    inline ResponseItem& WithDocumentVersionMetadata(DocumentVersionMetadata&& value) { SetDocumentVersionMetadata(std::move(value)); return *this;}
    ///@}
  private:

    ResponseItemType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_webUrl;
    bool m_webUrlHasBeenSet = false;

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    FolderMetadata m_folderMetadata;
    bool m_folderMetadataHasBeenSet = false;

    CommentMetadata m_commentMetadata;
    bool m_commentMetadataHasBeenSet = false;

    DocumentVersionMetadata m_documentVersionMetadata;
    bool m_documentVersionMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
