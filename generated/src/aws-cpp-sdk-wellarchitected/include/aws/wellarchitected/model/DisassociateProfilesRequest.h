﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class DisassociateProfilesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API DisassociateProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateProfiles"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }
    inline DisassociateProfilesRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}
    inline DisassociateProfilesRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}
    inline DisassociateProfilesRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of profile ARNs to disassociate from the workload.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileArns() const{ return m_profileArns; }
    inline bool ProfileArnsHasBeenSet() const { return m_profileArnsHasBeenSet; }
    inline void SetProfileArns(const Aws::Vector<Aws::String>& value) { m_profileArnsHasBeenSet = true; m_profileArns = value; }
    inline void SetProfileArns(Aws::Vector<Aws::String>&& value) { m_profileArnsHasBeenSet = true; m_profileArns = std::move(value); }
    inline DisassociateProfilesRequest& WithProfileArns(const Aws::Vector<Aws::String>& value) { SetProfileArns(value); return *this;}
    inline DisassociateProfilesRequest& WithProfileArns(Aws::Vector<Aws::String>&& value) { SetProfileArns(std::move(value)); return *this;}
    inline DisassociateProfilesRequest& AddProfileArns(const Aws::String& value) { m_profileArnsHasBeenSet = true; m_profileArns.push_back(value); return *this; }
    inline DisassociateProfilesRequest& AddProfileArns(Aws::String&& value) { m_profileArnsHasBeenSet = true; m_profileArns.push_back(std::move(value)); return *this; }
    inline DisassociateProfilesRequest& AddProfileArns(const char* value) { m_profileArnsHasBeenSet = true; m_profileArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_profileArns;
    bool m_profileArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
