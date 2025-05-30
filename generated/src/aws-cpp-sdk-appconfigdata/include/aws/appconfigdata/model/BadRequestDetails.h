﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfigdata/model/InvalidParameterDetail.h>
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
namespace AppConfigData
{
namespace Model
{

  /**
   * <p>Detailed information about the input that failed to satisfy the constraints
   * specified by a call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/BadRequestDetails">AWS
   * API Reference</a></p>
   */
  class BadRequestDetails
  {
  public:
    AWS_APPCONFIGDATA_API BadRequestDetails() = default;
    AWS_APPCONFIGDATA_API BadRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API BadRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more specified parameters are not valid for the call.</p>
     */
    inline const Aws::Map<Aws::String, InvalidParameterDetail>& GetInvalidParameters() const { return m_invalidParameters; }
    inline bool InvalidParametersHasBeenSet() const { return m_invalidParametersHasBeenSet; }
    template<typename InvalidParametersT = Aws::Map<Aws::String, InvalidParameterDetail>>
    void SetInvalidParameters(InvalidParametersT&& value) { m_invalidParametersHasBeenSet = true; m_invalidParameters = std::forward<InvalidParametersT>(value); }
    template<typename InvalidParametersT = Aws::Map<Aws::String, InvalidParameterDetail>>
    BadRequestDetails& WithInvalidParameters(InvalidParametersT&& value) { SetInvalidParameters(std::forward<InvalidParametersT>(value)); return *this;}
    template<typename InvalidParametersKeyT = Aws::String, typename InvalidParametersValueT = InvalidParameterDetail>
    BadRequestDetails& AddInvalidParameters(InvalidParametersKeyT&& key, InvalidParametersValueT&& value) {
      m_invalidParametersHasBeenSet = true; m_invalidParameters.emplace(std::forward<InvalidParametersKeyT>(key), std::forward<InvalidParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, InvalidParameterDetail> m_invalidParameters;
    bool m_invalidParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
