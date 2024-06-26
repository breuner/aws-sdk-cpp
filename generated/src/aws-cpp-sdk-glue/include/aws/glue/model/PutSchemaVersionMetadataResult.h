﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class PutSchemaVersionMetadataResult
  {
  public:
    AWS_GLUE_API PutSchemaVersionMetadataResult();
    AWS_GLUE_API PutSchemaVersionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API PutSchemaVersionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }
    inline PutSchemaVersionMetadataResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline PutSchemaVersionMetadataResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline PutSchemaVersionMetadataResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }
    inline PutSchemaVersionMetadataResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline PutSchemaVersionMetadataResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline PutSchemaVersionMetadataResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }
    inline PutSchemaVersionMetadataResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}
    inline PutSchemaVersionMetadataResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}
    inline PutSchemaVersionMetadataResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the schema.</p>
     */
    inline bool GetLatestVersion() const{ return m_latestVersion; }
    inline void SetLatestVersion(bool value) { m_latestVersion = value; }
    inline PutSchemaVersionMetadataResult& WithLatestVersion(bool value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline PutSchemaVersionMetadataResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionId = value; }
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionId = std::move(value); }
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionId.assign(value); }
    inline PutSchemaVersionMetadataResult& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}
    inline PutSchemaVersionMetadataResult& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}
    inline PutSchemaVersionMetadataResult& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata key.</p>
     */
    inline const Aws::String& GetMetadataKey() const{ return m_metadataKey; }
    inline void SetMetadataKey(const Aws::String& value) { m_metadataKey = value; }
    inline void SetMetadataKey(Aws::String&& value) { m_metadataKey = std::move(value); }
    inline void SetMetadataKey(const char* value) { m_metadataKey.assign(value); }
    inline PutSchemaVersionMetadataResult& WithMetadataKey(const Aws::String& value) { SetMetadataKey(value); return *this;}
    inline PutSchemaVersionMetadataResult& WithMetadataKey(Aws::String&& value) { SetMetadataKey(std::move(value)); return *this;}
    inline PutSchemaVersionMetadataResult& WithMetadataKey(const char* value) { SetMetadataKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metadata key.</p>
     */
    inline const Aws::String& GetMetadataValue() const{ return m_metadataValue; }
    inline void SetMetadataValue(const Aws::String& value) { m_metadataValue = value; }
    inline void SetMetadataValue(Aws::String&& value) { m_metadataValue = std::move(value); }
    inline void SetMetadataValue(const char* value) { m_metadataValue.assign(value); }
    inline PutSchemaVersionMetadataResult& WithMetadataValue(const Aws::String& value) { SetMetadataValue(value); return *this;}
    inline PutSchemaVersionMetadataResult& WithMetadataValue(Aws::String&& value) { SetMetadataValue(std::move(value)); return *this;}
    inline PutSchemaVersionMetadataResult& WithMetadataValue(const char* value) { SetMetadataValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSchemaVersionMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSchemaVersionMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSchemaVersionMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_registryName;

    bool m_latestVersion;

    long long m_versionNumber;

    Aws::String m_schemaVersionId;

    Aws::String m_metadataKey;

    Aws::String m_metadataValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
