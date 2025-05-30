﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AssociationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about a control's enablement status in a specified
   * standard. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsControlAssociationDetail">AWS
   * API Reference</a></p>
   */
  class StandardsControlAssociationDetail
  {
  public:
    AWS_SECURITYHUB_API StandardsControlAssociationDetail() = default;
    AWS_SECURITYHUB_API StandardsControlAssociationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControlAssociationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a security standard. </p>
     */
    inline const Aws::String& GetStandardsArn() const { return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    template<typename StandardsArnT = Aws::String>
    void SetStandardsArn(StandardsArnT&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::forward<StandardsArnT>(value); }
    template<typename StandardsArnT = Aws::String>
    StandardsControlAssociationDetail& WithStandardsArn(StandardsArnT&& value) { SetStandardsArn(std::forward<StandardsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of a security control across standards. Values for
     * this field typically consist of an Amazon Web Services service name and a
     * number, such as APIGateway.3. </p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    StandardsControlAssociationDetail& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a security control across standards, such as
     * <code>arn:aws:securityhub:eu-central-1:123456789012:security-control/S3.1</code>.
     * This parameter doesn't mention a specific standard. </p>
     */
    inline const Aws::String& GetSecurityControlArn() const { return m_securityControlArn; }
    inline bool SecurityControlArnHasBeenSet() const { return m_securityControlArnHasBeenSet; }
    template<typename SecurityControlArnT = Aws::String>
    void SetSecurityControlArn(SecurityControlArnT&& value) { m_securityControlArnHasBeenSet = true; m_securityControlArn = std::forward<SecurityControlArnT>(value); }
    template<typename SecurityControlArnT = Aws::String>
    StandardsControlAssociationDetail& WithSecurityControlArn(SecurityControlArnT&& value) { SetSecurityControlArn(std::forward<SecurityControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether a control is enabled or disabled in a specified standard.
     * </p>
     */
    inline AssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(AssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline StandardsControlAssociationDetail& WithAssociationStatus(AssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The requirement that underlies a control in the compliance framework related
     * to the standard. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const { return m_relatedRequirements; }
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }
    template<typename RelatedRequirementsT = Aws::Vector<Aws::String>>
    void SetRelatedRequirements(RelatedRequirementsT&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::forward<RelatedRequirementsT>(value); }
    template<typename RelatedRequirementsT = Aws::Vector<Aws::String>>
    StandardsControlAssociationDetail& WithRelatedRequirements(RelatedRequirementsT&& value) { SetRelatedRequirements(std::forward<RelatedRequirementsT>(value)); return *this;}
    template<typename RelatedRequirementsT = Aws::String>
    StandardsControlAssociationDetail& AddRelatedRequirements(RelatedRequirementsT&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.emplace_back(std::forward<RelatedRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time at which the enablement status of the control in the specified
     * standard was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    StandardsControlAssociationDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for updating the enablement status of a control in a specified
     * standard. </p>
     */
    inline const Aws::String& GetUpdatedReason() const { return m_updatedReason; }
    inline bool UpdatedReasonHasBeenSet() const { return m_updatedReasonHasBeenSet; }
    template<typename UpdatedReasonT = Aws::String>
    void SetUpdatedReason(UpdatedReasonT&& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = std::forward<UpdatedReasonT>(value); }
    template<typename UpdatedReasonT = Aws::String>
    StandardsControlAssociationDetail& WithUpdatedReason(UpdatedReasonT&& value) { SetUpdatedReason(std::forward<UpdatedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of a control. This field may reference a specific standard. </p>
     */
    inline const Aws::String& GetStandardsControlTitle() const { return m_standardsControlTitle; }
    inline bool StandardsControlTitleHasBeenSet() const { return m_standardsControlTitleHasBeenSet; }
    template<typename StandardsControlTitleT = Aws::String>
    void SetStandardsControlTitle(StandardsControlTitleT&& value) { m_standardsControlTitleHasBeenSet = true; m_standardsControlTitle = std::forward<StandardsControlTitleT>(value); }
    template<typename StandardsControlTitleT = Aws::String>
    StandardsControlAssociationDetail& WithStandardsControlTitle(StandardsControlTitleT&& value) { SetStandardsControlTitle(std::forward<StandardsControlTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of a control. This typically summarizes how Security Hub
     * evaluates the control and the conditions under which it produces a failed
     * finding. This parameter may reference a specific standard. </p>
     */
    inline const Aws::String& GetStandardsControlDescription() const { return m_standardsControlDescription; }
    inline bool StandardsControlDescriptionHasBeenSet() const { return m_standardsControlDescriptionHasBeenSet; }
    template<typename StandardsControlDescriptionT = Aws::String>
    void SetStandardsControlDescription(StandardsControlDescriptionT&& value) { m_standardsControlDescriptionHasBeenSet = true; m_standardsControlDescription = std::forward<StandardsControlDescriptionT>(value); }
    template<typename StandardsControlDescriptionT = Aws::String>
    StandardsControlAssociationDetail& WithStandardsControlDescription(StandardsControlDescriptionT&& value) { SetStandardsControlDescription(std::forward<StandardsControlDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides the input parameter that Security Hub uses to call the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_UpdateStandardsControl.html">UpdateStandardsControl</a>
     * API. This API can be used to enable or disable a control in a specified
     * standard. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStandardsControlArns() const { return m_standardsControlArns; }
    inline bool StandardsControlArnsHasBeenSet() const { return m_standardsControlArnsHasBeenSet; }
    template<typename StandardsControlArnsT = Aws::Vector<Aws::String>>
    void SetStandardsControlArns(StandardsControlArnsT&& value) { m_standardsControlArnsHasBeenSet = true; m_standardsControlArns = std::forward<StandardsControlArnsT>(value); }
    template<typename StandardsControlArnsT = Aws::Vector<Aws::String>>
    StandardsControlAssociationDetail& WithStandardsControlArns(StandardsControlArnsT&& value) { SetStandardsControlArns(std::forward<StandardsControlArnsT>(value)); return *this;}
    template<typename StandardsControlArnsT = Aws::String>
    StandardsControlAssociationDetail& AddStandardsControlArns(StandardsControlArnsT&& value) { m_standardsControlArnsHasBeenSet = true; m_standardsControlArns.emplace_back(std::forward<StandardsControlArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::String m_securityControlArn;
    bool m_securityControlArnHasBeenSet = false;

    AssociationStatus m_associationStatus{AssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedRequirements;
    bool m_relatedRequirementsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedReason;
    bool m_updatedReasonHasBeenSet = false;

    Aws::String m_standardsControlTitle;
    bool m_standardsControlTitleHasBeenSet = false;

    Aws::String m_standardsControlDescription;
    bool m_standardsControlDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_standardsControlArns;
    bool m_standardsControlArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
