﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/Patch.h>
#include <aws/ssm/model/PatchStatus.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The <code>EffectivePatch</code> structure defines metadata about a patch
   * along with the approval state of the patch in a particular patch baseline. The
   * approval state includes information about whether the patch is currently
   * approved, due to be approved by a rule, explicitly approved, or explicitly
   * rejected and the date the patch was or will be approved.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/EffectivePatch">AWS
   * API Reference</a></p>
   */
  class EffectivePatch
  {
  public:
    AWS_SSM_API EffectivePatch() = default;
    AWS_SSM_API EffectivePatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API EffectivePatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides metadata for a patch, including information such as the KB ID,
     * severity, classification and a URL for where more information can be obtained
     * about the patch.</p>
     */
    inline const Patch& GetPatch() const { return m_patch; }
    inline bool PatchHasBeenSet() const { return m_patchHasBeenSet; }
    template<typename PatchT = Patch>
    void SetPatch(PatchT&& value) { m_patchHasBeenSet = true; m_patch = std::forward<PatchT>(value); }
    template<typename PatchT = Patch>
    EffectivePatch& WithPatch(PatchT&& value) { SetPatch(std::forward<PatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the patch in a patch baseline. This includes information about
     * whether the patch is currently approved, due to be approved by a rule,
     * explicitly approved, or explicitly rejected and the date the patch was or will
     * be approved.</p>
     */
    inline const PatchStatus& GetPatchStatus() const { return m_patchStatus; }
    inline bool PatchStatusHasBeenSet() const { return m_patchStatusHasBeenSet; }
    template<typename PatchStatusT = PatchStatus>
    void SetPatchStatus(PatchStatusT&& value) { m_patchStatusHasBeenSet = true; m_patchStatus = std::forward<PatchStatusT>(value); }
    template<typename PatchStatusT = PatchStatus>
    EffectivePatch& WithPatchStatus(PatchStatusT&& value) { SetPatchStatus(std::forward<PatchStatusT>(value)); return *this;}
    ///@}
  private:

    Patch m_patch;
    bool m_patchHasBeenSet = false;

    PatchStatus m_patchStatus;
    bool m_patchStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
