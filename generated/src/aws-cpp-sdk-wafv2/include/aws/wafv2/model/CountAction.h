﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CustomRequestHandling.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Specifies that WAF should count the request. Optionally defines additional
   * custom handling for the request.</p> <p>This is used in the context of other
   * settings, for example to specify values for <a>RuleAction</a> and web ACL
   * <a>DefaultAction</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CountAction">AWS
   * API Reference</a></p>
   */
  class CountAction
  {
  public:
    AWS_WAFV2_API CountAction() = default;
    AWS_WAFV2_API CountAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CountAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines custom handling for the web request.</p> <p>For information about
     * customizing web requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const CustomRequestHandling& GetCustomRequestHandling() const { return m_customRequestHandling; }
    inline bool CustomRequestHandlingHasBeenSet() const { return m_customRequestHandlingHasBeenSet; }
    template<typename CustomRequestHandlingT = CustomRequestHandling>
    void SetCustomRequestHandling(CustomRequestHandlingT&& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = std::forward<CustomRequestHandlingT>(value); }
    template<typename CustomRequestHandlingT = CustomRequestHandling>
    CountAction& WithCustomRequestHandling(CustomRequestHandlingT&& value) { SetCustomRequestHandling(std::forward<CustomRequestHandlingT>(value)); return *this;}
    ///@}
  private:

    CustomRequestHandling m_customRequestHandling;
    bool m_customRequestHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
