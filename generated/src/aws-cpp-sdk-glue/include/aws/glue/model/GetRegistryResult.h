﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/RegistryStatus.h>
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
  class GetRegistryResult
  {
  public:
    AWS_GLUE_API GetRegistryResult();
    AWS_GLUE_API GetRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }
    inline GetRegistryResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}
    inline GetRegistryResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}
    inline GetRegistryResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }
    inline GetRegistryResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}
    inline GetRegistryResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}
    inline GetRegistryResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the registry.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetRegistryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetRegistryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetRegistryResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registry.</p>
     */
    inline const RegistryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RegistryStatus& value) { m_status = value; }
    inline void SetStatus(RegistryStatus&& value) { m_status = std::move(value); }
    inline GetRegistryResult& WithStatus(const RegistryStatus& value) { SetStatus(value); return *this;}
    inline GetRegistryResult& WithStatus(RegistryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the registry was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::String& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::String&& value) { m_createdTime = std::move(value); }
    inline void SetCreatedTime(const char* value) { m_createdTime.assign(value); }
    inline GetRegistryResult& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}
    inline GetRegistryResult& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}
    inline GetRegistryResult& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline const Aws::String& GetUpdatedTime() const{ return m_updatedTime; }
    inline void SetUpdatedTime(const Aws::String& value) { m_updatedTime = value; }
    inline void SetUpdatedTime(Aws::String&& value) { m_updatedTime = std::move(value); }
    inline void SetUpdatedTime(const char* value) { m_updatedTime.assign(value); }
    inline GetRegistryResult& WithUpdatedTime(const Aws::String& value) { SetUpdatedTime(value); return *this;}
    inline GetRegistryResult& WithUpdatedTime(Aws::String&& value) { SetUpdatedTime(std::move(value)); return *this;}
    inline GetRegistryResult& WithUpdatedTime(const char* value) { SetUpdatedTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRegistryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRegistryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRegistryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryName;

    Aws::String m_registryArn;

    Aws::String m_description;

    RegistryStatus m_status;

    Aws::String m_createdTime;

    Aws::String m_updatedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
