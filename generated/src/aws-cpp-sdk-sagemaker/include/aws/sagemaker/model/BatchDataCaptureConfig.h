﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration to control how SageMaker captures inference data for batch
   * transform jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDataCaptureConfig">AWS
   * API Reference</a></p>
   */
  class BatchDataCaptureConfig
  {
  public:
    AWS_SAGEMAKER_API BatchDataCaptureConfig() = default;
    AWS_SAGEMAKER_API BatchDataCaptureConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchDataCaptureConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location being used to capture the data.</p>
     */
    inline const Aws::String& GetDestinationS3Uri() const { return m_destinationS3Uri; }
    inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }
    template<typename DestinationS3UriT = Aws::String>
    void SetDestinationS3Uri(DestinationS3UriT&& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = std::forward<DestinationS3UriT>(value); }
    template<typename DestinationS3UriT = Aws::String>
    BatchDataCaptureConfig& WithDestinationS3Uri(DestinationS3UriT&& value) { SetDestinationS3Uri(std::forward<DestinationS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker uses to encrypt data on the storage volume attached
     * to the ML compute instance that hosts the batch transform job.</p> <p>The
     * KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    BatchDataCaptureConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag that indicates whether to append inference id to the output.</p>
     */
    inline bool GetGenerateInferenceId() const { return m_generateInferenceId; }
    inline bool GenerateInferenceIdHasBeenSet() const { return m_generateInferenceIdHasBeenSet; }
    inline void SetGenerateInferenceId(bool value) { m_generateInferenceIdHasBeenSet = true; m_generateInferenceId = value; }
    inline BatchDataCaptureConfig& WithGenerateInferenceId(bool value) { SetGenerateInferenceId(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationS3Uri;
    bool m_destinationS3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_generateInferenceId{false};
    bool m_generateInferenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
