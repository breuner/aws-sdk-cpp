﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/PackageDetails.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by the <code>UpdatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdatePackageResponse">AWS
   * API Reference</a></p>
   */
  class UpdatePackageResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdatePackageResult();
    AWS_OPENSEARCHSERVICE_API UpdatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a package.</p>
     */
    inline const PackageDetails& GetPackageDetails() const{ return m_packageDetails; }
    inline void SetPackageDetails(const PackageDetails& value) { m_packageDetails = value; }
    inline void SetPackageDetails(PackageDetails&& value) { m_packageDetails = std::move(value); }
    inline UpdatePackageResult& WithPackageDetails(const PackageDetails& value) { SetPackageDetails(value); return *this;}
    inline UpdatePackageResult& WithPackageDetails(PackageDetails&& value) { SetPackageDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PackageDetails m_packageDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
