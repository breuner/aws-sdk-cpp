﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/OrganizationNode.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class CreatePortfolioShareRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API CreatePortfolioShareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePortfolioShare"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    CreatePortfolioShareRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const { return m_portfolioId; }
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }
    template<typename PortfolioIdT = Aws::String>
    void SetPortfolioId(PortfolioIdT&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::forward<PortfolioIdT>(value); }
    template<typename PortfolioIdT = Aws::String>
    CreatePortfolioShareRequest& WithPortfolioId(PortfolioIdT&& value) { SetPortfolioId(std::forward<PortfolioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID. For example,
     * <code>123456789012</code>.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreatePortfolioShareRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization node to whom you are going to share. When you pass
     * <code>OrganizationNode</code>, it creates <code>PortfolioShare</code> for all of
     * the Amazon Web Services accounts that are associated to the
     * <code>OrganizationNode</code>. The output returns a
     * <code>PortfolioShareToken</code>, which enables the administrator to monitor the
     * status of the <code>PortfolioShare</code> creation process.</p>
     */
    inline const OrganizationNode& GetOrganizationNode() const { return m_organizationNode; }
    inline bool OrganizationNodeHasBeenSet() const { return m_organizationNodeHasBeenSet; }
    template<typename OrganizationNodeT = OrganizationNode>
    void SetOrganizationNode(OrganizationNodeT&& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = std::forward<OrganizationNodeT>(value); }
    template<typename OrganizationNodeT = OrganizationNode>
    CreatePortfolioShareRequest& WithOrganizationNode(OrganizationNodeT&& value) { SetOrganizationNode(std::forward<OrganizationNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables <code>TagOptions </code> sharing when creating the
     * portfolio share. If this flag is not provided, TagOptions sharing is
     * disabled.</p>
     */
    inline bool GetShareTagOptions() const { return m_shareTagOptions; }
    inline bool ShareTagOptionsHasBeenSet() const { return m_shareTagOptionsHasBeenSet; }
    inline void SetShareTagOptions(bool value) { m_shareTagOptionsHasBeenSet = true; m_shareTagOptions = value; }
    inline CreatePortfolioShareRequest& WithShareTagOptions(bool value) { SetShareTagOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is only supported for portfolios with an
     * <b>OrganizationalNode</b> Type of <code>ORGANIZATION</code> or
     * <code>ORGANIZATIONAL_UNIT</code>. </p> <p>Enables or disables
     * <code>Principal</code> sharing when creating the portfolio share. If you do
     * <b>not</b> provide this flag, principal sharing is disabled. </p> <p>When you
     * enable Principal Name Sharing for a portfolio share, the share recipient account
     * end users with a principal that matches any of the associated IAM patterns can
     * provision products from the portfolio. Once shared, the share recipient can view
     * associations of <code>PrincipalType</code>: <code>IAM_PATTERN</code> on their
     * portfolio. You can create the principals in the recipient account before or
     * after creating the share. </p>
     */
    inline bool GetSharePrincipals() const { return m_sharePrincipals; }
    inline bool SharePrincipalsHasBeenSet() const { return m_sharePrincipalsHasBeenSet; }
    inline void SetSharePrincipals(bool value) { m_sharePrincipalsHasBeenSet = true; m_sharePrincipals = value; }
    inline CreatePortfolioShareRequest& WithSharePrincipals(bool value) { SetSharePrincipals(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    OrganizationNode m_organizationNode;
    bool m_organizationNodeHasBeenSet = false;

    bool m_shareTagOptions{false};
    bool m_shareTagOptionsHasBeenSet = false;

    bool m_sharePrincipals{false};
    bool m_sharePrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
