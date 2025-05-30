﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The HTTP configuration for the source location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HttpConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpConfiguration
  {
  public:
    AWS_MEDIATAILOR_API HttpConfiguration() = default;
    AWS_MEDIATAILOR_API HttpConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API HttpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base URL for the source location host server. This string must include
     * the protocol, such as <b>https://</b>.</p>
     */
    inline const Aws::String& GetBaseUrl() const { return m_baseUrl; }
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }
    template<typename BaseUrlT = Aws::String>
    void SetBaseUrl(BaseUrlT&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::forward<BaseUrlT>(value); }
    template<typename BaseUrlT = Aws::String>
    HttpConfiguration& WithBaseUrl(BaseUrlT&& value) { SetBaseUrl(std::forward<BaseUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
