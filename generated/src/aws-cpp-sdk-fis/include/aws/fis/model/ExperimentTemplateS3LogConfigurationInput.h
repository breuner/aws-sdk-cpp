﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Specifies the configuration for experiment logging to Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateS3LogConfigurationInput">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplateS3LogConfigurationInput
  {
  public:
    AWS_FIS_API ExperimentTemplateS3LogConfigurationInput();
    AWS_FIS_API ExperimentTemplateS3LogConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplateS3LogConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the destination bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline ExperimentTemplateS3LogConfigurationInput& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline ExperimentTemplateS3LogConfigurationInput& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline ExperimentTemplateS3LogConfigurationInput& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket prefix.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline ExperimentTemplateS3LogConfigurationInput& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline ExperimentTemplateS3LogConfigurationInput& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline ExperimentTemplateS3LogConfigurationInput& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
