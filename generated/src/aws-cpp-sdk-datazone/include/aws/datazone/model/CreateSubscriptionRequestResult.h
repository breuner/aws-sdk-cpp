﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/SubscriptionRequestStatus.h>
#include <aws/datazone/model/FormOutput.h>
#include <aws/datazone/model/SubscribedListing.h>
#include <aws/datazone/model/SubscribedPrincipal.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class CreateSubscriptionRequestResult
  {
  public:
    AWS_DATAZONE_API CreateSubscriptionRequestResult() = default;
    AWS_DATAZONE_API CreateSubscriptionRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateSubscriptionRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A timestamp of when the subscription request is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateSubscriptionRequestResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the subscription request.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    CreateSubscriptionRequestResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decision comment of the subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const { return m_decisionComment; }
    template<typename DecisionCommentT = Aws::String>
    void SetDecisionComment(DecisionCommentT&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::forward<DecisionCommentT>(value); }
    template<typename DecisionCommentT = Aws::String>
    CreateSubscriptionRequestResult& WithDecisionComment(DecisionCommentT&& value) { SetDecisionComment(std::forward<DecisionCommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in whcih the subscription request is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateSubscriptionRequestResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the existing subscription.</p>
     */
    inline const Aws::String& GetExistingSubscriptionId() const { return m_existingSubscriptionId; }
    template<typename ExistingSubscriptionIdT = Aws::String>
    void SetExistingSubscriptionId(ExistingSubscriptionIdT&& value) { m_existingSubscriptionIdHasBeenSet = true; m_existingSubscriptionId = std::forward<ExistingSubscriptionIdT>(value); }
    template<typename ExistingSubscriptionIdT = Aws::String>
    CreateSubscriptionRequestResult& WithExistingSubscriptionId(ExistingSubscriptionIdT&& value) { SetExistingSubscriptionId(std::forward<ExistingSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateSubscriptionRequestResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata form included in the subscription request.</p>
     */
    inline const Aws::Vector<FormOutput>& GetMetadataForms() const { return m_metadataForms; }
    template<typename MetadataFormsT = Aws::Vector<FormOutput>>
    void SetMetadataForms(MetadataFormsT&& value) { m_metadataFormsHasBeenSet = true; m_metadataForms = std::forward<MetadataFormsT>(value); }
    template<typename MetadataFormsT = Aws::Vector<FormOutput>>
    CreateSubscriptionRequestResult& WithMetadataForms(MetadataFormsT&& value) { SetMetadataForms(std::forward<MetadataFormsT>(value)); return *this;}
    template<typename MetadataFormsT = FormOutput>
    CreateSubscriptionRequestResult& AddMetadataForms(MetadataFormsT&& value) { m_metadataFormsHasBeenSet = true; m_metadataForms.emplace_back(std::forward<MetadataFormsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const { return m_requestReason; }
    template<typename RequestReasonT = Aws::String>
    void SetRequestReason(RequestReasonT&& value) { m_requestReasonHasBeenSet = true; m_requestReason = std::forward<RequestReasonT>(value); }
    template<typename RequestReasonT = Aws::String>
    CreateSubscriptionRequestResult& WithRequestReason(RequestReasonT&& value) { SetRequestReason(std::forward<RequestReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the reviewer of the subscription request.</p>
     */
    inline const Aws::String& GetReviewerId() const { return m_reviewerId; }
    template<typename ReviewerIdT = Aws::String>
    void SetReviewerId(ReviewerIdT&& value) { m_reviewerIdHasBeenSet = true; m_reviewerId = std::forward<ReviewerIdT>(value); }
    template<typename ReviewerIdT = Aws::String>
    CreateSubscriptionRequestResult& WithReviewerId(ReviewerIdT&& value) { SetReviewerId(std::forward<ReviewerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the subscription request.</p>
     */
    inline SubscriptionRequestStatus GetStatus() const { return m_status; }
    inline void SetStatus(SubscriptionRequestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateSubscriptionRequestResult& WithStatus(SubscriptionRequestStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The published asset for which the subscription grant is to be created.</p>
     */
    inline const Aws::Vector<SubscribedListing>& GetSubscribedListings() const { return m_subscribedListings; }
    template<typename SubscribedListingsT = Aws::Vector<SubscribedListing>>
    void SetSubscribedListings(SubscribedListingsT&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = std::forward<SubscribedListingsT>(value); }
    template<typename SubscribedListingsT = Aws::Vector<SubscribedListing>>
    CreateSubscriptionRequestResult& WithSubscribedListings(SubscribedListingsT&& value) { SetSubscribedListings(std::forward<SubscribedListingsT>(value)); return *this;}
    template<typename SubscribedListingsT = SubscribedListing>
    CreateSubscriptionRequestResult& AddSubscribedListings(SubscribedListingsT&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.emplace_back(std::forward<SubscribedListingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subscribed principals of the subscription request.</p>
     */
    inline const Aws::Vector<SubscribedPrincipal>& GetSubscribedPrincipals() const { return m_subscribedPrincipals; }
    template<typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipal>>
    void SetSubscribedPrincipals(SubscribedPrincipalsT&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = std::forward<SubscribedPrincipalsT>(value); }
    template<typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipal>>
    CreateSubscriptionRequestResult& WithSubscribedPrincipals(SubscribedPrincipalsT&& value) { SetSubscribedPrincipals(std::forward<SubscribedPrincipalsT>(value)); return *this;}
    template<typename SubscribedPrincipalsT = SubscribedPrincipal>
    CreateSubscriptionRequestResult& AddSubscribedPrincipals(SubscribedPrincipalsT&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.emplace_back(std::forward<SubscribedPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription request was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CreateSubscriptionRequestResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the subscription request.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    CreateSubscriptionRequestResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSubscriptionRequestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_decisionComment;
    bool m_decisionCommentHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_existingSubscriptionId;
    bool m_existingSubscriptionIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<FormOutput> m_metadataForms;
    bool m_metadataFormsHasBeenSet = false;

    Aws::String m_requestReason;
    bool m_requestReasonHasBeenSet = false;

    Aws::String m_reviewerId;
    bool m_reviewerIdHasBeenSet = false;

    SubscriptionRequestStatus m_status{SubscriptionRequestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<SubscribedListing> m_subscribedListings;
    bool m_subscribedListingsHasBeenSet = false;

    Aws::Vector<SubscribedPrincipal> m_subscribedPrincipals;
    bool m_subscribedPrincipalsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
