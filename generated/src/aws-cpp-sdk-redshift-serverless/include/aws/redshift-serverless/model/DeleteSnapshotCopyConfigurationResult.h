﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/SnapshotCopyConfiguration.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class DeleteSnapshotCopyConfigurationResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteSnapshotCopyConfigurationResult() = default;
    AWS_REDSHIFTSERVERLESS_API DeleteSnapshotCopyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API DeleteSnapshotCopyConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The deleted snapshot copy configuration object.</p>
     */
    inline const SnapshotCopyConfiguration& GetSnapshotCopyConfiguration() const { return m_snapshotCopyConfiguration; }
    template<typename SnapshotCopyConfigurationT = SnapshotCopyConfiguration>
    void SetSnapshotCopyConfiguration(SnapshotCopyConfigurationT&& value) { m_snapshotCopyConfigurationHasBeenSet = true; m_snapshotCopyConfiguration = std::forward<SnapshotCopyConfigurationT>(value); }
    template<typename SnapshotCopyConfigurationT = SnapshotCopyConfiguration>
    DeleteSnapshotCopyConfigurationResult& WithSnapshotCopyConfiguration(SnapshotCopyConfigurationT&& value) { SetSnapshotCopyConfiguration(std::forward<SnapshotCopyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteSnapshotCopyConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SnapshotCopyConfiguration m_snapshotCopyConfiguration;
    bool m_snapshotCopyConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
