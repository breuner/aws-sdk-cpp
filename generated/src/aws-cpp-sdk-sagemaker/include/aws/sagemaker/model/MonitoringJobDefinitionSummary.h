﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary information about a monitoring job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringJobDefinitionSummary">AWS
   * API Reference</a></p>
   */
  class MonitoringJobDefinitionSummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringJobDefinitionSummary();
    AWS_SAGEMAKER_API MonitoringJobDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringJobDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the monitoring job.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const{ return m_monitoringJobDefinitionName; }
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }
    inline void SetMonitoringJobDefinitionName(const Aws::String& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = value; }
    inline void SetMonitoringJobDefinitionName(Aws::String&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::move(value); }
    inline void SetMonitoringJobDefinitionName(const char* value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName.assign(value); }
    inline MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionName(const Aws::String& value) { SetMonitoringJobDefinitionName(value); return *this;}
    inline MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionName(Aws::String&& value) { SetMonitoringJobDefinitionName(std::move(value)); return *this;}
    inline MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionName(const char* value) { SetMonitoringJobDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionArn() const{ return m_monitoringJobDefinitionArn; }
    inline bool MonitoringJobDefinitionArnHasBeenSet() const { return m_monitoringJobDefinitionArnHasBeenSet; }
    inline void SetMonitoringJobDefinitionArn(const Aws::String& value) { m_monitoringJobDefinitionArnHasBeenSet = true; m_monitoringJobDefinitionArn = value; }
    inline void SetMonitoringJobDefinitionArn(Aws::String&& value) { m_monitoringJobDefinitionArnHasBeenSet = true; m_monitoringJobDefinitionArn = std::move(value); }
    inline void SetMonitoringJobDefinitionArn(const char* value) { m_monitoringJobDefinitionArnHasBeenSet = true; m_monitoringJobDefinitionArn.assign(value); }
    inline MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionArn(const Aws::String& value) { SetMonitoringJobDefinitionArn(value); return *this;}
    inline MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionArn(Aws::String&& value) { SetMonitoringJobDefinitionArn(std::move(value)); return *this;}
    inline MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionArn(const char* value) { SetMonitoringJobDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the monitoring job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline MonitoringJobDefinitionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline MonitoringJobDefinitionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint that the job monitors.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline MonitoringJobDefinitionSummary& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline MonitoringJobDefinitionSummary& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline MonitoringJobDefinitionSummary& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionArn;
    bool m_monitoringJobDefinitionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
