﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
  class CreateGrantResult
  {
  public:
    AWS_KMS_API CreateGrantResult();
    AWS_KMS_API CreateGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API CreateGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The grant token.</p> <p>Use a grant token when your permission to call this
     * operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetGrantToken() const{ return m_grantToken; }
    inline void SetGrantToken(const Aws::String& value) { m_grantToken = value; }
    inline void SetGrantToken(Aws::String&& value) { m_grantToken = std::move(value); }
    inline void SetGrantToken(const char* value) { m_grantToken.assign(value); }
    inline CreateGrantResult& WithGrantToken(const Aws::String& value) { SetGrantToken(value); return *this;}
    inline CreateGrantResult& WithGrantToken(Aws::String&& value) { SetGrantToken(std::move(value)); return *this;}
    inline CreateGrantResult& WithGrantToken(const char* value) { SetGrantToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the grant.</p> <p>You can use the
     * <code>GrantId</code> in a <a>ListGrants</a>, <a>RetireGrant</a>, or
     * <a>RevokeGrant</a> operation.</p>
     */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }
    inline void SetGrantId(const Aws::String& value) { m_grantId = value; }
    inline void SetGrantId(Aws::String&& value) { m_grantId = std::move(value); }
    inline void SetGrantId(const char* value) { m_grantId.assign(value); }
    inline CreateGrantResult& WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}
    inline CreateGrantResult& WithGrantId(Aws::String&& value) { SetGrantId(std::move(value)); return *this;}
    inline CreateGrantResult& WithGrantId(const char* value) { SetGrantId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_grantToken;

    Aws::String m_grantId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
