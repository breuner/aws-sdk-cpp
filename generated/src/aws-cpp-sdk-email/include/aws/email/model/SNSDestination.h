﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Contains the topic ARN associated with an Amazon Simple Notification Service
   * (Amazon SNS) event destination.</p> <p>Event destinations, such as Amazon SNS,
   * are associated with configuration sets, which enable you to publish email
   * sending events. For information about using configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SNSDestination">AWS
   * API Reference</a></p>
   */
  class SNSDestination
  {
  public:
    AWS_SES_API SNSDestination() = default;
    AWS_SES_API SNSDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API SNSDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the Amazon SNS topic for email sending events. You can find the
     * ARN of a topic by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_ListTopics.html">ListTopics</a>
     * Amazon SNS operation.</p> <p>For more information about Amazon SNS topics, see
     * the <a href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon
     * SNS Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicARN() const { return m_topicARN; }
    inline bool TopicARNHasBeenSet() const { return m_topicARNHasBeenSet; }
    template<typename TopicARNT = Aws::String>
    void SetTopicARN(TopicARNT&& value) { m_topicARNHasBeenSet = true; m_topicARN = std::forward<TopicARNT>(value); }
    template<typename TopicARNT = Aws::String>
    SNSDestination& WithTopicARN(TopicARNT&& value) { SetTopicARN(std::forward<TopicARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicARN;
    bool m_topicARNHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
