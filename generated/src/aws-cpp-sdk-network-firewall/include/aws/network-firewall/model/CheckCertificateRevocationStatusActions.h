﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RevocationCheckAction.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Defines the actions to take on the SSL/TLS connection if the certificate
   * presented by the server in the connection has a revoked or unknown
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CheckCertificateRevocationStatusActions">AWS
   * API Reference</a></p>
   */
  class CheckCertificateRevocationStatusActions
  {
  public:
    AWS_NETWORKFIREWALL_API CheckCertificateRevocationStatusActions() = default;
    AWS_NETWORKFIREWALL_API CheckCertificateRevocationStatusActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API CheckCertificateRevocationStatusActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures how Network Firewall processes traffic when it determines that the
     * certificate presented by the server in the SSL/TLS connection has a revoked
     * status.</p> <ul> <li> <p> <b>PASS</b> - Allow the connection to continue, and
     * pass subsequent packets to the stateful engine for inspection.</p> </li> <li>
     * <p> <b>DROP</b> - Network Firewall closes the connection and drops subsequent
     * packets for that connection.</p> </li> <li> <p> <b>REJECT</b> - Network Firewall
     * sends a TCP reject packet back to your client. The service closes the connection
     * and drops subsequent packets for that connection. <code>REJECT</code> is
     * available only for TCP traffic.</p> </li> </ul>
     */
    inline RevocationCheckAction GetRevokedStatusAction() const { return m_revokedStatusAction; }
    inline bool RevokedStatusActionHasBeenSet() const { return m_revokedStatusActionHasBeenSet; }
    inline void SetRevokedStatusAction(RevocationCheckAction value) { m_revokedStatusActionHasBeenSet = true; m_revokedStatusAction = value; }
    inline CheckCertificateRevocationStatusActions& WithRevokedStatusAction(RevocationCheckAction value) { SetRevokedStatusAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures how Network Firewall processes traffic when it determines that the
     * certificate presented by the server in the SSL/TLS connection has an unknown
     * status, or a status that cannot be determined for any other reason, including
     * when the service is unable to connect to the OCSP and CRL endpoints for the
     * certificate.</p> <ul> <li> <p> <b>PASS</b> - Allow the connection to continue,
     * and pass subsequent packets to the stateful engine for inspection.</p> </li>
     * <li> <p> <b>DROP</b> - Network Firewall closes the connection and drops
     * subsequent packets for that connection.</p> </li> <li> <p> <b>REJECT</b> -
     * Network Firewall sends a TCP reject packet back to your client. The service
     * closes the connection and drops subsequent packets for that connection.
     * <code>REJECT</code> is available only for TCP traffic.</p> </li> </ul>
     */
    inline RevocationCheckAction GetUnknownStatusAction() const { return m_unknownStatusAction; }
    inline bool UnknownStatusActionHasBeenSet() const { return m_unknownStatusActionHasBeenSet; }
    inline void SetUnknownStatusAction(RevocationCheckAction value) { m_unknownStatusActionHasBeenSet = true; m_unknownStatusAction = value; }
    inline CheckCertificateRevocationStatusActions& WithUnknownStatusAction(RevocationCheckAction value) { SetUnknownStatusAction(value); return *this;}
    ///@}
  private:

    RevocationCheckAction m_revokedStatusAction{RevocationCheckAction::NOT_SET};
    bool m_revokedStatusActionHasBeenSet = false;

    RevocationCheckAction m_unknownStatusAction{RevocationCheckAction::NOT_SET};
    bool m_unknownStatusActionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
