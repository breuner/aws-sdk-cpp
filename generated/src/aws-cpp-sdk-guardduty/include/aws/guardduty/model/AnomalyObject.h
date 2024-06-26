﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ProfileType.h>
#include <aws/guardduty/model/ProfileSubtype.h>
#include <aws/guardduty/model/Observations.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the unusual anomalies.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AnomalyObject">AWS
   * API Reference</a></p>
   */
  class AnomalyObject
  {
  public:
    AWS_GUARDDUTY_API AnomalyObject();
    AWS_GUARDDUTY_API AnomalyObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AnomalyObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of behavior of the profile.</p>
     */
    inline const ProfileType& GetProfileType() const{ return m_profileType; }
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }
    inline void SetProfileType(const ProfileType& value) { m_profileTypeHasBeenSet = true; m_profileType = value; }
    inline void SetProfileType(ProfileType&& value) { m_profileTypeHasBeenSet = true; m_profileType = std::move(value); }
    inline AnomalyObject& WithProfileType(const ProfileType& value) { SetProfileType(value); return *this;}
    inline AnomalyObject& WithProfileType(ProfileType&& value) { SetProfileType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency of the anomaly.</p>
     */
    inline const ProfileSubtype& GetProfileSubtype() const{ return m_profileSubtype; }
    inline bool ProfileSubtypeHasBeenSet() const { return m_profileSubtypeHasBeenSet; }
    inline void SetProfileSubtype(const ProfileSubtype& value) { m_profileSubtypeHasBeenSet = true; m_profileSubtype = value; }
    inline void SetProfileSubtype(ProfileSubtype&& value) { m_profileSubtypeHasBeenSet = true; m_profileSubtype = std::move(value); }
    inline AnomalyObject& WithProfileSubtype(const ProfileSubtype& value) { SetProfileSubtype(value); return *this;}
    inline AnomalyObject& WithProfileSubtype(ProfileSubtype&& value) { SetProfileSubtype(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recorded value.</p>
     */
    inline const Observations& GetObservations() const{ return m_observations; }
    inline bool ObservationsHasBeenSet() const { return m_observationsHasBeenSet; }
    inline void SetObservations(const Observations& value) { m_observationsHasBeenSet = true; m_observations = value; }
    inline void SetObservations(Observations&& value) { m_observationsHasBeenSet = true; m_observations = std::move(value); }
    inline AnomalyObject& WithObservations(const Observations& value) { SetObservations(value); return *this;}
    inline AnomalyObject& WithObservations(Observations&& value) { SetObservations(std::move(value)); return *this;}
    ///@}
  private:

    ProfileType m_profileType;
    bool m_profileTypeHasBeenSet = false;

    ProfileSubtype m_profileSubtype;
    bool m_profileSubtypeHasBeenSet = false;

    Observations m_observations;
    bool m_observationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
