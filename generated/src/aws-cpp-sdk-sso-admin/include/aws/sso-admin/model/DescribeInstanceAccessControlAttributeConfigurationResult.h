﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/InstanceAccessControlAttributeConfiguration.h>
#include <aws/sso-admin/model/InstanceAccessControlAttributeConfigurationStatus.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribeInstanceAccessControlAttributeConfigurationResult
  {
  public:
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult();
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Gets the list of IAM Identity Center identity store attributes that have been
     * added to your ABAC configuration.</p>
     */
    inline const InstanceAccessControlAttributeConfiguration& GetInstanceAccessControlAttributeConfiguration() const{ return m_instanceAccessControlAttributeConfiguration; }
    inline void SetInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { m_instanceAccessControlAttributeConfiguration = value; }
    inline void SetInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { m_instanceAccessControlAttributeConfiguration = std::move(value); }
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { SetInstanceAccessControlAttributeConfiguration(value); return *this;}
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { SetInstanceAccessControlAttributeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the attribute configuration process.</p>
     */
    inline const InstanceAccessControlAttributeConfigurationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const InstanceAccessControlAttributeConfigurationStatus& value) { m_status = value; }
    inline void SetStatus(InstanceAccessControlAttributeConfigurationStatus&& value) { m_status = std::move(value); }
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatus(const InstanceAccessControlAttributeConfigurationStatus& value) { SetStatus(value); return *this;}
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatus(InstanceAccessControlAttributeConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    InstanceAccessControlAttributeConfiguration m_instanceAccessControlAttributeConfiguration;

    InstanceAccessControlAttributeConfigurationStatus m_status;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
