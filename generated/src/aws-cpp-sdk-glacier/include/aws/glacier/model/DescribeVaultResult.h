﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DescribeVaultOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVaultResult
  {
  public:
    AWS_GLACIER_API DescribeVaultResult();
    AWS_GLACIER_API DescribeVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API DescribeVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }
    inline void SetVaultARN(const Aws::String& value) { m_vaultARN = value; }
    inline void SetVaultARN(Aws::String&& value) { m_vaultARN = std::move(value); }
    inline void SetVaultARN(const char* value) { m_vaultARN.assign(value); }
    inline DescribeVaultResult& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}
    inline DescribeVaultResult& WithVaultARN(Aws::String&& value) { SetVaultARN(std::move(value)); return *this;}
    inline DescribeVaultResult& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }
    inline void SetVaultName(const Aws::String& value) { m_vaultName = value; }
    inline void SetVaultName(Aws::String&& value) { m_vaultName = std::move(value); }
    inline void SetVaultName(const char* value) { m_vaultName.assign(value); }
    inline DescribeVaultResult& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}
    inline DescribeVaultResult& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}
    inline DescribeVaultResult& WithVaultName(const char* value) { SetVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDate.assign(value); }
    inline DescribeVaultResult& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline DescribeVaultResult& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline DescribeVaultResult& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetLastInventoryDate() const{ return m_lastInventoryDate; }
    inline void SetLastInventoryDate(const Aws::String& value) { m_lastInventoryDate = value; }
    inline void SetLastInventoryDate(Aws::String&& value) { m_lastInventoryDate = std::move(value); }
    inline void SetLastInventoryDate(const char* value) { m_lastInventoryDate.assign(value); }
    inline DescribeVaultResult& WithLastInventoryDate(const Aws::String& value) { SetLastInventoryDate(value); return *this;}
    inline DescribeVaultResult& WithLastInventoryDate(Aws::String&& value) { SetLastInventoryDate(std::move(value)); return *this;}
    inline DescribeVaultResult& WithLastInventoryDate(const char* value) { SetLastInventoryDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example if you just created the vault.</p>
     */
    inline long long GetNumberOfArchives() const{ return m_numberOfArchives; }
    inline void SetNumberOfArchives(long long value) { m_numberOfArchives = value; }
    inline DescribeVaultResult& WithNumberOfArchives(long long value) { SetNumberOfArchives(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example if you just created the vault.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytes = value; }
    inline DescribeVaultResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVaultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVaultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVaultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vaultARN;

    Aws::String m_vaultName;

    Aws::String m_creationDate;

    Aws::String m_lastInventoryDate;

    long long m_numberOfArchives;

    long long m_sizeInBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
