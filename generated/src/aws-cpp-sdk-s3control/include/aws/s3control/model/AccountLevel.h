﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ActivityMetrics.h>
#include <aws/s3control/model/BucketLevel.h>
#include <aws/s3control/model/AdvancedCostOptimizationMetrics.h>
#include <aws/s3control/model/AdvancedDataProtectionMetrics.h>
#include <aws/s3control/model/DetailedStatusCodesMetrics.h>
#include <aws/s3control/model/StorageLensGroupLevel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container element for the account-level Amazon S3 Storage Lens
   * configuration.</p> <p>For more information about S3 Storage Lens, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
   * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
   * User Guide</i>. For a complete list of S3 Storage Lens metrics, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
   * Storage Lens metrics glossary</a> in the <i>Amazon S3 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AccountLevel">AWS
   * API Reference</a></p>
   */
  class AccountLevel
  {
  public:
    AWS_S3CONTROL_API AccountLevel();
    AWS_S3CONTROL_API AccountLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AccountLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container element for S3 Storage Lens activity metrics.</p>
     */
    inline const ActivityMetrics& GetActivityMetrics() const{ return m_activityMetrics; }
    inline bool ActivityMetricsHasBeenSet() const { return m_activityMetricsHasBeenSet; }
    inline void SetActivityMetrics(const ActivityMetrics& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = value; }
    inline void SetActivityMetrics(ActivityMetrics&& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = std::move(value); }
    inline AccountLevel& WithActivityMetrics(const ActivityMetrics& value) { SetActivityMetrics(value); return *this;}
    inline AccountLevel& WithActivityMetrics(ActivityMetrics&& value) { SetActivityMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline const BucketLevel& GetBucketLevel() const{ return m_bucketLevel; }
    inline bool BucketLevelHasBeenSet() const { return m_bucketLevelHasBeenSet; }
    inline void SetBucketLevel(const BucketLevel& value) { m_bucketLevelHasBeenSet = true; m_bucketLevel = value; }
    inline void SetBucketLevel(BucketLevel&& value) { m_bucketLevelHasBeenSet = true; m_bucketLevel = std::move(value); }
    inline AccountLevel& WithBucketLevel(const BucketLevel& value) { SetBucketLevel(value); return *this;}
    inline AccountLevel& WithBucketLevel(BucketLevel&& value) { SetBucketLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for S3 Storage Lens advanced cost-optimization
     * metrics.</p>
     */
    inline const AdvancedCostOptimizationMetrics& GetAdvancedCostOptimizationMetrics() const{ return m_advancedCostOptimizationMetrics; }
    inline bool AdvancedCostOptimizationMetricsHasBeenSet() const { return m_advancedCostOptimizationMetricsHasBeenSet; }
    inline void SetAdvancedCostOptimizationMetrics(const AdvancedCostOptimizationMetrics& value) { m_advancedCostOptimizationMetricsHasBeenSet = true; m_advancedCostOptimizationMetrics = value; }
    inline void SetAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetrics&& value) { m_advancedCostOptimizationMetricsHasBeenSet = true; m_advancedCostOptimizationMetrics = std::move(value); }
    inline AccountLevel& WithAdvancedCostOptimizationMetrics(const AdvancedCostOptimizationMetrics& value) { SetAdvancedCostOptimizationMetrics(value); return *this;}
    inline AccountLevel& WithAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetrics&& value) { SetAdvancedCostOptimizationMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for S3 Storage Lens advanced data-protection metrics.</p>
     */
    inline const AdvancedDataProtectionMetrics& GetAdvancedDataProtectionMetrics() const{ return m_advancedDataProtectionMetrics; }
    inline bool AdvancedDataProtectionMetricsHasBeenSet() const { return m_advancedDataProtectionMetricsHasBeenSet; }
    inline void SetAdvancedDataProtectionMetrics(const AdvancedDataProtectionMetrics& value) { m_advancedDataProtectionMetricsHasBeenSet = true; m_advancedDataProtectionMetrics = value; }
    inline void SetAdvancedDataProtectionMetrics(AdvancedDataProtectionMetrics&& value) { m_advancedDataProtectionMetricsHasBeenSet = true; m_advancedDataProtectionMetrics = std::move(value); }
    inline AccountLevel& WithAdvancedDataProtectionMetrics(const AdvancedDataProtectionMetrics& value) { SetAdvancedDataProtectionMetrics(value); return *this;}
    inline AccountLevel& WithAdvancedDataProtectionMetrics(AdvancedDataProtectionMetrics&& value) { SetAdvancedDataProtectionMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for detailed status code metrics. </p>
     */
    inline const DetailedStatusCodesMetrics& GetDetailedStatusCodesMetrics() const{ return m_detailedStatusCodesMetrics; }
    inline bool DetailedStatusCodesMetricsHasBeenSet() const { return m_detailedStatusCodesMetricsHasBeenSet; }
    inline void SetDetailedStatusCodesMetrics(const DetailedStatusCodesMetrics& value) { m_detailedStatusCodesMetricsHasBeenSet = true; m_detailedStatusCodesMetrics = value; }
    inline void SetDetailedStatusCodesMetrics(DetailedStatusCodesMetrics&& value) { m_detailedStatusCodesMetricsHasBeenSet = true; m_detailedStatusCodesMetrics = std::move(value); }
    inline AccountLevel& WithDetailedStatusCodesMetrics(const DetailedStatusCodesMetrics& value) { SetDetailedStatusCodesMetrics(value); return *this;}
    inline AccountLevel& WithDetailedStatusCodesMetrics(DetailedStatusCodesMetrics&& value) { SetDetailedStatusCodesMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A container element for S3 Storage Lens groups metrics. </p>
     */
    inline const StorageLensGroupLevel& GetStorageLensGroupLevel() const{ return m_storageLensGroupLevel; }
    inline bool StorageLensGroupLevelHasBeenSet() const { return m_storageLensGroupLevelHasBeenSet; }
    inline void SetStorageLensGroupLevel(const StorageLensGroupLevel& value) { m_storageLensGroupLevelHasBeenSet = true; m_storageLensGroupLevel = value; }
    inline void SetStorageLensGroupLevel(StorageLensGroupLevel&& value) { m_storageLensGroupLevelHasBeenSet = true; m_storageLensGroupLevel = std::move(value); }
    inline AccountLevel& WithStorageLensGroupLevel(const StorageLensGroupLevel& value) { SetStorageLensGroupLevel(value); return *this;}
    inline AccountLevel& WithStorageLensGroupLevel(StorageLensGroupLevel&& value) { SetStorageLensGroupLevel(std::move(value)); return *this;}
    ///@}
  private:

    ActivityMetrics m_activityMetrics;
    bool m_activityMetricsHasBeenSet = false;

    BucketLevel m_bucketLevel;
    bool m_bucketLevelHasBeenSet = false;

    AdvancedCostOptimizationMetrics m_advancedCostOptimizationMetrics;
    bool m_advancedCostOptimizationMetricsHasBeenSet = false;

    AdvancedDataProtectionMetrics m_advancedDataProtectionMetrics;
    bool m_advancedDataProtectionMetricsHasBeenSet = false;

    DetailedStatusCodesMetrics m_detailedStatusCodesMetrics;
    bool m_detailedStatusCodesMetricsHasBeenSet = false;

    StorageLensGroupLevel m_storageLensGroupLevel;
    bool m_storageLensGroupLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
