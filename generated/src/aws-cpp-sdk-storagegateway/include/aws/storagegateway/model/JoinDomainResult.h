﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ActiveDirectoryStatus.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>JoinDomainOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/JoinDomainOutput">AWS
   * API Reference</a></p>
   */
  class JoinDomainResult
  {
  public:
    AWS_STORAGEGATEWAY_API JoinDomainResult();
    AWS_STORAGEGATEWAY_API JoinDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API JoinDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }
    inline JoinDomainResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline JoinDomainResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline JoinDomainResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the gateway as a member of the Active Directory
     * domain.</p>  <p>This field is only used as part of a
     * <code>JoinDomain</code> request. It is not affected by Active Directory
     * connectivity changes that occur after the <code>JoinDomain</code> request
     * succeeds.</p>  <ul> <li> <p> <code>ACCESS_DENIED</code>: Indicates that
     * the <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p> <code>DETACHED</code>: Indicates that gateway is not joined to a
     * domain.</p> </li> <li> <p> <code>JOINED</code>: Indicates that the gateway has
     * successfully joined a domain.</p> </li> <li> <p> <code>JOINING</code>: Indicates
     * that a <code>JoinDomain</code> operation is in progress.</p> </li> <li> <p>
     * <code>NETWORK_ERROR</code>: Indicates that <code>JoinDomain</code> operation
     * failed due to a network or connectivity error.</p> </li> <li> <p>
     * <code>TIMEOUT</code>: Indicates that the <code>JoinDomain</code> operation
     * failed because the operation didn't complete within the allotted time.</p> </li>
     * <li> <p> <code>UNKNOWN_ERROR</code>: Indicates that the <code>JoinDomain</code>
     * operation failed due to another type of error.</p> </li> </ul>
     */
    inline const ActiveDirectoryStatus& GetActiveDirectoryStatus() const{ return m_activeDirectoryStatus; }
    inline void SetActiveDirectoryStatus(const ActiveDirectoryStatus& value) { m_activeDirectoryStatus = value; }
    inline void SetActiveDirectoryStatus(ActiveDirectoryStatus&& value) { m_activeDirectoryStatus = std::move(value); }
    inline JoinDomainResult& WithActiveDirectoryStatus(const ActiveDirectoryStatus& value) { SetActiveDirectoryStatus(value); return *this;}
    inline JoinDomainResult& WithActiveDirectoryStatus(ActiveDirectoryStatus&& value) { SetActiveDirectoryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline JoinDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JoinDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JoinDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;

    ActiveDirectoryStatus m_activeDirectoryStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
