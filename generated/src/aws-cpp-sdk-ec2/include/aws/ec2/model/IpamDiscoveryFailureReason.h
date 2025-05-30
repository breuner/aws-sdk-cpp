﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/IpamDiscoveryFailureCode.h>
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
   * <p>The discovery failure reason.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamDiscoveryFailureReason">AWS
   * API Reference</a></p>
   */
  class IpamDiscoveryFailureReason
  {
  public:
    AWS_EC2_API IpamDiscoveryFailureReason() = default;
    AWS_EC2_API IpamDiscoveryFailureReason(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamDiscoveryFailureReason& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The discovery failure code.</p> <ul> <li> <p>
     * <code>assume-role-failure</code> - IPAM could not assume the Amazon Web Services
     * IAM service-linked role. This could be because of any of the following:</p> <ul>
     * <li> <p>SLR has not been created yet and IPAM is still creating it.</p> </li>
     * <li> <p>You have opted-out of the IPAM home Region.</p> </li> <li> <p>Account
     * you are using as your IPAM account has been suspended.</p> </li> </ul> </li>
     * <li> <p> <code>throttling-failure</code> - IPAM account is already using the
     * allotted transactions per second and IPAM is receiving a throttling error when
     * assuming the Amazon Web Services IAM SLR.</p> </li> <li> <p>
     * <code>unauthorized-failure</code> - Amazon Web Services account making the
     * request is not authorized. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">AuthFailure</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> </li> </ul>
     */
    inline IpamDiscoveryFailureCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(IpamDiscoveryFailureCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline IpamDiscoveryFailureReason& WithCode(IpamDiscoveryFailureCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The discovery failure message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    IpamDiscoveryFailureReason& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    IpamDiscoveryFailureCode m_code{IpamDiscoveryFailureCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
