﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The Amazon Chime Business Calling settings for the administrator's AWS
   * account. Includes any Amazon S3 buckets designated for storing call detail
   * records.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BusinessCallingSettings">AWS
   * API Reference</a></p>
   */
  class BusinessCallingSettings
  {
  public:
    AWS_CHIME_API BusinessCallingSettings();
    AWS_CHIME_API BusinessCallingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API BusinessCallingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline const Aws::String& GetCdrBucket() const{ return m_cdrBucket; }
    inline bool CdrBucketHasBeenSet() const { return m_cdrBucketHasBeenSet; }
    inline void SetCdrBucket(const Aws::String& value) { m_cdrBucketHasBeenSet = true; m_cdrBucket = value; }
    inline void SetCdrBucket(Aws::String&& value) { m_cdrBucketHasBeenSet = true; m_cdrBucket = std::move(value); }
    inline void SetCdrBucket(const char* value) { m_cdrBucketHasBeenSet = true; m_cdrBucket.assign(value); }
    inline BusinessCallingSettings& WithCdrBucket(const Aws::String& value) { SetCdrBucket(value); return *this;}
    inline BusinessCallingSettings& WithCdrBucket(Aws::String&& value) { SetCdrBucket(std::move(value)); return *this;}
    inline BusinessCallingSettings& WithCdrBucket(const char* value) { SetCdrBucket(value); return *this;}
    ///@}
  private:

    Aws::String m_cdrBucket;
    bool m_cdrBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
