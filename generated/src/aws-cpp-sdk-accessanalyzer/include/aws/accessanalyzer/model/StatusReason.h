﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ReasonCode.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Provides more details about the current status of the analyzer. For example,
   * if the creation for the analyzer fails, a <code>Failed</code> status is
   * returned. For an analyzer with organization as the type, this failure can be due
   * to an issue with creating the service-linked roles required in the member
   * accounts of the Amazon Web Services organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StatusReason">AWS
   * API Reference</a></p>
   */
  class StatusReason
  {
  public:
    AWS_ACCESSANALYZER_API StatusReason() = default;
    AWS_ACCESSANALYZER_API StatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API StatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason code for the current status of the analyzer.</p>
     */
    inline ReasonCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ReasonCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline StatusReason& WithCode(ReasonCode value) { SetCode(value); return *this;}
    ///@}
  private:

    ReasonCode m_code{ReasonCode::NOT_SET};
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
