﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Incident Manager reaching out to a contact or escalation plan to engage
   * contact during an incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Engagement">AWS
   * API Reference</a></p>
   */
  class Engagement
  {
  public:
    AWS_SSMCONTACTS_API Engagement();
    AWS_SSMCONTACTS_API Engagement(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Engagement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }
    inline bool EngagementArnHasBeenSet() const { return m_engagementArnHasBeenSet; }
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArnHasBeenSet = true; m_engagementArn = value; }
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArnHasBeenSet = true; m_engagementArn = std::move(value); }
    inline void SetEngagementArn(const char* value) { m_engagementArnHasBeenSet = true; m_engagementArn.assign(value); }
    inline Engagement& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}
    inline Engagement& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}
    inline Engagement& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }
    inline Engagement& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}
    inline Engagement& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}
    inline Engagement& WithContactArn(const char* value) { SetContactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    inline void SetSender(const Aws::String& value) { m_senderHasBeenSet = true; m_sender = value; }
    inline void SetSender(Aws::String&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }
    inline void SetSender(const char* value) { m_senderHasBeenSet = true; m_sender.assign(value); }
    inline Engagement& WithSender(const Aws::String& value) { SetSender(value); return *this;}
    inline Engagement& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}
    inline Engagement& WithSender(const char* value) { SetSender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }
    inline void SetIncidentId(const Aws::String& value) { m_incidentIdHasBeenSet = true; m_incidentId = value; }
    inline void SetIncidentId(Aws::String&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::move(value); }
    inline void SetIncidentId(const char* value) { m_incidentIdHasBeenSet = true; m_incidentId.assign(value); }
    inline Engagement& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}
    inline Engagement& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}
    inline Engagement& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the engagement began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Engagement& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Engagement& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the engagement ended.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTimeHasBeenSet = true; m_stopTime = value; }
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::move(value); }
    inline Engagement& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}
    inline Engagement& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_engagementArn;
    bool m_engagementArnHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_sender;
    bool m_senderHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime;
    bool m_stopTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
