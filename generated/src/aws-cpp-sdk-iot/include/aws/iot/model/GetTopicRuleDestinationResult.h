﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/TopicRuleDestination.h>
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
namespace IoT
{
namespace Model
{
  class GetTopicRuleDestinationResult
  {
  public:
    AWS_IOT_API GetTopicRuleDestinationResult();
    AWS_IOT_API GetTopicRuleDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetTopicRuleDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The topic rule destination.</p>
     */
    inline const TopicRuleDestination& GetTopicRuleDestination() const{ return m_topicRuleDestination; }
    inline void SetTopicRuleDestination(const TopicRuleDestination& value) { m_topicRuleDestination = value; }
    inline void SetTopicRuleDestination(TopicRuleDestination&& value) { m_topicRuleDestination = std::move(value); }
    inline GetTopicRuleDestinationResult& WithTopicRuleDestination(const TopicRuleDestination& value) { SetTopicRuleDestination(value); return *this;}
    inline GetTopicRuleDestinationResult& WithTopicRuleDestination(TopicRuleDestination&& value) { SetTopicRuleDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTopicRuleDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTopicRuleDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTopicRuleDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TopicRuleDestination m_topicRuleDestination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
