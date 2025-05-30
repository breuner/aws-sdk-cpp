﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class UpgradePublishedSchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaResult() = default;
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline const Aws::String& GetUpgradedSchemaArn() const { return m_upgradedSchemaArn; }
    template<typename UpgradedSchemaArnT = Aws::String>
    void SetUpgradedSchemaArn(UpgradedSchemaArnT&& value) { m_upgradedSchemaArnHasBeenSet = true; m_upgradedSchemaArn = std::forward<UpgradedSchemaArnT>(value); }
    template<typename UpgradedSchemaArnT = Aws::String>
    UpgradePublishedSchemaResult& WithUpgradedSchemaArn(UpgradedSchemaArnT&& value) { SetUpgradedSchemaArn(std::forward<UpgradedSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpgradePublishedSchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_upgradedSchemaArn;
    bool m_upgradedSchemaArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
