﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/EncryptionAlgorithmSpec.h>
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
namespace KMS
{
namespace Model
{
  class EncryptResult
  {
  public:
    AWS_KMS_API EncryptResult();
    AWS_KMS_API EncryptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API EncryptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The encrypted plaintext. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = std::move(value); }
    inline EncryptResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}
    inline EncryptResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that was used to encrypt the plaintext.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline EncryptResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline EncryptResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline EncryptResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithm that was used to encrypt the plaintext.</p>
     */
    inline const EncryptionAlgorithmSpec& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }
    inline void SetEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { m_encryptionAlgorithm = value; }
    inline void SetEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { m_encryptionAlgorithm = std::move(value); }
    inline EncryptResult& WithEncryptionAlgorithm(const EncryptionAlgorithmSpec& value) { SetEncryptionAlgorithm(value); return *this;}
    inline EncryptResult& WithEncryptionAlgorithm(EncryptionAlgorithmSpec&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline EncryptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EncryptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EncryptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;

    Aws::String m_keyId;

    EncryptionAlgorithmSpec m_encryptionAlgorithm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
