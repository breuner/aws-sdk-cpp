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
   * <p>When included in a receipt rule, this action calls Amazon WorkMail and,
   * optionally, publishes a notification to Amazon Simple Notification Service
   * (Amazon SNS). It usually isn't necessary to set this up manually, because Amazon
   * WorkMail adds the rule automatically during its setup procedure.</p> <p>For
   * information using a receipt rule to call Amazon WorkMail, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-action-workmail.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/WorkmailAction">AWS
   * API Reference</a></p>
   */
  class WorkmailAction
  {
  public:
    AWS_SES_API WorkmailAction() = default;
    AWS_SES_API WorkmailAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API WorkmailAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the
     * WorkMail action is called. You can find the ARN of a topic by using the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_ListTopics.html">ListTopics</a>
     * operation in Amazon SNS.</p> <p>For more information about Amazon SNS topics,
     * see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    WorkmailAction& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon WorkMail organization. Amazon
     * WorkMail ARNs use the following format:</p> <p>
     * <code>arn:aws:workmail:&lt;region&gt;:&lt;awsAccountId&gt;:organization/&lt;workmailOrganizationId&gt;</code>
     * </p> <p>You can find the ID of your organization by using the <a
     * href="https://docs.aws.amazon.com/workmail/latest/APIReference/API_ListOrganizations.html">ListOrganizations</a>
     * operation in Amazon WorkMail. Amazon WorkMail organization IDs begin with
     * "<code>m-</code>", followed by a string of alphanumeric characters.</p> <p>For
     * information about Amazon WorkMail organizations, see the <a
     * href="https://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon
     * WorkMail Administrator Guide</a>.</p>
     */
    inline const Aws::String& GetOrganizationArn() const { return m_organizationArn; }
    inline bool OrganizationArnHasBeenSet() const { return m_organizationArnHasBeenSet; }
    template<typename OrganizationArnT = Aws::String>
    void SetOrganizationArn(OrganizationArnT&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = std::forward<OrganizationArnT>(value); }
    template<typename OrganizationArnT = Aws::String>
    WorkmailAction& WithOrganizationArn(OrganizationArnT&& value) { SetOrganizationArn(std::forward<OrganizationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_organizationArn;
    bool m_organizationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
