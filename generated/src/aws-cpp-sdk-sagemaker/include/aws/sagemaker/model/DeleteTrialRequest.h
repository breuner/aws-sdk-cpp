﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteTrialRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteTrialRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrial"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the trial to delete.</p>
     */
    inline const Aws::String& GetTrialName() const { return m_trialName; }
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }
    template<typename TrialNameT = Aws::String>
    void SetTrialName(TrialNameT&& value) { m_trialNameHasBeenSet = true; m_trialName = std::forward<TrialNameT>(value); }
    template<typename TrialNameT = Aws::String>
    DeleteTrialRequest& WithTrialName(TrialNameT&& value) { SetTrialName(std::forward<TrialNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
