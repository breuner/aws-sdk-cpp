﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>When you configure a SQL-based Kinesis Data Analytics application's output,
   * identifies an Amazon Lambda function as the destination. You provide the
   * function Amazon Resource Name (ARN) of the Lambda function. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/LambdaOutput">AWS
   * API Reference</a></p>
   */
  class LambdaOutput
  {
  public:
    AWS_KINESISANALYTICSV2_API LambdaOutput() = default;
    AWS_KINESISANALYTICSV2_API LambdaOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API LambdaOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p>  <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    LambdaOutput& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
