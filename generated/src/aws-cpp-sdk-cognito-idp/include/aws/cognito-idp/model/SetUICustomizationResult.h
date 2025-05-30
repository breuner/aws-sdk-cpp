﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UICustomizationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  class SetUICustomizationResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hosted UI branding that you applied.</p>
     */
    inline const UICustomizationType& GetUICustomization() const { return m_uICustomization; }
    template<typename UICustomizationT = UICustomizationType>
    void SetUICustomization(UICustomizationT&& value) { m_uICustomizationHasBeenSet = true; m_uICustomization = std::forward<UICustomizationT>(value); }
    template<typename UICustomizationT = UICustomizationType>
    SetUICustomizationResult& WithUICustomization(UICustomizationT&& value) { SetUICustomization(std::forward<UICustomizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SetUICustomizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UICustomizationType m_uICustomization;
    bool m_uICustomizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
