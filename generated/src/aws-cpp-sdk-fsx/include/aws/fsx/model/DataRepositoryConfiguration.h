﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryLifecycle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/AutoImportPolicyType.h>
#include <aws/fsx/model/DataRepositoryFailureDetails.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The data repository configuration object for Lustre file systems returned in
   * the response of the <code>CreateFileSystem</code> operation.</p> <p>This data
   * type is not supported on file systems with a data repository association. For
   * file systems with a data repository association, see .</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryConfiguration">AWS
   * API Reference</a></p>
   */
  class DataRepositoryConfiguration
  {
  public:
    AWS_FSX_API DataRepositoryConfiguration() = default;
    AWS_FSX_API DataRepositoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DataRepositoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the state of the file system's S3 durable data repository, if it is
     * configured with an S3 repository. The lifecycle can have the following
     * values:</p> <ul> <li> <p> <code>CREATING</code> - The data repository
     * configuration between the FSx file system and the linked S3 data repository is
     * being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository is available for use.</p> </li>
     * <li> <p> <code>MISCONFIGURED</code> - Amazon FSx cannot automatically import
     * updates from the S3 bucket until the data repository configuration is corrected.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/troubleshooting.html#troubleshooting-misconfigured-data-repository">Troubleshooting
     * a Misconfigured linked S3 bucket</a>. </p> </li> <li> <p> <code>UPDATING</code>
     * - The data repository is undergoing a customer initiated update and availability
     * may be impacted.</p> </li> <li> <p> <code>FAILED</code> - The data repository is
     * in a terminal state that cannot be recovered.</p> </li> </ul>
     */
    inline DataRepositoryLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(DataRepositoryLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DataRepositoryConfiguration& WithLifecycle(DataRepositoryLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline const Aws::String& GetImportPath() const { return m_importPath; }
    inline bool ImportPathHasBeenSet() const { return m_importPathHasBeenSet; }
    template<typename ImportPathT = Aws::String>
    void SetImportPath(ImportPathT&& value) { m_importPathHasBeenSet = true; m_importPath = std::forward<ImportPathT>(value); }
    template<typename ImportPathT = Aws::String>
    DataRepositoryConfiguration& WithImportPath(ImportPathT&& value) { SetImportPath(std::forward<ImportPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline const Aws::String& GetExportPath() const { return m_exportPath; }
    inline bool ExportPathHasBeenSet() const { return m_exportPathHasBeenSet; }
    template<typename ExportPathT = Aws::String>
    void SetExportPath(ExportPathT&& value) { m_exportPathHasBeenSet = true; m_exportPath = std::forward<ExportPathT>(value); }
    template<typename ExportPathT = Aws::String>
    DataRepositoryConfiguration& WithExportPath(ExportPathT&& value) { SetExportPath(std::forward<ExportPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const { return m_importedFileChunkSize; }
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }
    inline DataRepositoryConfiguration& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the file system's linked S3 data repository's
     * <code>AutoImportPolicy</code>. The AutoImportPolicy configures how Amazon FSx
     * keeps your file and directory listings up to date as you add or modify objects
     * in your linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option.</p> </li> <li> <p>
     * <code>NEW_CHANGED_DELETED</code> - AutoImport is on. Amazon FSx automatically
     * imports file and directory listings of any new objects added to the S3 bucket,
     * any existing objects that are changed in the S3 bucket, and any objects that
     * were deleted in the S3 bucket.</p> </li> </ul>
     */
    inline AutoImportPolicyType GetAutoImportPolicy() const { return m_autoImportPolicy; }
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }
    inline void SetAutoImportPolicy(AutoImportPolicyType value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }
    inline DataRepositoryConfiguration& WithAutoImportPolicy(AutoImportPolicyType value) { SetAutoImportPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const DataRepositoryFailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = DataRepositoryFailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = DataRepositoryFailureDetails>
    DataRepositoryConfiguration& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}
  private:

    DataRepositoryLifecycle m_lifecycle{DataRepositoryLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_importPath;
    bool m_importPathHasBeenSet = false;

    Aws::String m_exportPath;
    bool m_exportPathHasBeenSet = false;

    int m_importedFileChunkSize{0};
    bool m_importedFileChunkSizeHasBeenSet = false;

    AutoImportPolicyType m_autoImportPolicy{AutoImportPolicyType::NOT_SET};
    bool m_autoImportPolicyHasBeenSet = false;

    DataRepositoryFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
