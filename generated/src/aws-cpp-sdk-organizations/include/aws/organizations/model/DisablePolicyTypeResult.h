﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Root.h>
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
namespace Organizations
{
namespace Model
{
  class DisablePolicyTypeResult
  {
  public:
    AWS_ORGANIZATIONS_API DisablePolicyTypeResult();
    AWS_ORGANIZATIONS_API DisablePolicyTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DisablePolicyTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that shows the root with the updated list of enabled policy
     * types.</p>
     */
    inline const Root& GetRoot() const{ return m_root; }
    inline void SetRoot(const Root& value) { m_root = value; }
    inline void SetRoot(Root&& value) { m_root = std::move(value); }
    inline DisablePolicyTypeResult& WithRoot(const Root& value) { SetRoot(value); return *this;}
    inline DisablePolicyTypeResult& WithRoot(Root&& value) { SetRoot(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisablePolicyTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisablePolicyTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisablePolicyTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Root m_root;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
