﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an attachment change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfaceAttachmentChanges">AWS
   * API Reference</a></p>
   */
  class NetworkInterfaceAttachmentChanges
  {
  public:
    AWS_EC2_API NetworkInterfaceAttachmentChanges() = default;
    AWS_EC2_API NetworkInterfaceAttachmentChanges(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterfaceAttachmentChanges& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    NetworkInterfaceAttachmentChanges& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the network interface is deleted when the instance is
     * terminated.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline NetworkInterfaceAttachmentChanges& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
