﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/NetworkFabricType.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>The summary information for environments as a response to
   * <code>ListEnvironments</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/EnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentSummary
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentSummary() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EnvironmentSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the environment is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    EnvironmentSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the environment. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EnvironmentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    EnvironmentSummary& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any error associated with the environment resource. </p>
     */
    inline const ErrorResponse& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorResponse>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorResponse>
    EnvironmentSummary& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the environment was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    EnvironmentSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EnvironmentSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network fabric type of the environment. </p>
     */
    inline NetworkFabricType GetNetworkFabricType() const { return m_networkFabricType; }
    inline bool NetworkFabricTypeHasBeenSet() const { return m_networkFabricTypeHasBeenSet; }
    inline void SetNetworkFabricType(NetworkFabricType value) { m_networkFabricTypeHasBeenSet = true; m_networkFabricType = value; }
    inline EnvironmentSummary& WithNetworkFabricType(NetworkFabricType value) { SetNetworkFabricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the environment owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    EnvironmentSummary& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the environment. </p>
     */
    inline EnvironmentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(EnvironmentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline EnvironmentSummary& WithState(EnvironmentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the environment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EnvironmentSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    EnvironmentSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the Transit Gateway set up by the environment. </p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    EnvironmentSummary& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    ErrorResponse m_error;
    bool m_errorHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NetworkFabricType m_networkFabricType{NetworkFabricType::NOT_SET};
    bool m_networkFabricTypeHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    EnvironmentState m_state{EnvironmentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
