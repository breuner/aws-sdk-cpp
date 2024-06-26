﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyMetadata.h>
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
  class CreateKeyResult
  {
  public:
    AWS_KMS_API CreateKeyResult();
    AWS_KMS_API CreateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API CreateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata associated with the KMS key.</p>
     */
    inline const KeyMetadata& GetKeyMetadata() const{ return m_keyMetadata; }
    inline void SetKeyMetadata(const KeyMetadata& value) { m_keyMetadata = value; }
    inline void SetKeyMetadata(KeyMetadata&& value) { m_keyMetadata = std::move(value); }
    inline CreateKeyResult& WithKeyMetadata(const KeyMetadata& value) { SetKeyMetadata(value); return *this;}
    inline CreateKeyResult& WithKeyMetadata(KeyMetadata&& value) { SetKeyMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    KeyMetadata m_keyMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
