﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class DescribeEntityResult
  {
  public:
    AWS_MARKETPLACECATALOG_API DescribeEntityResult();
    AWS_MARKETPLACECATALOG_API DescribeEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API DescribeEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }
    inline void SetEntityType(const Aws::String& value) { m_entityType = value; }
    inline void SetEntityType(Aws::String&& value) { m_entityType = std::move(value); }
    inline void SetEntityType(const char* value) { m_entityType.assign(value); }
    inline DescribeEntityResult& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}
    inline DescribeEntityResult& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}
    inline DescribeEntityResult& WithEntityType(const char* value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifier = value; }
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifier = std::move(value); }
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifier.assign(value); }
    inline DescribeEntityResult& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}
    inline DescribeEntityResult& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}
    inline DescribeEntityResult& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }
    inline void SetEntityArn(const Aws::String& value) { m_entityArn = value; }
    inline void SetEntityArn(Aws::String&& value) { m_entityArn = std::move(value); }
    inline void SetEntityArn(const char* value) { m_entityArn.assign(value); }
    inline DescribeEntityResult& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}
    inline DescribeEntityResult& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}
    inline DescribeEntityResult& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDate.assign(value); }
    inline DescribeEntityResult& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline DescribeEntityResult& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline DescribeEntityResult& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline void SetDetails(const Aws::String& value) { m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_details.assign(value); }
    inline DescribeEntityResult& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline DescribeEntityResult& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline DescribeEntityResult& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON value of the details specific to the entity.</p>
     */
    inline Aws::Utils::DocumentView GetDetailsDocument() const{ return m_detailsDocument; }
    inline void SetDetailsDocument(const Aws::Utils::Document& value) { m_detailsDocument = value; }
    inline void SetDetailsDocument(Aws::Utils::Document&& value) { m_detailsDocument = std::move(value); }
    inline DescribeEntityResult& WithDetailsDocument(const Aws::Utils::Document& value) { SetDetailsDocument(value); return *this;}
    inline DescribeEntityResult& WithDetailsDocument(Aws::Utils::Document&& value) { SetDetailsDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEntityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEntityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEntityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_entityType;

    Aws::String m_entityIdentifier;

    Aws::String m_entityArn;

    Aws::String m_lastModifiedDate;

    Aws::String m_details;

    Aws::Utils::Document m_detailsDocument;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
