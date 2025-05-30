﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class GetApiMappingRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API GetApiMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApiMapping"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const { return m_apiMappingId; }
    inline bool ApiMappingIdHasBeenSet() const { return m_apiMappingIdHasBeenSet; }
    template<typename ApiMappingIdT = Aws::String>
    void SetApiMappingId(ApiMappingIdT&& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = std::forward<ApiMappingIdT>(value); }
    template<typename ApiMappingIdT = Aws::String>
    GetApiMappingRequest& WithApiMappingId(ApiMappingIdT&& value) { SetApiMappingId(std::forward<ApiMappingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetApiMappingRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiMappingId;
    bool m_apiMappingIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
