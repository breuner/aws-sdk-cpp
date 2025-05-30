﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies configuration properties for a labeling set generation task
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LabelingSetGenerationTaskRunProperties">AWS
   * API Reference</a></p>
   */
  class LabelingSetGenerationTaskRunProperties
  {
  public:
    AWS_GLUE_API LabelingSetGenerationTaskRunProperties() = default;
    AWS_GLUE_API LabelingSetGenerationTaskRunProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LabelingSetGenerationTaskRunProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will generate
     * the labeling set.</p>
     */
    inline const Aws::String& GetOutputS3Path() const { return m_outputS3Path; }
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }
    template<typename OutputS3PathT = Aws::String>
    void SetOutputS3Path(OutputS3PathT&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::forward<OutputS3PathT>(value); }
    template<typename OutputS3PathT = Aws::String>
    LabelingSetGenerationTaskRunProperties& WithOutputS3Path(OutputS3PathT&& value) { SetOutputS3Path(std::forward<OutputS3PathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
