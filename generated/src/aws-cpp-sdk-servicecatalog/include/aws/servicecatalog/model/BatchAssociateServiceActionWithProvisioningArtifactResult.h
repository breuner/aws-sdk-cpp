﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/FailedServiceActionAssociation.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class BatchAssociateServiceActionWithProvisioningArtifactResult
  {
  public:
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult();
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline const Aws::Vector<FailedServiceActionAssociation>& GetFailedServiceActionAssociations() const{ return m_failedServiceActionAssociations; }
    inline void SetFailedServiceActionAssociations(const Aws::Vector<FailedServiceActionAssociation>& value) { m_failedServiceActionAssociations = value; }
    inline void SetFailedServiceActionAssociations(Aws::Vector<FailedServiceActionAssociation>&& value) { m_failedServiceActionAssociations = std::move(value); }
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& WithFailedServiceActionAssociations(const Aws::Vector<FailedServiceActionAssociation>& value) { SetFailedServiceActionAssociations(value); return *this;}
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& WithFailedServiceActionAssociations(Aws::Vector<FailedServiceActionAssociation>&& value) { SetFailedServiceActionAssociations(std::move(value)); return *this;}
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& AddFailedServiceActionAssociations(const FailedServiceActionAssociation& value) { m_failedServiceActionAssociations.push_back(value); return *this; }
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& AddFailedServiceActionAssociations(FailedServiceActionAssociation&& value) { m_failedServiceActionAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedServiceActionAssociation> m_failedServiceActionAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
