﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A resource that can be distributed to callers for executing Method resources
   * that require an API key. API keys can be mapped to any Stage on any RestApi,
   * which indicates that the callers with the API key can make requests to that
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiKey">AWS
   * API Reference</a></p>
   */
  class ApiKey
  {
  public:
    AWS_APIGATEWAY_API ApiKey() = default;
    AWS_APIGATEWAY_API ApiKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API ApiKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the API Key.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ApiKey& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the API Key.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ApiKey& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API Key.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ApiKey& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Marketplace customer identifier, when integrating with
     * the Amazon Web Services SaaS Marketplace.</p>
     */
    inline const Aws::String& GetCustomerId() const { return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    template<typename CustomerIdT = Aws::String>
    void SetCustomerId(CustomerIdT&& value) { m_customerIdHasBeenSet = true; m_customerId = std::forward<CustomerIdT>(value); }
    template<typename CustomerIdT = Aws::String>
    ApiKey& WithCustomerId(CustomerIdT&& value) { SetCustomerId(std::forward<CustomerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the API Key.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ApiKey& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ApiKey& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    ApiKey& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    ApiKey& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Stage resources that are associated with the ApiKey resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStageKeys() const { return m_stageKeys; }
    inline bool StageKeysHasBeenSet() const { return m_stageKeysHasBeenSet; }
    template<typename StageKeysT = Aws::Vector<Aws::String>>
    void SetStageKeys(StageKeysT&& value) { m_stageKeysHasBeenSet = true; m_stageKeys = std::forward<StageKeysT>(value); }
    template<typename StageKeysT = Aws::Vector<Aws::String>>
    ApiKey& WithStageKeys(StageKeysT&& value) { SetStageKeys(std::forward<StageKeysT>(value)); return *this;}
    template<typename StageKeysT = Aws::String>
    ApiKey& AddStageKeys(StageKeysT&& value) { m_stageKeysHasBeenSet = true; m_stageKeys.emplace_back(std::forward<StageKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ApiKey& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ApiKey& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ApiKey& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_stageKeys;
    bool m_stageKeysHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
