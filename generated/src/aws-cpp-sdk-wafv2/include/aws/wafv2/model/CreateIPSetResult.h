﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/IPSetSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class CreateIPSetResult
  {
  public:
    AWS_WAFV2_API CreateIPSetResult();
    AWS_WAFV2_API CreateIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API CreateIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>High-level information about an <a>IPSet</a>, returned by operations like
     * create and list. This provides information like the ID, that you can use to
     * retrieve and manage an <code>IPSet</code>, and the ARN, that you provide to the
     * <a>IPSetReferenceStatement</a> to use the address set in a <a>Rule</a>.</p>
     */
    inline const IPSetSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const IPSetSummary& value) { m_summary = value; }
    inline void SetSummary(IPSetSummary&& value) { m_summary = std::move(value); }
    inline CreateIPSetResult& WithSummary(const IPSetSummary& value) { SetSummary(value); return *this;}
    inline CreateIPSetResult& WithSummary(IPSetSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIPSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIPSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIPSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IPSetSummary m_summary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
