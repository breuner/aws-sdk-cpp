﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/InsightStatus.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Returns information about the resource being evaluated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InsightResourceDetail">AWS
   * API Reference</a></p>
   */
  class InsightResourceDetail
  {
  public:
    AWS_EKS_API InsightResourceDetail();
    AWS_EKS_API InsightResourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightResourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing more detail on the status of the insight resource.</p>
     */
    inline const InsightStatus& GetInsightStatus() const{ return m_insightStatus; }
    inline bool InsightStatusHasBeenSet() const { return m_insightStatusHasBeenSet; }
    inline void SetInsightStatus(const InsightStatus& value) { m_insightStatusHasBeenSet = true; m_insightStatus = value; }
    inline void SetInsightStatus(InsightStatus&& value) { m_insightStatusHasBeenSet = true; m_insightStatus = std::move(value); }
    inline InsightResourceDetail& WithInsightStatus(const InsightStatus& value) { SetInsightStatus(value); return *this;}
    inline InsightResourceDetail& WithInsightStatus(InsightStatus&& value) { SetInsightStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes resource URI if applicable.</p>
     */
    inline const Aws::String& GetKubernetesResourceUri() const{ return m_kubernetesResourceUri; }
    inline bool KubernetesResourceUriHasBeenSet() const { return m_kubernetesResourceUriHasBeenSet; }
    inline void SetKubernetesResourceUri(const Aws::String& value) { m_kubernetesResourceUriHasBeenSet = true; m_kubernetesResourceUri = value; }
    inline void SetKubernetesResourceUri(Aws::String&& value) { m_kubernetesResourceUriHasBeenSet = true; m_kubernetesResourceUri = std::move(value); }
    inline void SetKubernetesResourceUri(const char* value) { m_kubernetesResourceUriHasBeenSet = true; m_kubernetesResourceUri.assign(value); }
    inline InsightResourceDetail& WithKubernetesResourceUri(const Aws::String& value) { SetKubernetesResourceUri(value); return *this;}
    inline InsightResourceDetail& WithKubernetesResourceUri(Aws::String&& value) { SetKubernetesResourceUri(std::move(value)); return *this;}
    inline InsightResourceDetail& WithKubernetesResourceUri(const char* value) { SetKubernetesResourceUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) if applicable.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline InsightResourceDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline InsightResourceDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline InsightResourceDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    InsightStatus m_insightStatus;
    bool m_insightStatusHasBeenSet = false;

    Aws::String m_kubernetesResourceUri;
    bool m_kubernetesResourceUriHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
