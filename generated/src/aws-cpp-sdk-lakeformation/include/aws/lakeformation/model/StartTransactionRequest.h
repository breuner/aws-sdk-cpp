﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/model/TransactionType.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class StartTransactionRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API StartTransactionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTransaction"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Indicates whether this transaction should be read only or read and write.
     * Writes made using a read-only transaction ID will be rejected. Read-only
     * transactions do not need to be committed. </p>
     */
    inline TransactionType GetTransactionType() const { return m_transactionType; }
    inline bool TransactionTypeHasBeenSet() const { return m_transactionTypeHasBeenSet; }
    inline void SetTransactionType(TransactionType value) { m_transactionTypeHasBeenSet = true; m_transactionType = value; }
    inline StartTransactionRequest& WithTransactionType(TransactionType value) { SetTransactionType(value); return *this;}
    ///@}
  private:

    TransactionType m_transactionType{TransactionType::NOT_SET};
    bool m_transactionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
