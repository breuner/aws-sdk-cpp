﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/IdentityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return a list of all identities (email addresses and
   * domains) that you have attempted to verify under your Amazon Web Services
   * account, regardless of verification status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentitiesRequest">AWS
   * API Reference</a></p>
   */
  class ListIdentitiesRequest : public SESRequest
  {
  public:
    AWS_SES_API ListIdentitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIdentities"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The type of the identities to list. Possible values are "EmailAddress" and
     * "Domain". If this parameter is omitted, then all identities are listed.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline ListIdentitiesRequest& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentitiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of identities per page. Possible values are 1-1000
     * inclusive.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListIdentitiesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
