﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityType.h>
#include <aws/swf/model/RegistrationStatus.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Detailed information about an activity type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTypeInfo">AWS
   * API Reference</a></p>
   */
  class ActivityTypeInfo
  {
  public:
    AWS_SWF_API ActivityTypeInfo();
    AWS_SWF_API ActivityTypeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a>ActivityType</a> type structure representing the activity type.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }
    inline ActivityTypeInfo& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}
    inline ActivityTypeInfo& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the activity type.</p>
     */
    inline const RegistrationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RegistrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RegistrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ActivityTypeInfo& WithStatus(const RegistrationStatus& value) { SetStatus(value); return *this;}
    inline ActivityTypeInfo& WithStatus(RegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the activity type provided in
     * <a>RegisterActivityType</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ActivityTypeInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ActivityTypeInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ActivityTypeInfo& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this activity type was created through
     * <a>RegisterActivityType</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ActivityTypeInfo& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ActivityTypeInfo& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If DEPRECATED, the date and time <a>DeprecateActivityType</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::move(value); }
    inline ActivityTypeInfo& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}
    inline ActivityTypeInfo& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(std::move(value)); return *this;}
    ///@}
  private:

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet = false;

    RegistrationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
