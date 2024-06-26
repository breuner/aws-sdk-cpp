﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/Campaign.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Request object with information to create a contact.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactDataRequest">AWS
   * API Reference</a></p>
   */
  class ContactDataRequest
  {
  public:
    AWS_CONNECT_API ContactDataRequest();
    AWS_CONNECT_API ContactDataRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactDataRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Endpoint associated with the Amazon Connect instance from which outbound
     * contact will be initiated for the campaign.</p>
     */
    inline const Endpoint& GetSystemEndpoint() const{ return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    inline void SetSystemEndpoint(const Endpoint& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = value; }
    inline void SetSystemEndpoint(Endpoint&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::move(value); }
    inline ContactDataRequest& WithSystemEndpoint(const Endpoint& value) { SetSystemEndpoint(value); return *this;}
    inline ContactDataRequest& WithSystemEndpoint(Endpoint&& value) { SetSystemEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint of the customer for which contact will be initiated.</p>
     */
    inline const Endpoint& GetCustomerEndpoint() const{ return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    inline void SetCustomerEndpoint(const Endpoint& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = value; }
    inline void SetCustomerEndpoint(Endpoint&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::move(value); }
    inline ContactDataRequest& WithCustomerEndpoint(const Endpoint& value) { SetCustomerEndpoint(value); return *this;}
    inline ContactDataRequest& WithCustomerEndpoint(Endpoint&& value) { SetCustomerEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier to uniquely identify individual requests in the batch.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const{ return m_requestIdentifier; }
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
    inline void SetRequestIdentifier(const Aws::String& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = value; }
    inline void SetRequestIdentifier(Aws::String&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::move(value); }
    inline void SetRequestIdentifier(const char* value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier.assign(value); }
    inline ContactDataRequest& WithRequestIdentifier(const Aws::String& value) { SetRequestIdentifier(value); return *this;}
    inline ContactDataRequest& WithRequestIdentifier(Aws::String&& value) { SetRequestIdentifier(std::move(value)); return *this;}
    inline ContactDataRequest& WithRequestIdentifier(const char* value) { SetRequestIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the queue associated with the Amazon Connect instance in
     * which contacts that are created will be queued.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline ContactDataRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline ContactDataRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline ContactDataRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of attributes to be stored in a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline ContactDataRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline ContactDataRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline ContactDataRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline ContactDataRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ContactDataRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ContactDataRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ContactDataRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ContactDataRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ContactDataRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Structure to store information associated with a campaign.</p>
     */
    inline const Campaign& GetCampaign() const{ return m_campaign; }
    inline bool CampaignHasBeenSet() const { return m_campaignHasBeenSet; }
    inline void SetCampaign(const Campaign& value) { m_campaignHasBeenSet = true; m_campaign = value; }
    inline void SetCampaign(Campaign&& value) { m_campaignHasBeenSet = true; m_campaign = std::move(value); }
    inline ContactDataRequest& WithCampaign(const Campaign& value) { SetCampaign(value); return *this;}
    inline ContactDataRequest& WithCampaign(Campaign&& value) { SetCampaign(std::move(value)); return *this;}
    ///@}
  private:

    Endpoint m_systemEndpoint;
    bool m_systemEndpointHasBeenSet = false;

    Endpoint m_customerEndpoint;
    bool m_customerEndpointHasBeenSet = false;

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Campaign m_campaign;
    bool m_campaignHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
