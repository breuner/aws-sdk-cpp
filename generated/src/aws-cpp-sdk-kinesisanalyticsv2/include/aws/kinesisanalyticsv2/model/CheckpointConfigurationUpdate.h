﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ConfigurationType.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes updates to the checkpointing parameters for a Managed Service for
   * Apache Flink application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CheckpointConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class CheckpointConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to whether the application uses the default checkpointing
     * behavior of Managed Service for Apache Flink. You must set this property to
     * <code>CUSTOM</code> in order to set the <code>CheckpointingEnabled</code>,
     * <code>CheckpointInterval</code>, or <code>MinPauseBetweenCheckpoints</code>
     * parameters. </p>  <p>If this value is set to <code>DEFAULT</code>, the
     * application will use the following values, even if they are set to other values
     * using APIs or application code:</p> <ul> <li> <p> <b>CheckpointingEnabled:</b>
     * true</p> </li> <li> <p> <b>CheckpointInterval:</b> 60000</p> </li> <li> <p>
     * <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul> 
     */
    inline ConfigurationType GetConfigurationTypeUpdate() const { return m_configurationTypeUpdate; }
    inline bool ConfigurationTypeUpdateHasBeenSet() const { return m_configurationTypeUpdateHasBeenSet; }
    inline void SetConfigurationTypeUpdate(ConfigurationType value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = value; }
    inline CheckpointConfigurationUpdate& WithConfigurationTypeUpdate(ConfigurationType value) { SetConfigurationTypeUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to whether checkpointing is enabled for an application.</p>
     *  <p>If <code>CheckpointConfiguration.ConfigurationType</code> is
     * <code>DEFAULT</code>, the application will use a
     * <code>CheckpointingEnabled</code> value of <code>true</code>, even if this value
     * is set to another value using this API or in application code.</p> 
     */
    inline bool GetCheckpointingEnabledUpdate() const { return m_checkpointingEnabledUpdate; }
    inline bool CheckpointingEnabledUpdateHasBeenSet() const { return m_checkpointingEnabledUpdateHasBeenSet; }
    inline void SetCheckpointingEnabledUpdate(bool value) { m_checkpointingEnabledUpdateHasBeenSet = true; m_checkpointingEnabledUpdate = value; }
    inline CheckpointConfigurationUpdate& WithCheckpointingEnabledUpdate(bool value) { SetCheckpointingEnabledUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the interval in milliseconds between checkpoint
     * operations.</p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>CheckpointInterval</code> value of 60000, even
     * if this value is set to another value using this API or in application code.</p>
     * 
     */
    inline long long GetCheckpointIntervalUpdate() const { return m_checkpointIntervalUpdate; }
    inline bool CheckpointIntervalUpdateHasBeenSet() const { return m_checkpointIntervalUpdateHasBeenSet; }
    inline void SetCheckpointIntervalUpdate(long long value) { m_checkpointIntervalUpdateHasBeenSet = true; m_checkpointIntervalUpdate = value; }
    inline CheckpointConfigurationUpdate& WithCheckpointIntervalUpdate(long long value) { SetCheckpointIntervalUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the minimum time in milliseconds after a checkpoint
     * operation completes that a new checkpoint operation can start.</p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>MinPauseBetweenCheckpoints</code> value of
     * 5000, even if this value is set using this API or in application code.</p>
     * 
     */
    inline long long GetMinPauseBetweenCheckpointsUpdate() const { return m_minPauseBetweenCheckpointsUpdate; }
    inline bool MinPauseBetweenCheckpointsUpdateHasBeenSet() const { return m_minPauseBetweenCheckpointsUpdateHasBeenSet; }
    inline void SetMinPauseBetweenCheckpointsUpdate(long long value) { m_minPauseBetweenCheckpointsUpdateHasBeenSet = true; m_minPauseBetweenCheckpointsUpdate = value; }
    inline CheckpointConfigurationUpdate& WithMinPauseBetweenCheckpointsUpdate(long long value) { SetMinPauseBetweenCheckpointsUpdate(value); return *this;}
    ///@}
  private:

    ConfigurationType m_configurationTypeUpdate{ConfigurationType::NOT_SET};
    bool m_configurationTypeUpdateHasBeenSet = false;

    bool m_checkpointingEnabledUpdate{false};
    bool m_checkpointingEnabledUpdateHasBeenSet = false;

    long long m_checkpointIntervalUpdate{0};
    bool m_checkpointIntervalUpdateHasBeenSet = false;

    long long m_minPauseBetweenCheckpointsUpdate{0};
    bool m_minPauseBetweenCheckpointsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
