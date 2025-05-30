﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/SseKmsEncryptedObjectsStatus.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for filter information that you can use to select S3 objects that
   * are encrypted with Key Management Service (KMS).</p>  <p>This is not
   * supported by Amazon S3 on Outposts buckets.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SseKmsEncryptedObjects">AWS
   * API Reference</a></p>
   */
  class SseKmsEncryptedObjects
  {
  public:
    AWS_S3CONTROL_API SseKmsEncryptedObjects() = default;
    AWS_S3CONTROL_API SseKmsEncryptedObjects(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SseKmsEncryptedObjects& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies whether Amazon S3 replicates objects that are created with
     * server-side encryption by using an KMS key stored in Key Management Service.</p>
     */
    inline SseKmsEncryptedObjectsStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SseKmsEncryptedObjectsStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SseKmsEncryptedObjects& WithStatus(SseKmsEncryptedObjectsStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    SseKmsEncryptedObjectsStatus m_status{SseKmsEncryptedObjectsStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
