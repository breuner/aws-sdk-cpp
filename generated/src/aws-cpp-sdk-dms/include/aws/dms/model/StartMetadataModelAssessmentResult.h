﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class StartMetadataModelAssessmentResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelAssessmentResult();
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API StartMetadataModelAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the assessment operation.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const{ return m_requestIdentifier; }
    inline void SetRequestIdentifier(const Aws::String& value) { m_requestIdentifier = value; }
    inline void SetRequestIdentifier(Aws::String&& value) { m_requestIdentifier = std::move(value); }
    inline void SetRequestIdentifier(const char* value) { m_requestIdentifier.assign(value); }
    inline StartMetadataModelAssessmentResult& WithRequestIdentifier(const Aws::String& value) { SetRequestIdentifier(value); return *this;}
    inline StartMetadataModelAssessmentResult& WithRequestIdentifier(Aws::String&& value) { SetRequestIdentifier(std::move(value)); return *this;}
    inline StartMetadataModelAssessmentResult& WithRequestIdentifier(const char* value) { SetRequestIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartMetadataModelAssessmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartMetadataModelAssessmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartMetadataModelAssessmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
