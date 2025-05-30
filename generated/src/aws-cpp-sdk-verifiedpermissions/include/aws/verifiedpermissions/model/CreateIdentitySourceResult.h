﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class CreateIdentitySourceResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CreateIdentitySourceResult() = default;
    AWS_VERIFIEDPERMISSIONS_API CreateIdentitySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API CreateIdentitySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time the identity source was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    CreateIdentitySourceResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the new identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const { return m_identitySourceId; }
    template<typename IdentitySourceIdT = Aws::String>
    void SetIdentitySourceId(IdentitySourceIdT&& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = std::forward<IdentitySourceIdT>(value); }
    template<typename IdentitySourceIdT = Aws::String>
    CreateIdentitySourceResult& WithIdentitySourceId(IdentitySourceIdT&& value) { SetIdentitySourceId(std::forward<IdentitySourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the identity source was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    CreateIdentitySourceResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    CreateIdentitySourceResult& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateIdentitySourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_identitySourceId;
    bool m_identitySourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
