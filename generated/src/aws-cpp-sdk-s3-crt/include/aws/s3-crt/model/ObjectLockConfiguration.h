﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ObjectLockEnabled.h>
#include <aws/s3-crt/model/ObjectLockRule.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>The container element for Object Lock configuration parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ObjectLockConfiguration">AWS
   * API Reference</a></p>
   */
  class ObjectLockConfiguration
  {
  public:
    AWS_S3CRT_API ObjectLockConfiguration() = default;
    AWS_S3CRT_API ObjectLockConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API ObjectLockConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates whether this bucket has an Object Lock configuration enabled.
     * Enable <code>ObjectLockEnabled</code> when you apply
     * <code>ObjectLockConfiguration</code> to a bucket. </p>
     */
    inline ObjectLockEnabled GetObjectLockEnabled() const { return m_objectLockEnabled; }
    inline bool ObjectLockEnabledHasBeenSet() const { return m_objectLockEnabledHasBeenSet; }
    inline void SetObjectLockEnabled(ObjectLockEnabled value) { m_objectLockEnabledHasBeenSet = true; m_objectLockEnabled = value; }
    inline ObjectLockConfiguration& WithObjectLockEnabled(ObjectLockEnabled value) { SetObjectLockEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Object Lock rule for the specified object. Enable the this rule
     * when you apply <code>ObjectLockConfiguration</code> to a bucket. Bucket settings
     * require both a mode and a period. The period can be either <code>Days</code> or
     * <code>Years</code> but you must select one. You cannot specify <code>Days</code>
     * and <code>Years</code> at the same time.</p>
     */
    inline const ObjectLockRule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = ObjectLockRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = ObjectLockRule>
    ObjectLockConfiguration& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}
  private:

    ObjectLockEnabled m_objectLockEnabled{ObjectLockEnabled::NOT_SET};
    bool m_objectLockEnabledHasBeenSet = false;

    ObjectLockRule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
