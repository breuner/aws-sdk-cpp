﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastic-inference/ElasticInference_EXPORTS.h>
#include <aws/elastic-inference/model/ElasticInferenceAcceleratorHealth.h>
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
namespace ElasticInference
{
namespace Model
{

  /**
   * <p> The details of an Elastic Inference Accelerator. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastic-inference-2017-07-25/ElasticInferenceAccelerator">AWS
   * API Reference</a></p>
   */
  class ElasticInferenceAccelerator
  {
  public:
    AWS_ELASTICINFERENCE_API ElasticInferenceAccelerator();
    AWS_ELASTICINFERENCE_API ElasticInferenceAccelerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API ElasticInferenceAccelerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The health of the Elastic Inference Accelerator. </p>
     */
    inline const ElasticInferenceAcceleratorHealth& GetAcceleratorHealth() const{ return m_acceleratorHealth; }
    inline bool AcceleratorHealthHasBeenSet() const { return m_acceleratorHealthHasBeenSet; }
    inline void SetAcceleratorHealth(const ElasticInferenceAcceleratorHealth& value) { m_acceleratorHealthHasBeenSet = true; m_acceleratorHealth = value; }
    inline void SetAcceleratorHealth(ElasticInferenceAcceleratorHealth&& value) { m_acceleratorHealthHasBeenSet = true; m_acceleratorHealth = std::move(value); }
    inline ElasticInferenceAccelerator& WithAcceleratorHealth(const ElasticInferenceAcceleratorHealth& value) { SetAcceleratorHealth(value); return *this;}
    inline ElasticInferenceAccelerator& WithAcceleratorHealth(ElasticInferenceAcceleratorHealth&& value) { SetAcceleratorHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the Elastic Inference Accelerator. </p>
     */
    inline const Aws::String& GetAcceleratorType() const{ return m_acceleratorType; }
    inline bool AcceleratorTypeHasBeenSet() const { return m_acceleratorTypeHasBeenSet; }
    inline void SetAcceleratorType(const Aws::String& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = value; }
    inline void SetAcceleratorType(Aws::String&& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = std::move(value); }
    inline void SetAcceleratorType(const char* value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType.assign(value); }
    inline ElasticInferenceAccelerator& WithAcceleratorType(const Aws::String& value) { SetAcceleratorType(value); return *this;}
    inline ElasticInferenceAccelerator& WithAcceleratorType(Aws::String&& value) { SetAcceleratorType(std::move(value)); return *this;}
    inline ElasticInferenceAccelerator& WithAcceleratorType(const char* value) { SetAcceleratorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Elastic Inference Accelerator. </p>
     */
    inline const Aws::String& GetAcceleratorId() const{ return m_acceleratorId; }
    inline bool AcceleratorIdHasBeenSet() const { return m_acceleratorIdHasBeenSet; }
    inline void SetAcceleratorId(const Aws::String& value) { m_acceleratorIdHasBeenSet = true; m_acceleratorId = value; }
    inline void SetAcceleratorId(Aws::String&& value) { m_acceleratorIdHasBeenSet = true; m_acceleratorId = std::move(value); }
    inline void SetAcceleratorId(const char* value) { m_acceleratorIdHasBeenSet = true; m_acceleratorId.assign(value); }
    inline ElasticInferenceAccelerator& WithAcceleratorId(const Aws::String& value) { SetAcceleratorId(value); return *this;}
    inline ElasticInferenceAccelerator& WithAcceleratorId(Aws::String&& value) { SetAcceleratorId(std::move(value)); return *this;}
    inline ElasticInferenceAccelerator& WithAcceleratorId(const char* value) { SetAcceleratorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The availability zone where the Elastic Inference Accelerator is present.
     * </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ElasticInferenceAccelerator& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ElasticInferenceAccelerator& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ElasticInferenceAccelerator& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the resource that the Elastic Inference Accelerator is attached
     * to. </p>
     */
    inline const Aws::String& GetAttachedResource() const{ return m_attachedResource; }
    inline bool AttachedResourceHasBeenSet() const { return m_attachedResourceHasBeenSet; }
    inline void SetAttachedResource(const Aws::String& value) { m_attachedResourceHasBeenSet = true; m_attachedResource = value; }
    inline void SetAttachedResource(Aws::String&& value) { m_attachedResourceHasBeenSet = true; m_attachedResource = std::move(value); }
    inline void SetAttachedResource(const char* value) { m_attachedResourceHasBeenSet = true; m_attachedResource.assign(value); }
    inline ElasticInferenceAccelerator& WithAttachedResource(const Aws::String& value) { SetAttachedResource(value); return *this;}
    inline ElasticInferenceAccelerator& WithAttachedResource(Aws::String&& value) { SetAttachedResource(std::move(value)); return *this;}
    inline ElasticInferenceAccelerator& WithAttachedResource(const char* value) { SetAttachedResource(value); return *this;}
    ///@}
  private:

    ElasticInferenceAcceleratorHealth m_acceleratorHealth;
    bool m_acceleratorHealthHasBeenSet = false;

    Aws::String m_acceleratorType;
    bool m_acceleratorTypeHasBeenSet = false;

    Aws::String m_acceleratorId;
    bool m_acceleratorIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_attachedResource;
    bool m_attachedResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
