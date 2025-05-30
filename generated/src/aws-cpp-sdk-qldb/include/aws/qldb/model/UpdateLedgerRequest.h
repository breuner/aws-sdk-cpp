﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class UpdateLedgerRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API UpdateLedgerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLedger"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateLedgerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the ledger is protected from being deleted by any user. If
     * not defined during ledger creation, this feature is enabled (<code>true</code>)
     * by default.</p> <p>If deletion protection is enabled, you must first disable it
     * before you can delete the ledger. You can disable it by calling the
     * <code>UpdateLedger</code> operation to set this parameter to
     * <code>false</code>.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline UpdateLedgerRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key in Key Management Service (KMS) to use for encryption of data at rest
     * in the ledger. For more information, see <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/encryption-at-rest.html">Encryption
     * at rest</a> in the <i>Amazon QLDB Developer Guide</i>.</p> <p>Use one of the
     * following options to specify this parameter:</p> <ul> <li> <p>
     * <code>AWS_OWNED_KMS_KEY</code>: Use an KMS key that is owned and managed by
     * Amazon Web Services on your behalf.</p> </li> <li> <p> <b>Undefined</b>: Make no
     * changes to the KMS key of the ledger.</p> </li> <li> <p> <b>A valid symmetric
     * customer managed KMS key</b>: Use the specified symmetric encryption KMS key in
     * your account that you create, own, and manage.</p> <p>Amazon QLDB does not
     * support asymmetric keys. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * symmetric and asymmetric keys</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> </li> </ul> <p>To specify a customer managed KMS key, you can use
     * its key ID, Amazon Resource Name (ARN), alias name, or alias ARN. When using an
     * alias name, prefix it with <code>"alias/"</code>. To specify a key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a> in the <i>Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    UpdateLedgerRequest& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
