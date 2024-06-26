﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityState.h>
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
namespace WorkMail
{
namespace Model
{
  class DescribeGroupResult
  {
  public:
    AWS_WORKMAIL_API DescribeGroupResult();
    AWS_WORKMAIL_API DescribeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the described group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }
    inline DescribeGroupResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline DescribeGroupResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline DescribeGroupResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the described group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeGroupResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the described group.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline void SetEmail(const Aws::String& value) { m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_email.assign(value); }
    inline DescribeGroupResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline DescribeGroupResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline DescribeGroupResult& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the user: enabled (registered to WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline const EntityState& GetState() const{ return m_state; }
    inline void SetState(const EntityState& value) { m_state = value; }
    inline void SetState(EntityState&& value) { m_state = std::move(value); }
    inline DescribeGroupResult& WithState(const EntityState& value) { SetState(value); return *this;}
    inline DescribeGroupResult& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a user was registered to WorkMail, in UNIX epoch time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDate = value; }
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDate = std::move(value); }
    inline DescribeGroupResult& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}
    inline DescribeGroupResult& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a user was deregistered from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDate = value; }
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDate = std::move(value); }
    inline DescribeGroupResult& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}
    inline DescribeGroupResult& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value is set to <i>true</i>, the group is hidden from the address
     * book.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressList = value; }
    inline DescribeGroupResult& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupId;

    Aws::String m_name;

    Aws::String m_email;

    EntityState m_state;

    Aws::Utils::DateTime m_enabledDate;

    Aws::Utils::DateTime m_disabledDate;

    bool m_hiddenFromGlobalAddressList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
