﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/RouterType.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeRouterConfigurationResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult();
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const{ return m_customerRouterConfig; }
    inline void SetCustomerRouterConfig(const Aws::String& value) { m_customerRouterConfig = value; }
    inline void SetCustomerRouterConfig(Aws::String&& value) { m_customerRouterConfig = std::move(value); }
    inline void SetCustomerRouterConfig(const char* value) { m_customerRouterConfig.assign(value); }
    inline DescribeRouterConfigurationResult& WithCustomerRouterConfig(const Aws::String& value) { SetCustomerRouterConfig(value); return *this;}
    inline DescribeRouterConfigurationResult& WithCustomerRouterConfig(Aws::String&& value) { SetCustomerRouterConfig(std::move(value)); return *this;}
    inline DescribeRouterConfigurationResult& WithCustomerRouterConfig(const char* value) { SetCustomerRouterConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the router.</p>
     */
    inline const RouterType& GetRouter() const{ return m_router; }
    inline void SetRouter(const RouterType& value) { m_router = value; }
    inline void SetRouter(RouterType&& value) { m_router = std::move(value); }
    inline DescribeRouterConfigurationResult& WithRouter(const RouterType& value) { SetRouter(value); return *this;}
    inline DescribeRouterConfigurationResult& WithRouter(RouterType&& value) { SetRouter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceId = value; }
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceId = std::move(value); }
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceId.assign(value); }
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceName = value; }
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceName = std::move(value); }
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceName.assign(value); }
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(std::move(value)); return *this;}
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRouterConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRouterConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRouterConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_customerRouterConfig;

    RouterType m_router;

    Aws::String m_virtualInterfaceId;

    Aws::String m_virtualInterfaceName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
