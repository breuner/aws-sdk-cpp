﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FollowPoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings to specify if an action follows another.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FollowModeScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class FollowModeScheduleActionStartSettings
  {
  public:
    AWS_MEDIALIVE_API FollowModeScheduleActionStartSettings();
    AWS_MEDIALIVE_API FollowModeScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FollowModeScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline const FollowPoint& GetFollowPoint() const{ return m_followPoint; }
    inline bool FollowPointHasBeenSet() const { return m_followPointHasBeenSet; }
    inline void SetFollowPoint(const FollowPoint& value) { m_followPointHasBeenSet = true; m_followPoint = value; }
    inline void SetFollowPoint(FollowPoint&& value) { m_followPointHasBeenSet = true; m_followPoint = std::move(value); }
    inline FollowModeScheduleActionStartSettings& WithFollowPoint(const FollowPoint& value) { SetFollowPoint(value); return *this;}
    inline FollowModeScheduleActionStartSettings& WithFollowPoint(FollowPoint&& value) { SetFollowPoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The action name of another action that this one refers to.
     */
    inline const Aws::String& GetReferenceActionName() const{ return m_referenceActionName; }
    inline bool ReferenceActionNameHasBeenSet() const { return m_referenceActionNameHasBeenSet; }
    inline void SetReferenceActionName(const Aws::String& value) { m_referenceActionNameHasBeenSet = true; m_referenceActionName = value; }
    inline void SetReferenceActionName(Aws::String&& value) { m_referenceActionNameHasBeenSet = true; m_referenceActionName = std::move(value); }
    inline void SetReferenceActionName(const char* value) { m_referenceActionNameHasBeenSet = true; m_referenceActionName.assign(value); }
    inline FollowModeScheduleActionStartSettings& WithReferenceActionName(const Aws::String& value) { SetReferenceActionName(value); return *this;}
    inline FollowModeScheduleActionStartSettings& WithReferenceActionName(Aws::String&& value) { SetReferenceActionName(std::move(value)); return *this;}
    inline FollowModeScheduleActionStartSettings& WithReferenceActionName(const char* value) { SetReferenceActionName(value); return *this;}
    ///@}
  private:

    FollowPoint m_followPoint;
    bool m_followPointHasBeenSet = false;

    Aws::String m_referenceActionName;
    bool m_referenceActionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
