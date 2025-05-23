﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
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
namespace PersonalizeEvents
{
namespace Model
{

  /**
   * <p>Contains information about a metric attribution associated with an event. For
   * more information about metric attributions, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
   * impact of recommendations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/MetricAttribution">AWS
   * API Reference</a></p>
   */
  class MetricAttribution
  {
  public:
    AWS_PERSONALIZEEVENTS_API MetricAttribution() = default;
    AWS_PERSONALIZEEVENTS_API MetricAttribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API MetricAttribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the event, such as a third party.</p>
     */
    inline const Aws::String& GetEventAttributionSource() const { return m_eventAttributionSource; }
    inline bool EventAttributionSourceHasBeenSet() const { return m_eventAttributionSourceHasBeenSet; }
    template<typename EventAttributionSourceT = Aws::String>
    void SetEventAttributionSource(EventAttributionSourceT&& value) { m_eventAttributionSourceHasBeenSet = true; m_eventAttributionSource = std::forward<EventAttributionSourceT>(value); }
    template<typename EventAttributionSourceT = Aws::String>
    MetricAttribution& WithEventAttributionSource(EventAttributionSourceT&& value) { SetEventAttributionSource(std::forward<EventAttributionSourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventAttributionSource;
    bool m_eventAttributionSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
