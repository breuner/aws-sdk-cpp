﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/TemplateParameterDataType.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The configuration of a job template parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/TemplateParameterConfiguration">AWS
   * API Reference</a></p>
   */
  class TemplateParameterConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API TemplateParameterConfiguration() = default;
    AWS_EMRCONTAINERS_API TemplateParameterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API TemplateParameterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the job template parameter. Allowed values are: ‘STRING’,
     * ���NUMBER’.</p>
     */
    inline TemplateParameterDataType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TemplateParameterDataType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TemplateParameterConfiguration& WithType(TemplateParameterDataType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for the job template parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    TemplateParameterConfiguration& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    TemplateParameterDataType m_type{TemplateParameterDataType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
