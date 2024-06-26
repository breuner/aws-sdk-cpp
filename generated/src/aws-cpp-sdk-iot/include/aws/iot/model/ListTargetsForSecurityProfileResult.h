﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SecurityProfileTarget.h>
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
namespace IoT
{
namespace Model
{
  class ListTargetsForSecurityProfileResult
  {
  public:
    AWS_IOT_API ListTargetsForSecurityProfileResult();
    AWS_IOT_API ListTargetsForSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListTargetsForSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The thing groups to which the security profile is attached.</p>
     */
    inline const Aws::Vector<SecurityProfileTarget>& GetSecurityProfileTargets() const{ return m_securityProfileTargets; }
    inline void SetSecurityProfileTargets(const Aws::Vector<SecurityProfileTarget>& value) { m_securityProfileTargets = value; }
    inline void SetSecurityProfileTargets(Aws::Vector<SecurityProfileTarget>&& value) { m_securityProfileTargets = std::move(value); }
    inline ListTargetsForSecurityProfileResult& WithSecurityProfileTargets(const Aws::Vector<SecurityProfileTarget>& value) { SetSecurityProfileTargets(value); return *this;}
    inline ListTargetsForSecurityProfileResult& WithSecurityProfileTargets(Aws::Vector<SecurityProfileTarget>&& value) { SetSecurityProfileTargets(std::move(value)); return *this;}
    inline ListTargetsForSecurityProfileResult& AddSecurityProfileTargets(const SecurityProfileTarget& value) { m_securityProfileTargets.push_back(value); return *this; }
    inline ListTargetsForSecurityProfileResult& AddSecurityProfileTargets(SecurityProfileTarget&& value) { m_securityProfileTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTargetsForSecurityProfileResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTargetsForSecurityProfileResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTargetsForSecurityProfileResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTargetsForSecurityProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTargetsForSecurityProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTargetsForSecurityProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityProfileTarget> m_securityProfileTargets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
