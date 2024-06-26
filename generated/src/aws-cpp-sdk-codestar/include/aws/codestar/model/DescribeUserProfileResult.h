﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeStar
{
namespace Model
{
  class DescribeUserProfileResult
  {
  public:
    AWS_CODESTAR_API DescribeUserProfileResult();
    AWS_CODESTAR_API DescribeUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API DescribeUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }
    inline DescribeUserProfileResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline DescribeUserProfileResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name shown for the user in AWS CodeStar projects. For example,
     * this could be set to both first and last name ("Mary Major") or a single name
     * ("Mary"). The display name is also used to generate the initial icon associated
     * with the user in AWS CodeStar projects. If spaces are included in the display
     * name, the first character that appears after the space will be used as the
     * second character in the user initial icon. The initial icon displays a maximum
     * of two characters, so a display name with more than one space (for example "Mary
     * Jane Major") would generate an initial icon using the first character and the
     * first character after the space ("MJ", not "MM").</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeUserProfileResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeUserProfileResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the user. Optional.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }
    inline DescribeUserProfileResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline DescribeUserProfileResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSH public key associated with the user. This SSH public key is
     * associated with the user profile, and can be used in conjunction with the
     * associated private key for access to project resources, such as Amazon EC2
     * instances, if a project owner grants remote access to those resources.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKey = value; }
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKey = std::move(value); }
    inline void SetSshPublicKey(const char* value) { m_sshPublicKey.assign(value); }
    inline DescribeUserProfileResult& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}
    inline DescribeUserProfileResult& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the user profile was created in AWS CodeStar, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline DescribeUserProfileResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline DescribeUserProfileResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the user profile was last modified, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }
    inline DescribeUserProfileResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline DescribeUserProfileResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUserProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUserProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUserProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userArn;

    Aws::String m_displayName;

    Aws::String m_emailAddress;

    Aws::String m_sshPublicKey;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
