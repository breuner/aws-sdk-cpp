﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgeOutputConfig.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeDeviceFleetResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDeviceFleetResult();
    AWS_SAGEMAKER_API DescribeDeviceFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDeviceFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetName.assign(value); }
    inline DescribeDeviceFleetResult& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline DescribeDeviceFleetResult& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline DescribeDeviceFleetResult& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetArn() const{ return m_deviceFleetArn; }
    inline void SetDeviceFleetArn(const Aws::String& value) { m_deviceFleetArn = value; }
    inline void SetDeviceFleetArn(Aws::String&& value) { m_deviceFleetArn = std::move(value); }
    inline void SetDeviceFleetArn(const char* value) { m_deviceFleetArn.assign(value); }
    inline DescribeDeviceFleetResult& WithDeviceFleetArn(const Aws::String& value) { SetDeviceFleetArn(value); return *this;}
    inline DescribeDeviceFleetResult& WithDeviceFleetArn(Aws::String&& value) { SetDeviceFleetArn(std::move(value)); return *this;}
    inline DescribeDeviceFleetResult& WithDeviceFleetArn(const char* value) { SetDeviceFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for storing sampled data.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const EdgeOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(EdgeOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline DescribeDeviceFleetResult& WithOutputConfig(const EdgeOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline DescribeDeviceFleetResult& WithOutputConfig(EdgeOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeDeviceFleetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeDeviceFleetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeDeviceFleetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the device fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeDeviceFleetResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeDeviceFleetResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the device fleet was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeDeviceFleetResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeDeviceFleetResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeDeviceFleetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeDeviceFleetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeDeviceFleetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) alias created in Amazon Web Services Internet
     * of Things (IoT).</p>
     */
    inline const Aws::String& GetIotRoleAlias() const{ return m_iotRoleAlias; }
    inline void SetIotRoleAlias(const Aws::String& value) { m_iotRoleAlias = value; }
    inline void SetIotRoleAlias(Aws::String&& value) { m_iotRoleAlias = std::move(value); }
    inline void SetIotRoleAlias(const char* value) { m_iotRoleAlias.assign(value); }
    inline DescribeDeviceFleetResult& WithIotRoleAlias(const Aws::String& value) { SetIotRoleAlias(value); return *this;}
    inline DescribeDeviceFleetResult& WithIotRoleAlias(Aws::String&& value) { SetIotRoleAlias(std::move(value)); return *this;}
    inline DescribeDeviceFleetResult& WithIotRoleAlias(const char* value) { SetIotRoleAlias(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDeviceFleetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDeviceFleetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDeviceFleetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceFleetName;

    Aws::String m_deviceFleetArn;

    EdgeOutputConfig m_outputConfig;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_roleArn;

    Aws::String m_iotRoleAlias;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
