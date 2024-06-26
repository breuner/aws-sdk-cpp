﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/StorageOptimizer.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListTableStorageOptimizersResult
  {
  public:
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult();
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListTableStorageOptimizersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the storage optimizers associated with a table.</p>
     */
    inline const Aws::Vector<StorageOptimizer>& GetStorageOptimizerList() const{ return m_storageOptimizerList; }
    inline void SetStorageOptimizerList(const Aws::Vector<StorageOptimizer>& value) { m_storageOptimizerList = value; }
    inline void SetStorageOptimizerList(Aws::Vector<StorageOptimizer>&& value) { m_storageOptimizerList = std::move(value); }
    inline ListTableStorageOptimizersResult& WithStorageOptimizerList(const Aws::Vector<StorageOptimizer>& value) { SetStorageOptimizerList(value); return *this;}
    inline ListTableStorageOptimizersResult& WithStorageOptimizerList(Aws::Vector<StorageOptimizer>&& value) { SetStorageOptimizerList(std::move(value)); return *this;}
    inline ListTableStorageOptimizersResult& AddStorageOptimizerList(const StorageOptimizer& value) { m_storageOptimizerList.push_back(value); return *this; }
    inline ListTableStorageOptimizersResult& AddStorageOptimizerList(StorageOptimizer&& value) { m_storageOptimizerList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTableStorageOptimizersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTableStorageOptimizersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTableStorageOptimizersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTableStorageOptimizersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTableStorageOptimizersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTableStorageOptimizersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StorageOptimizer> m_storageOptimizerList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
