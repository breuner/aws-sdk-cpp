﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/DeploymentStatus.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class CreateDeploymentResult
  {
  public:
    AWS_APIGATEWAYV2_API CreateDeploymentResult();
    AWS_APIGATEWAYV2_API CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether a deployment was automatically released.</p>
     */
    inline bool GetAutoDeployed() const{ return m_autoDeployed; }
    inline void SetAutoDeployed(bool value) { m_autoDeployed = value; }
    inline CreateDeploymentResult& WithAutoDeployed(bool value) { SetAutoDeployed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline CreateDeploymentResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CreateDeploymentResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }
    inline CreateDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline CreateDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment: PENDING, FAILED, or SUCCEEDED.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatus = std::move(value); }
    inline CreateDeploymentResult& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline CreateDeploymentResult& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const{ return m_deploymentStatusMessage; }
    inline void SetDeploymentStatusMessage(const Aws::String& value) { m_deploymentStatusMessage = value; }
    inline void SetDeploymentStatusMessage(Aws::String&& value) { m_deploymentStatusMessage = std::move(value); }
    inline void SetDeploymentStatusMessage(const char* value) { m_deploymentStatusMessage.assign(value); }
    inline CreateDeploymentResult& WithDeploymentStatusMessage(const Aws::String& value) { SetDeploymentStatusMessage(value); return *this;}
    inline CreateDeploymentResult& WithDeploymentStatusMessage(Aws::String&& value) { SetDeploymentStatusMessage(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithDeploymentStatusMessage(const char* value) { SetDeploymentStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_autoDeployed;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_deploymentId;

    DeploymentStatus m_deploymentStatus;

    Aws::String m_deploymentStatusMessage;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
