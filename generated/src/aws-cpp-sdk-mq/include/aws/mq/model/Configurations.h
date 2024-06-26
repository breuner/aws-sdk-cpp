﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Broker configuration information</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/Configurations">AWS
   * API Reference</a></p>
   */
  class Configurations
  {
  public:
    AWS_MQ_API Configurations();
    AWS_MQ_API Configurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Configurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The broker's current configuration.</p>
     */
    inline const ConfigurationId& GetCurrent() const{ return m_current; }
    inline bool CurrentHasBeenSet() const { return m_currentHasBeenSet; }
    inline void SetCurrent(const ConfigurationId& value) { m_currentHasBeenSet = true; m_current = value; }
    inline void SetCurrent(ConfigurationId&& value) { m_currentHasBeenSet = true; m_current = std::move(value); }
    inline Configurations& WithCurrent(const ConfigurationId& value) { SetCurrent(value); return *this;}
    inline Configurations& WithCurrent(ConfigurationId&& value) { SetCurrent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The history of configurations applied to the broker.</p>
     */
    inline const Aws::Vector<ConfigurationId>& GetHistory() const{ return m_history; }
    inline bool HistoryHasBeenSet() const { return m_historyHasBeenSet; }
    inline void SetHistory(const Aws::Vector<ConfigurationId>& value) { m_historyHasBeenSet = true; m_history = value; }
    inline void SetHistory(Aws::Vector<ConfigurationId>&& value) { m_historyHasBeenSet = true; m_history = std::move(value); }
    inline Configurations& WithHistory(const Aws::Vector<ConfigurationId>& value) { SetHistory(value); return *this;}
    inline Configurations& WithHistory(Aws::Vector<ConfigurationId>&& value) { SetHistory(std::move(value)); return *this;}
    inline Configurations& AddHistory(const ConfigurationId& value) { m_historyHasBeenSet = true; m_history.push_back(value); return *this; }
    inline Configurations& AddHistory(ConfigurationId&& value) { m_historyHasBeenSet = true; m_history.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's pending configuration.</p>
     */
    inline const ConfigurationId& GetPending() const{ return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    inline void SetPending(const ConfigurationId& value) { m_pendingHasBeenSet = true; m_pending = value; }
    inline void SetPending(ConfigurationId&& value) { m_pendingHasBeenSet = true; m_pending = std::move(value); }
    inline Configurations& WithPending(const ConfigurationId& value) { SetPending(value); return *this;}
    inline Configurations& WithPending(ConfigurationId&& value) { SetPending(std::move(value)); return *this;}
    ///@}
  private:

    ConfigurationId m_current;
    bool m_currentHasBeenSet = false;

    Aws::Vector<ConfigurationId> m_history;
    bool m_historyHasBeenSet = false;

    ConfigurationId m_pending;
    bool m_pendingHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
