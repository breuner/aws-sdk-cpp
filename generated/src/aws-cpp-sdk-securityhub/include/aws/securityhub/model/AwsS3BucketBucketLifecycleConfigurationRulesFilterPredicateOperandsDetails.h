﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A value to use for the filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag that is assigned to matching objects.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails& GetTag() const { return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    template<typename TagT = AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails>
    void SetTag(TagT&& value) { m_tagHasBeenSet = true; m_tag = std::forward<TagT>(value); }
    template<typename TagT = AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithTag(TagT&& value) { SetTag(std::forward<TagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails m_tag;
    bool m_tagHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
