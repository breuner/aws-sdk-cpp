﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ControlTower
{
namespace Model
{
  class ResetEnabledControlResult
  {
  public:
    AWS_CONTROLTOWER_API ResetEnabledControlResult() = default;
    AWS_CONTROLTOWER_API ResetEnabledControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ResetEnabledControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The operation identifier for this <code>ResetEnabledControl</code>
     * operation. </p>
     */
    inline const Aws::String& GetOperationIdentifier() const { return m_operationIdentifier; }
    template<typename OperationIdentifierT = Aws::String>
    void SetOperationIdentifier(OperationIdentifierT&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::forward<OperationIdentifierT>(value); }
    template<typename OperationIdentifierT = Aws::String>
    ResetEnabledControlResult& WithOperationIdentifier(OperationIdentifierT&& value) { SetOperationIdentifier(std::forward<OperationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResetEnabledControlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
