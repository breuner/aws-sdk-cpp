﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
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
  class GetParametersForImportResult
  {
  public:
    AWS_KMS_API GetParametersForImportResult();
    AWS_KMS_API GetParametersForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetParametersForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same KMS key specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline GetParametersForImportResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GetParametersForImportResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GetParametersForImportResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token to send in a subsequent <a>ImportKeyMaterial</a>
     * request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImportToken() const{ return m_importToken; }
    inline void SetImportToken(const Aws::Utils::ByteBuffer& value) { m_importToken = value; }
    inline void SetImportToken(Aws::Utils::ByteBuffer&& value) { m_importToken = std::move(value); }
    inline GetParametersForImportResult& WithImportToken(const Aws::Utils::ByteBuffer& value) { SetImportToken(value); return *this;}
    inline GetParametersForImportResult& WithImportToken(Aws::Utils::ByteBuffer&& value) { SetImportToken(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key to use to encrypt the key material before importing it with
     * <a>ImportKeyMaterial</a>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPublicKey() const{ return m_publicKey; }
    inline void SetPublicKey(const Aws::Utils::CryptoBuffer& value) { m_publicKey = value; }
    inline void SetPublicKey(Aws::Utils::CryptoBuffer&& value) { m_publicKey = std::move(value); }
    inline GetParametersForImportResult& WithPublicKey(const Aws::Utils::CryptoBuffer& value) { SetPublicKey(value); return *this;}
    inline GetParametersForImportResult& WithPublicKey(Aws::Utils::CryptoBuffer&& value) { SetPublicKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the import token and public key are no longer valid. After
     * this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and
     * you must send another <code>GetParametersForImport</code> request to get new
     * ones.</p>
     */
    inline const Aws::Utils::DateTime& GetParametersValidTo() const{ return m_parametersValidTo; }
    inline void SetParametersValidTo(const Aws::Utils::DateTime& value) { m_parametersValidTo = value; }
    inline void SetParametersValidTo(Aws::Utils::DateTime&& value) { m_parametersValidTo = std::move(value); }
    inline GetParametersForImportResult& WithParametersValidTo(const Aws::Utils::DateTime& value) { SetParametersValidTo(value); return *this;}
    inline GetParametersForImportResult& WithParametersValidTo(Aws::Utils::DateTime&& value) { SetParametersValidTo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetParametersForImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetParametersForImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetParametersForImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;

    Aws::Utils::ByteBuffer m_importToken;

    Aws::Utils::CryptoBuffer m_publicKey;

    Aws::Utils::DateTime m_parametersValidTo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
