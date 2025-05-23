﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The streaming configuration, such as the Amazon SNS streaming
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ChatStreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class ChatStreamingConfiguration
  {
  public:
    AWS_CONNECT_API ChatStreamingConfiguration() = default;
    AWS_CONNECT_API ChatStreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ChatStreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the standard Amazon SNS topic. The Amazon
     * Resource Name (ARN) of the streaming endpoint that is used to publish real-time
     * message streaming for chat conversations.</p>
     */
    inline const Aws::String& GetStreamingEndpointArn() const { return m_streamingEndpointArn; }
    inline bool StreamingEndpointArnHasBeenSet() const { return m_streamingEndpointArnHasBeenSet; }
    template<typename StreamingEndpointArnT = Aws::String>
    void SetStreamingEndpointArn(StreamingEndpointArnT&& value) { m_streamingEndpointArnHasBeenSet = true; m_streamingEndpointArn = std::forward<StreamingEndpointArnT>(value); }
    template<typename StreamingEndpointArnT = Aws::String>
    ChatStreamingConfiguration& WithStreamingEndpointArn(StreamingEndpointArnT&& value) { SetStreamingEndpointArn(std::forward<StreamingEndpointArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamingEndpointArn;
    bool m_streamingEndpointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
