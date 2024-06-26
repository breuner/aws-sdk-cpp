﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class DeleteMemberRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API DeleteMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMember"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the network from which the member is removed.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }
    inline DeleteMemberRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}
    inline DeleteMemberRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}
    inline DeleteMemberRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the member to remove.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }
    inline DeleteMemberRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}
    inline DeleteMemberRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}
    inline DeleteMemberRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
