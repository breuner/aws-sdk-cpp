﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/S3DataType.h>
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
   * <p>Describes the S3 data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformS3DataSource">AWS
   * API Reference</a></p>
   */
  class TransformS3DataSource
  {
  public:
    AWS_SAGEMAKER_API TransformS3DataSource() = default;
    AWS_SAGEMAKER_API TransformS3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformS3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If you choose <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name
     * prefix. Amazon SageMaker uses all objects with the specified key name prefix for
     * batch transform. </p> <p>If you choose <code>ManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is a manifest file containing a
     * list of object keys that you want Amazon SageMaker to use for batch transform.
     * </p> <p>The following values are compatible: <code>ManifestFile</code>,
     * <code>S3Prefix</code> </p> <p>The following value is not compatible:
     * <code>AugmentedManifestFile</code> </p>
     */
    inline S3DataType GetS3DataType() const { return m_s3DataType; }
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }
    inline void SetS3DataType(S3DataType value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }
    inline TransformS3DataSource& WithS3DataType(S3DataType value) { SetS3DataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example:</p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix/</code>.
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> The manifest is an S3
     * object which is a JSON file with the following format: </p> <p> <code>[
     * {"prefix": "s3://customer_bucket/some/prefix/"},</code> </p> <p>
     * <code>"relative/path/to/custdata-1",</code> </p> <p>
     * <code>"relative/path/custdata-2",</code> </p> <p> <code>...</code> </p> <p>
     * <code>"relative/path/custdata-N"</code> </p> <p> <code>]</code> </p> <p> The
     * preceding JSON matches the following <code>S3Uris</code>: </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-2</code> </p>
     * <p> <code>...</code> </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/custdata-N</code> </p> <p>
     * The complete set of <code>S3Uris</code> in this manifest constitutes the input
     * data for the channel for this datasource. The object that each
     * <code>S3Uris</code> points to must be readable by the IAM role that Amazon
     * SageMaker uses to perform tasks on your behalf.</p> </li> </ul>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    TransformS3DataSource& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}
  private:

    S3DataType m_s3DataType{S3DataType::NOT_SET};
    bool m_s3DataTypeHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
