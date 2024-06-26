﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ClientPropertiesResult.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeClientPropertiesResult
  {
  public:
    AWS_WORKSPACES_API DescribeClientPropertiesResult();
    AWS_WORKSPACES_API DescribeClientPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeClientPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline const Aws::Vector<ClientPropertiesResult>& GetClientPropertiesList() const{ return m_clientPropertiesList; }
    inline void SetClientPropertiesList(const Aws::Vector<ClientPropertiesResult>& value) { m_clientPropertiesList = value; }
    inline void SetClientPropertiesList(Aws::Vector<ClientPropertiesResult>&& value) { m_clientPropertiesList = std::move(value); }
    inline DescribeClientPropertiesResult& WithClientPropertiesList(const Aws::Vector<ClientPropertiesResult>& value) { SetClientPropertiesList(value); return *this;}
    inline DescribeClientPropertiesResult& WithClientPropertiesList(Aws::Vector<ClientPropertiesResult>&& value) { SetClientPropertiesList(std::move(value)); return *this;}
    inline DescribeClientPropertiesResult& AddClientPropertiesList(const ClientPropertiesResult& value) { m_clientPropertiesList.push_back(value); return *this; }
    inline DescribeClientPropertiesResult& AddClientPropertiesList(ClientPropertiesResult&& value) { m_clientPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClientPropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClientPropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClientPropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ClientPropertiesResult> m_clientPropertiesList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
