﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DeploymentControllerType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The deployment controller to use for the service. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentController">AWS
   * API Reference</a></p>
   */
  class DeploymentController
  {
  public:
    AWS_ECS_API DeploymentController() = default;
    AWS_ECS_API DeploymentController(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API DeploymentController& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment controller type to use.</p> <p>There are three deployment
     * controller types available:</p> <dl> <dt>ECS</dt> <dd> <p>The rolling update
     * (<code>ECS</code>) deployment type involves replacing the current running
     * version of the container with the latest version. The number of containers
     * Amazon ECS adds or removes from the service during a rolling update is
     * controlled by adjusting the minimum and maximum number of healthy tasks allowed
     * during a service deployment, as specified in the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DeploymentConfiguration.html">DeploymentConfiguration</a>.</p>
     * <p>For more information about rolling deployments, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-ecs.html">Deploy
     * Amazon ECS services by replacing tasks</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> </dd> <dt>CODE_DEPLOY</dt> <dd> <p>The
     * blue/green (<code>CODE_DEPLOY</code>) deployment type uses the blue/green
     * deployment model powered by CodeDeploy, which allows you to verify a new
     * deployment of a service before sending production traffic to it.</p> <p>For more
     * information about blue/green deployments, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-bluegreen.html">Validate
     * the state of an Amazon ECS service before deployment </a> in the <i>Amazon
     * Elastic Container Service Developer Guide</i>.</p> </dd> <dt>EXTERNAL</dt> <dd>
     * <p>The external (<code>EXTERNAL</code>) deployment type enables you to use any
     * third-party deployment controller for full control over the deployment process
     * for an Amazon ECS service.</p> <p>For more information about external
     * deployments, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-external.html">Deploy
     * Amazon ECS services using a third-party controller </a> in the <i>Amazon Elastic
     * Container Service Developer Guide</i>.</p> </dd> </dl>
     */
    inline DeploymentControllerType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DeploymentControllerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DeploymentController& WithType(DeploymentControllerType value) { SetType(value); return *this;}
    ///@}
  private:

    DeploymentControllerType m_type{DeploymentControllerType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
