﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ActionType.h>
#include <aws/elasticbeanstalk/model/ActionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>The record of an upcoming or in-progress managed action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ManagedAction">AWS
   * API Reference</a></p>
   */
  class ManagedAction
  {
  public:
    AWS_ELASTICBEANSTALK_API ManagedAction();
    AWS_ELASTICBEANSTALK_API ManagedAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ManagedAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }
    inline ManagedAction& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline ManagedAction& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline ManagedAction& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the managed action.</p>
     */
    inline const Aws::String& GetActionDescription() const{ return m_actionDescription; }
    inline bool ActionDescriptionHasBeenSet() const { return m_actionDescriptionHasBeenSet; }
    inline void SetActionDescription(const Aws::String& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = value; }
    inline void SetActionDescription(Aws::String&& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = std::move(value); }
    inline void SetActionDescription(const char* value) { m_actionDescriptionHasBeenSet = true; m_actionDescription.assign(value); }
    inline ManagedAction& WithActionDescription(const Aws::String& value) { SetActionDescription(value); return *this;}
    inline ManagedAction& WithActionDescription(Aws::String&& value) { SetActionDescription(std::move(value)); return *this;}
    inline ManagedAction& WithActionDescription(const char* value) { SetActionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of managed action.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline ManagedAction& WithActionType(const ActionType& value) { SetActionType(value); return *this;}
    inline ManagedAction& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ManagedAction& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}
    inline ManagedAction& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline const Aws::Utils::DateTime& GetWindowStartTime() const{ return m_windowStartTime; }
    inline bool WindowStartTimeHasBeenSet() const { return m_windowStartTimeHasBeenSet; }
    inline void SetWindowStartTime(const Aws::Utils::DateTime& value) { m_windowStartTimeHasBeenSet = true; m_windowStartTime = value; }
    inline void SetWindowStartTime(Aws::Utils::DateTime&& value) { m_windowStartTimeHasBeenSet = true; m_windowStartTime = std::move(value); }
    inline ManagedAction& WithWindowStartTime(const Aws::Utils::DateTime& value) { SetWindowStartTime(value); return *this;}
    inline ManagedAction& WithWindowStartTime(Aws::Utils::DateTime&& value) { SetWindowStartTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionDescription;
    bool m_actionDescriptionHasBeenSet = false;

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    ActionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_windowStartTime;
    bool m_windowStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
