﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SchemaVersionListItem.h>
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
namespace Glue
{
namespace Model
{
  class ListSchemaVersionsResult
  {
  public:
    AWS_GLUE_API ListSchemaVersionsResult();
    AWS_GLUE_API ListSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>SchemaVersionList</code> objects containing details of each
     * schema version.</p>
     */
    inline const Aws::Vector<SchemaVersionListItem>& GetSchemas() const{ return m_schemas; }
    inline void SetSchemas(const Aws::Vector<SchemaVersionListItem>& value) { m_schemas = value; }
    inline void SetSchemas(Aws::Vector<SchemaVersionListItem>&& value) { m_schemas = std::move(value); }
    inline ListSchemaVersionsResult& WithSchemas(const Aws::Vector<SchemaVersionListItem>& value) { SetSchemas(value); return *this;}
    inline ListSchemaVersionsResult& WithSchemas(Aws::Vector<SchemaVersionListItem>&& value) { SetSchemas(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& AddSchemas(const SchemaVersionListItem& value) { m_schemas.push_back(value); return *this; }
    inline ListSchemaVersionsResult& AddSchemas(SchemaVersionListItem&& value) { m_schemas.push_back(std::move(value)); return *this; }
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
    inline ListSchemaVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSchemaVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSchemaVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSchemaVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaVersionListItem> m_schemas;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
