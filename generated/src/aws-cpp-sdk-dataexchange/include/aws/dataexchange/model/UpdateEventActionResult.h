﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/Event.h>
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
namespace DataExchange
{
namespace Model
{
  class UpdateEventActionResult
  {
  public:
    AWS_DATAEXCHANGE_API UpdateEventActionResult();
    AWS_DATAEXCHANGE_API UpdateEventActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API UpdateEventActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>What occurs after a certain event.</p>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline void SetAction(const Action& value) { m_action = value; }
    inline void SetAction(Action&& value) { m_action = std::move(value); }
    inline UpdateEventActionResult& WithAction(const Action& value) { SetAction(value); return *this;}
    inline UpdateEventActionResult& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the event action.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateEventActionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateEventActionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateEventActionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event action was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateEventActionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateEventActionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What occurs to start an action.</p>
     */
    inline const Event& GetEvent() const{ return m_event; }
    inline void SetEvent(const Event& value) { m_event = value; }
    inline void SetEvent(Event&& value) { m_event = std::move(value); }
    inline UpdateEventActionResult& WithEvent(const Event& value) { SetEvent(value); return *this;}
    inline UpdateEventActionResult& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateEventActionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateEventActionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateEventActionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event action was last updated, in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateEventActionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateEventActionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateEventActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateEventActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateEventActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Action m_action;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Event m_event;

    Aws::String m_id;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
