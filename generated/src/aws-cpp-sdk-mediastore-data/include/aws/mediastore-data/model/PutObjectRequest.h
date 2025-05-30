﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/MediaStoreDataRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/model/StorageClass.h>
#include <aws/mediastore-data/model/UploadAvailability.h>
#include <utility>

namespace Aws
{
namespace MediaStoreData
{
namespace Model
{

  /**
   */
  class PutObjectRequest : public StreamingMediaStoreDataRequest
  {
  public:
    AWS_MEDIASTOREDATA_API PutObjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutObject"; }

    AWS_MEDIASTOREDATA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_MEDIASTOREDATA_API bool SignBody() const override { return false; }

    AWS_MEDIASTOREDATA_API bool IsChunked() const override { return true; }


    ///@{
    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    PutObjectRequest& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    PutObjectRequest& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the storage class of a <code>Put</code> request. Defaults to
     * high-performance temporal storage class, and objects are persisted into durable
     * storage shortly after being received.</p>
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline PutObjectRequest& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the availability of an object while it is still uploading. If the
     * value is set to <code>streaming</code>, the object is available for downloading
     * after some initial buffering but before the object is uploaded completely. If
     * the value is set to <code>standard</code>, the object is available for
     * downloading only when it is uploaded completely. The default value for this
     * header is <code>standard</code>.</p> <p>To use this header, you must also set
     * the HTTP <code>Transfer-Encoding</code> header to <code>chunked</code>.</p>
     */
    inline UploadAvailability GetUploadAvailability() const { return m_uploadAvailability; }
    inline bool UploadAvailabilityHasBeenSet() const { return m_uploadAvailabilityHasBeenSet; }
    inline void SetUploadAvailability(UploadAvailability value) { m_uploadAvailabilityHasBeenSet = true; m_uploadAvailability = value; }
    inline PutObjectRequest& WithUploadAvailability(UploadAvailability value) { SetUploadAvailability(value); return *this;}
    ///@}
  private:


    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    UploadAvailability m_uploadAvailability{UploadAvailability::NOT_SET};
    bool m_uploadAvailabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
