﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/RulesPackage.h>
#include <aws/inspector/model/FailedItemDetails.h>
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
namespace Inspector
{
namespace Model
{
  class DescribeRulesPackagesResult
  {
  public:
    AWS_INSPECTOR_API DescribeRulesPackagesResult();
    AWS_INSPECTOR_API DescribeRulesPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeRulesPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the rules package.</p>
     */
    inline const Aws::Vector<RulesPackage>& GetRulesPackages() const{ return m_rulesPackages; }
    inline void SetRulesPackages(const Aws::Vector<RulesPackage>& value) { m_rulesPackages = value; }
    inline void SetRulesPackages(Aws::Vector<RulesPackage>&& value) { m_rulesPackages = std::move(value); }
    inline DescribeRulesPackagesResult& WithRulesPackages(const Aws::Vector<RulesPackage>& value) { SetRulesPackages(value); return *this;}
    inline DescribeRulesPackagesResult& WithRulesPackages(Aws::Vector<RulesPackage>&& value) { SetRulesPackages(std::move(value)); return *this;}
    inline DescribeRulesPackagesResult& AddRulesPackages(const RulesPackage& value) { m_rulesPackages.push_back(value); return *this; }
    inline DescribeRulesPackagesResult& AddRulesPackages(RulesPackage&& value) { m_rulesPackages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules package details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }
    inline DescribeRulesPackagesResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}
    inline DescribeRulesPackagesResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}
    inline DescribeRulesPackagesResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    inline DescribeRulesPackagesResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }
    inline DescribeRulesPackagesResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeRulesPackagesResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeRulesPackagesResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeRulesPackagesResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRulesPackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRulesPackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRulesPackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RulesPackage> m_rulesPackages;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
