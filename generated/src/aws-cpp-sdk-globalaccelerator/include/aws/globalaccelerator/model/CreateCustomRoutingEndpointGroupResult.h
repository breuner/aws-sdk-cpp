﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointGroup.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class CreateCustomRoutingEndpointGroupResult
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingEndpointGroupResult();
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information about the endpoint group created for a custom routing
     * accelerator.</p>
     */
    inline const CustomRoutingEndpointGroup& GetEndpointGroup() const{ return m_endpointGroup; }
    inline void SetEndpointGroup(const CustomRoutingEndpointGroup& value) { m_endpointGroup = value; }
    inline void SetEndpointGroup(CustomRoutingEndpointGroup&& value) { m_endpointGroup = std::move(value); }
    inline CreateCustomRoutingEndpointGroupResult& WithEndpointGroup(const CustomRoutingEndpointGroup& value) { SetEndpointGroup(value); return *this;}
    inline CreateCustomRoutingEndpointGroupResult& WithEndpointGroup(CustomRoutingEndpointGroup&& value) { SetEndpointGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCustomRoutingEndpointGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCustomRoutingEndpointGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCustomRoutingEndpointGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CustomRoutingEndpointGroup m_endpointGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
