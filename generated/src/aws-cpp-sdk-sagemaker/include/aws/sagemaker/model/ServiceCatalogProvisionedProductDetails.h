﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details of a provisioned service catalog product. For information about
   * service catalog, see <a
   * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
   * is Amazon Web Services Service Catalog</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ServiceCatalogProvisionedProductDetails">AWS
   * API Reference</a></p>
   */
  class ServiceCatalogProvisionedProductDetails
  {
  public:
    AWS_SAGEMAKER_API ServiceCatalogProvisionedProductDetails() = default;
    AWS_SAGEMAKER_API ServiceCatalogProvisionedProductDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ServiceCatalogProvisionedProductDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    ServiceCatalogProvisionedProductDetails& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> -
     * Stable state, ready to perform any operation. The most recent operation
     * succeeded and completed.</p> </li> <li> <p> <code>UNDER_CHANGE</code> -
     * Transitive state. Operations performed might not have valid results. Wait for an
     * AVAILABLE status before performing operations.</p> </li> <li> <p>
     * <code>TAINTED</code> - Stable state, ready to perform any operation. The stack
     * has completed the requested operation but is not exactly what was requested. For
     * example, a request to update to a new version failed and the stack rolled back
     * to the current version.</p> </li> <li> <p> <code>ERROR</code> - An unexpected
     * error occurred. The provisioned product exists but the stack is not running. For
     * example, CloudFormation received a parameter value that was not valid and could
     * not launch the stack.</p> </li> <li> <p> <code>PLAN_IN_PROGRESS</code> -
     * Transitive state. The plan operations were performed to provision a new product,
     * but resources have not yet been created. After reviewing the list of resources
     * to be created, execute the plan. Wait for an AVAILABLE status before performing
     * operations.</p> </li> </ul>
     */
    inline const Aws::String& GetProvisionedProductStatusMessage() const { return m_provisionedProductStatusMessage; }
    inline bool ProvisionedProductStatusMessageHasBeenSet() const { return m_provisionedProductStatusMessageHasBeenSet; }
    template<typename ProvisionedProductStatusMessageT = Aws::String>
    void SetProvisionedProductStatusMessage(ProvisionedProductStatusMessageT&& value) { m_provisionedProductStatusMessageHasBeenSet = true; m_provisionedProductStatusMessage = std::forward<ProvisionedProductStatusMessageT>(value); }
    template<typename ProvisionedProductStatusMessageT = Aws::String>
    ServiceCatalogProvisionedProductDetails& WithProvisionedProductStatusMessage(ProvisionedProductStatusMessageT&& value) { SetProvisionedProductStatusMessage(std::forward<ProvisionedProductStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_provisionedProductStatusMessage;
    bool m_provisionedProductStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
