﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/HumanLoopDataAttributes.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Sets up the human review workflow the document will be sent to if one of the
   * conditions is met. You can also set certain attributes of the image before
   * review. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/HumanLoopConfig">AWS
   * API Reference</a></p>
   */
  class HumanLoopConfig
  {
  public:
    AWS_TEXTRACT_API HumanLoopConfig() = default;
    AWS_TEXTRACT_API HumanLoopConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API HumanLoopConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline const Aws::String& GetHumanLoopName() const { return m_humanLoopName; }
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }
    template<typename HumanLoopNameT = Aws::String>
    void SetHumanLoopName(HumanLoopNameT&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::forward<HumanLoopNameT>(value); }
    template<typename HumanLoopNameT = Aws::String>
    HumanLoopConfig& WithHumanLoopName(HumanLoopNameT&& value) { SetHumanLoopName(std::forward<HumanLoopNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    HumanLoopConfig& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline const HumanLoopDataAttributes& GetDataAttributes() const { return m_dataAttributes; }
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }
    template<typename DataAttributesT = HumanLoopDataAttributes>
    void SetDataAttributes(DataAttributesT&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::forward<DataAttributesT>(value); }
    template<typename DataAttributesT = HumanLoopDataAttributes>
    HumanLoopConfig& WithDataAttributes(DataAttributesT&& value) { SetDataAttributes(std::forward<DataAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    HumanLoopDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
