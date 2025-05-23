﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/Tier.h>
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
   * <p>Container for S3 Glacier job parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GlacierJobParameters">AWS
   * API Reference</a></p>
   */
  class GlacierJobParameters
  {
  public:
    AWS_S3CRT_API GlacierJobParameters() = default;
    AWS_S3CRT_API GlacierJobParameters(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API GlacierJobParameters& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline Tier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(Tier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline GlacierJobParameters& WithTier(Tier value) { SetTier(value); return *this;}
    ///@}
  private:

    Tier m_tier{Tier::NOT_SET};
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
