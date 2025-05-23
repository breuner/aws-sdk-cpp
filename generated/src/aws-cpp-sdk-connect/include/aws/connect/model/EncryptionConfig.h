﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EncryptionType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The encryption configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_CONNECT_API EncryptionConfig() = default;
    AWS_CONNECT_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of encryption.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline EncryptionConfig& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full ARN of the encryption key. </p>  <p>Be sure to provide the
     * full ARN of the encryption key, not just the ID.</p> <p>Amazon Connect supports
     * only KMS keys with the default key spec of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/asymmetric-key-specs.html#key-spec-symmetric-default">
     * <code>SYMMETRIC_DEFAULT</code> </a>. </p> 
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    EncryptionConfig& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
