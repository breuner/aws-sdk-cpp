﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The Amazon Resource Name (ARN) of the AWS KMS key used to encrypt the shared
   * S3 objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/KmsKeyToGrant">AWS
   * API Reference</a></p>
   */
  class KmsKeyToGrant
  {
  public:
    AWS_DATAEXCHANGE_API KmsKeyToGrant() = default;
    AWS_DATAEXCHANGE_API KmsKeyToGrant(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API KmsKeyToGrant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS KMS CMK (Key Management System Customer Managed Key) used to encrypt
     * S3 objects in the shared S3 Bucket. AWS Data exchange will create a KMS grant
     * for each subscriber to allow them to access and decrypt their entitled data that
     * is encrypted using this KMS key specified.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    KmsKeyToGrant& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
