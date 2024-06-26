﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RegexPatternSetSummary.h>
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
  class CreateRegexPatternSetResult
  {
  public:
    AWS_WAFV2_API CreateRegexPatternSetResult();
    AWS_WAFV2_API CreateRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API CreateRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>High-level information about a <a>RegexPatternSet</a>, returned by operations
     * like create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>RegexPatternSet</code>, and the ARN, that you
     * provide to the <a>RegexPatternSetReferenceStatement</a> to use the pattern set
     * in a <a>Rule</a>.</p>
     */
    inline const RegexPatternSetSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const RegexPatternSetSummary& value) { m_summary = value; }
    inline void SetSummary(RegexPatternSetSummary&& value) { m_summary = std::move(value); }
    inline CreateRegexPatternSetResult& WithSummary(const RegexPatternSetSummary& value) { SetSummary(value); return *this;}
    inline CreateRegexPatternSetResult& WithSummary(RegexPatternSetSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRegexPatternSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRegexPatternSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRegexPatternSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RegexPatternSetSummary m_summary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
