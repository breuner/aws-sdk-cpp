﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace KMS
{
namespace Model
{
  class GenerateDataKeyWithoutPlaintextResult
  {
  public:
    AWS_KMS_API GenerateDataKeyWithoutPlaintextResult();
    AWS_KMS_API GenerateDataKeyWithoutPlaintextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateDataKeyWithoutPlaintextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The encrypted data key. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCiphertextBlob() const{ return m_ciphertextBlob; }
    inline void SetCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_ciphertextBlob = value; }
    inline void SetCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_ciphertextBlob = std::move(value); }
    inline GenerateDataKeyWithoutPlaintextResult& WithCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetCiphertextBlob(value); return *this;}
    inline GenerateDataKeyWithoutPlaintextResult& WithCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetCiphertextBlob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key that encrypted the data key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GenerateDataKeyWithoutPlaintextResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateDataKeyWithoutPlaintextResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateDataKeyWithoutPlaintextResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateDataKeyWithoutPlaintextResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_ciphertextBlob;

    Aws::String m_keyId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
