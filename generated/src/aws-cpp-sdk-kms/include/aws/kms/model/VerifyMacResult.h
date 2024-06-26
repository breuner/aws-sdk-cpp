﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/MacAlgorithmSpec.h>
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
  class VerifyMacResult
  {
  public:
    AWS_KMS_API VerifyMacResult();
    AWS_KMS_API VerifyMacResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API VerifyMacResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline VerifyMacResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline VerifyMacResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline VerifyMacResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the HMAC was verified. A value of
     * <code>True</code> indicates that the HMAC (<code>Mac</code>) was generated with
     * the specified <code>Message</code>, HMAC KMS key (<code>KeyID</code>) and
     * <code>MacAlgorithm.</code>.</p> <p>If the HMAC is not verified, the
     * <code>VerifyMac</code> operation fails with a
     * <code>KMSInvalidMacException</code> exception. This exception indicates that one
     * or more of the inputs changed since the HMAC was computed.</p>
     */
    inline bool GetMacValid() const{ return m_macValid; }
    inline void SetMacValid(bool value) { m_macValid = value; }
    inline VerifyMacResult& WithMacValid(bool value) { SetMacValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC algorithm used in the verification.</p>
     */
    inline const MacAlgorithmSpec& GetMacAlgorithm() const{ return m_macAlgorithm; }
    inline void SetMacAlgorithm(const MacAlgorithmSpec& value) { m_macAlgorithm = value; }
    inline void SetMacAlgorithm(MacAlgorithmSpec&& value) { m_macAlgorithm = std::move(value); }
    inline VerifyMacResult& WithMacAlgorithm(const MacAlgorithmSpec& value) { SetMacAlgorithm(value); return *this;}
    inline VerifyMacResult& WithMacAlgorithm(MacAlgorithmSpec&& value) { SetMacAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline VerifyMacResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline VerifyMacResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline VerifyMacResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;

    bool m_macValid;

    MacAlgorithmSpec m_macAlgorithm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
