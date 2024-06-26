﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class GetQualificationTypeRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API GetQualificationTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQualificationType"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }
    inline GetQualificationTypeRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}
    inline GetQualificationTypeRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}
    inline GetQualificationTypeRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}
    ///@}
  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
