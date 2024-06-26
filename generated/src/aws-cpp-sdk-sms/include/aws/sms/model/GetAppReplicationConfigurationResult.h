﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
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
namespace SMS
{
namespace Model
{
  class GetAppReplicationConfigurationResult
  {
  public:
    AWS_SMS_API GetAppReplicationConfigurationResult();
    AWS_SMS_API GetAppReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline const Aws::Vector<ServerGroupReplicationConfiguration>& GetServerGroupReplicationConfigurations() const{ return m_serverGroupReplicationConfigurations; }
    inline void SetServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { m_serverGroupReplicationConfigurations = value; }
    inline void SetServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { m_serverGroupReplicationConfigurations = std::move(value); }
    inline GetAppReplicationConfigurationResult& WithServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { SetServerGroupReplicationConfigurations(value); return *this;}
    inline GetAppReplicationConfigurationResult& WithServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { SetServerGroupReplicationConfigurations(std::move(value)); return *this;}
    inline GetAppReplicationConfigurationResult& AddServerGroupReplicationConfigurations(const ServerGroupReplicationConfiguration& value) { m_serverGroupReplicationConfigurations.push_back(value); return *this; }
    inline GetAppReplicationConfigurationResult& AddServerGroupReplicationConfigurations(ServerGroupReplicationConfiguration&& value) { m_serverGroupReplicationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAppReplicationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAppReplicationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAppReplicationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServerGroupReplicationConfiguration> m_serverGroupReplicationConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
