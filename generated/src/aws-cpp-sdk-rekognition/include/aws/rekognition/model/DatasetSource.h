﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/GroundTruthManifest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p> The source that Amazon Rekognition Custom Labels uses to create a dataset.
   * To use an Amazon Sagemaker format manifest file, specify the S3 bucket location
   * in the <code>GroundTruthManifest</code> field. The S3 bucket must be in your AWS
   * account. To create a copy of an existing dataset, specify the Amazon Resource
   * Name (ARN) of an existing dataset in <code>DatasetArn</code>.</p> <p>You need to
   * specify a value for <code>DatasetArn</code> or <code>GroundTruthManifest</code>,
   * but not both. if you supply both values, or if you don't specify any values, an
   * InvalidParameterException exception occurs. </p> <p>For more information, see
   * <a>CreateDataset</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetSource">AWS
   * API Reference</a></p>
   */
  class DatasetSource
  {
  public:
    AWS_REKOGNITION_API DatasetSource() = default;
    AWS_REKOGNITION_API DatasetSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const GroundTruthManifest& GetGroundTruthManifest() const { return m_groundTruthManifest; }
    inline bool GroundTruthManifestHasBeenSet() const { return m_groundTruthManifestHasBeenSet; }
    template<typename GroundTruthManifestT = GroundTruthManifest>
    void SetGroundTruthManifest(GroundTruthManifestT&& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = std::forward<GroundTruthManifestT>(value); }
    template<typename GroundTruthManifestT = GroundTruthManifest>
    DatasetSource& WithGroundTruthManifest(GroundTruthManifestT&& value) { SetGroundTruthManifest(std::forward<GroundTruthManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of an Amazon Rekognition Custom Labels dataset that you want to
     * copy. </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DatasetSource& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}
  private:

    GroundTruthManifest m_groundTruthManifest;
    bool m_groundTruthManifestHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
