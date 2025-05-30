﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   * <p>A request to get an <a>XssMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetXssMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class GetXssMatchSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetXssMatchSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetXssMatchSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>XssMatchSetId</code> of the <a>XssMatchSet</a> that you want to
     * get. <code>XssMatchSetId</code> is returned by <a>CreateXssMatchSet</a> and by
     * <a>ListXssMatchSets</a>.</p>
     */
    inline const Aws::String& GetXssMatchSetId() const { return m_xssMatchSetId; }
    inline bool XssMatchSetIdHasBeenSet() const { return m_xssMatchSetIdHasBeenSet; }
    template<typename XssMatchSetIdT = Aws::String>
    void SetXssMatchSetId(XssMatchSetIdT&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = std::forward<XssMatchSetIdT>(value); }
    template<typename XssMatchSetIdT = Aws::String>
    GetXssMatchSetRequest& WithXssMatchSetId(XssMatchSetIdT&& value) { SetXssMatchSetId(std::forward<XssMatchSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
