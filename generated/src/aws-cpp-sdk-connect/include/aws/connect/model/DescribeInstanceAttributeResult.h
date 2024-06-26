﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Attribute.h>
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
namespace Connect
{
namespace Model
{
  class DescribeInstanceAttributeResult
  {
  public:
    AWS_CONNECT_API DescribeInstanceAttributeResult();
    AWS_CONNECT_API DescribeInstanceAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeInstanceAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of attribute.</p>
     */
    inline const Attribute& GetAttribute() const{ return m_attribute; }
    inline void SetAttribute(const Attribute& value) { m_attribute = value; }
    inline void SetAttribute(Attribute&& value) { m_attribute = std::move(value); }
    inline DescribeInstanceAttributeResult& WithAttribute(const Attribute& value) { SetAttribute(value); return *this;}
    inline DescribeInstanceAttributeResult& WithAttribute(Attribute&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInstanceAttributeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInstanceAttributeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInstanceAttributeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Attribute m_attribute;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
