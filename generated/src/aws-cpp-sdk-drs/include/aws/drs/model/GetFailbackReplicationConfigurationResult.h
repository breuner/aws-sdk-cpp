﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{
  class GetFailbackReplicationConfigurationResult
  {
  public:
    AWS_DRS_API GetFailbackReplicationConfigurationResult();
    AWS_DRS_API GetFailbackReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API GetFailbackReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Recovery Instance in Mbps.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottling = value; }
    inline GetFailbackReplicationConfigurationResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetFailbackReplicationConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetFailbackReplicationConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetFailbackReplicationConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const{ return m_recoveryInstanceID; }
    inline void SetRecoveryInstanceID(const Aws::String& value) { m_recoveryInstanceID = value; }
    inline void SetRecoveryInstanceID(Aws::String&& value) { m_recoveryInstanceID = std::move(value); }
    inline void SetRecoveryInstanceID(const char* value) { m_recoveryInstanceID.assign(value); }
    inline GetFailbackReplicationConfigurationResult& WithRecoveryInstanceID(const Aws::String& value) { SetRecoveryInstanceID(value); return *this;}
    inline GetFailbackReplicationConfigurationResult& WithRecoveryInstanceID(Aws::String&& value) { SetRecoveryInstanceID(std::move(value)); return *this;}
    inline GetFailbackReplicationConfigurationResult& WithRecoveryInstanceID(const char* value) { SetRecoveryInstanceID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use Private IP for the failback replication of the Recovery
     * Instance.</p>
     */
    inline bool GetUsePrivateIP() const{ return m_usePrivateIP; }
    inline void SetUsePrivateIP(bool value) { m_usePrivateIP = value; }
    inline GetFailbackReplicationConfigurationResult& WithUsePrivateIP(bool value) { SetUsePrivateIP(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFailbackReplicationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFailbackReplicationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFailbackReplicationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    long long m_bandwidthThrottling;

    Aws::String m_name;

    Aws::String m_recoveryInstanceID;

    bool m_usePrivateIP;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
