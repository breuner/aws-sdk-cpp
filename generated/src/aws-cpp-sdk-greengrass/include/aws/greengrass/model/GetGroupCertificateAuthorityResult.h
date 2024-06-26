﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class GetGroupCertificateAuthorityResult
  {
  public:
    AWS_GREENGRASS_API GetGroupCertificateAuthorityResult();
    AWS_GREENGRASS_API GetGroupCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetGroupCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const{ return m_groupCertificateAuthorityArn; }
    inline void SetGroupCertificateAuthorityArn(const Aws::String& value) { m_groupCertificateAuthorityArn = value; }
    inline void SetGroupCertificateAuthorityArn(Aws::String&& value) { m_groupCertificateAuthorityArn = std::move(value); }
    inline void SetGroupCertificateAuthorityArn(const char* value) { m_groupCertificateAuthorityArn.assign(value); }
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const Aws::String& value) { SetGroupCertificateAuthorityArn(value); return *this;}
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(Aws::String&& value) { SetGroupCertificateAuthorityArn(std::move(value)); return *this;}
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const char* value) { SetGroupCertificateAuthorityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityId() const{ return m_groupCertificateAuthorityId; }
    inline void SetGroupCertificateAuthorityId(const Aws::String& value) { m_groupCertificateAuthorityId = value; }
    inline void SetGroupCertificateAuthorityId(Aws::String&& value) { m_groupCertificateAuthorityId = std::move(value); }
    inline void SetGroupCertificateAuthorityId(const char* value) { m_groupCertificateAuthorityId.assign(value); }
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityId(const Aws::String& value) { SetGroupCertificateAuthorityId(value); return *this;}
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityId(Aws::String&& value) { SetGroupCertificateAuthorityId(std::move(value)); return *this;}
    inline GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityId(const char* value) { SetGroupCertificateAuthorityId(value); return *this;}
    ///@}

    ///@{
    /**
     * The PEM encoded certificate for the group.
     */
    inline const Aws::String& GetPemEncodedCertificate() const{ return m_pemEncodedCertificate; }
    inline void SetPemEncodedCertificate(const Aws::String& value) { m_pemEncodedCertificate = value; }
    inline void SetPemEncodedCertificate(Aws::String&& value) { m_pemEncodedCertificate = std::move(value); }
    inline void SetPemEncodedCertificate(const char* value) { m_pemEncodedCertificate.assign(value); }
    inline GetGroupCertificateAuthorityResult& WithPemEncodedCertificate(const Aws::String& value) { SetPemEncodedCertificate(value); return *this;}
    inline GetGroupCertificateAuthorityResult& WithPemEncodedCertificate(Aws::String&& value) { SetPemEncodedCertificate(std::move(value)); return *this;}
    inline GetGroupCertificateAuthorityResult& WithPemEncodedCertificate(const char* value) { SetPemEncodedCertificate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGroupCertificateAuthorityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGroupCertificateAuthorityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGroupCertificateAuthorityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupCertificateAuthorityArn;

    Aws::String m_groupCertificateAuthorityId;

    Aws::String m_pemEncodedCertificate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
