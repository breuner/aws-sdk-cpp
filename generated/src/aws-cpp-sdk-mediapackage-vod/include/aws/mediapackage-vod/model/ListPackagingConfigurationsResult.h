﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/PackagingConfiguration.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class ListPackagingConfigurationsResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API ListPackagingConfigurationsResult();
    AWS_MEDIAPACKAGEVOD_API ListPackagingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API ListPackagingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPackagingConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPackagingConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPackagingConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of MediaPackage VOD PackagingConfiguration resources.
     */
    inline const Aws::Vector<PackagingConfiguration>& GetPackagingConfigurations() const{ return m_packagingConfigurations; }
    inline void SetPackagingConfigurations(const Aws::Vector<PackagingConfiguration>& value) { m_packagingConfigurations = value; }
    inline void SetPackagingConfigurations(Aws::Vector<PackagingConfiguration>&& value) { m_packagingConfigurations = std::move(value); }
    inline ListPackagingConfigurationsResult& WithPackagingConfigurations(const Aws::Vector<PackagingConfiguration>& value) { SetPackagingConfigurations(value); return *this;}
    inline ListPackagingConfigurationsResult& WithPackagingConfigurations(Aws::Vector<PackagingConfiguration>&& value) { SetPackagingConfigurations(std::move(value)); return *this;}
    inline ListPackagingConfigurationsResult& AddPackagingConfigurations(const PackagingConfiguration& value) { m_packagingConfigurations.push_back(value); return *this; }
    inline ListPackagingConfigurationsResult& AddPackagingConfigurations(PackagingConfiguration&& value) { m_packagingConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPackagingConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPackagingConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPackagingConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PackagingConfiguration> m_packagingConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
