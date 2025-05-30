﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties required when using Veeva.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/VeevaConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class VeevaConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API VeevaConnectorProfileProperties() = default;
    AWS_APPFLOW_API VeevaConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API VeevaConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The location of the Veeva resource. </p>
     */
    inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
    inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
    template<typename InstanceUrlT = Aws::String>
    void SetInstanceUrl(InstanceUrlT&& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = std::forward<InstanceUrlT>(value); }
    template<typename InstanceUrlT = Aws::String>
    VeevaConnectorProfileProperties& WithInstanceUrl(InstanceUrlT&& value) { SetInstanceUrl(std::forward<InstanceUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceUrl;
    bool m_instanceUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
