﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstancePortState.h>
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
namespace Lightsail
{
namespace Model
{
  class GetInstancePortStatesResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstancePortStatesResult();
    AWS_LIGHTSAIL_API GetInstancePortStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstancePortStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline const Aws::Vector<InstancePortState>& GetPortStates() const{ return m_portStates; }
    inline void SetPortStates(const Aws::Vector<InstancePortState>& value) { m_portStates = value; }
    inline void SetPortStates(Aws::Vector<InstancePortState>&& value) { m_portStates = std::move(value); }
    inline GetInstancePortStatesResult& WithPortStates(const Aws::Vector<InstancePortState>& value) { SetPortStates(value); return *this;}
    inline GetInstancePortStatesResult& WithPortStates(Aws::Vector<InstancePortState>&& value) { SetPortStates(std::move(value)); return *this;}
    inline GetInstancePortStatesResult& AddPortStates(const InstancePortState& value) { m_portStates.push_back(value); return *this; }
    inline GetInstancePortStatesResult& AddPortStates(InstancePortState&& value) { m_portStates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInstancePortStatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInstancePortStatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInstancePortStatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstancePortState> m_portStates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
