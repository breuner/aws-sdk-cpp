﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/RepositoryCatalogData.h>
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
namespace ECRPublic
{
namespace Model
{
  class PutRepositoryCatalogDataResult
  {
  public:
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataResult();
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The catalog data for the repository.</p>
     */
    inline const RepositoryCatalogData& GetCatalogData() const{ return m_catalogData; }
    inline void SetCatalogData(const RepositoryCatalogData& value) { m_catalogData = value; }
    inline void SetCatalogData(RepositoryCatalogData&& value) { m_catalogData = std::move(value); }
    inline PutRepositoryCatalogDataResult& WithCatalogData(const RepositoryCatalogData& value) { SetCatalogData(value); return *this;}
    inline PutRepositoryCatalogDataResult& WithCatalogData(RepositoryCatalogData&& value) { SetCatalogData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutRepositoryCatalogDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutRepositoryCatalogDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutRepositoryCatalogDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RepositoryCatalogData m_catalogData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
