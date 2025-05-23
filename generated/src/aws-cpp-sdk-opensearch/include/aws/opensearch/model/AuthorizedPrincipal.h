﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/PrincipalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about an Amazon Web Services account or service that has access
   * to an Amazon OpenSearch Service domain through the use of an interface VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AuthorizedPrincipal">AWS
   * API Reference</a></p>
   */
  class AuthorizedPrincipal
  {
  public:
    AWS_OPENSEARCHSERVICE_API AuthorizedPrincipal() = default;
    AWS_OPENSEARCHSERVICE_API AuthorizedPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AuthorizedPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of principal.</p>
     */
    inline PrincipalType GetPrincipalType() const { return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(PrincipalType value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline AuthorizedPrincipal& WithPrincipalType(PrincipalType value) { SetPrincipalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principal</a> that is allowed access to the domain.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    AuthorizedPrincipal& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}
  private:

    PrincipalType m_principalType{PrincipalType::NOT_SET};
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
