﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehendmedical/model/EntityType.h>
#include <aws/comprehendmedical/model/EntitySubType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehendmedical/model/Trait.h>
#include <aws/comprehendmedical/model/Attribute.h>
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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p> Provides information about an extracted medical entity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/Entity">AWS
   * API Reference</a></p>
   */
  class Entity
  {
  public:
    AWS_COMPREHENDMEDICAL_API Entity();
    AWS_COMPREHENDMEDICAL_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The numeric identifier for the entity. This is a monotonically increasing id
     * unique within this response rather than a global unique identifier. </p>
     */
    inline int GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline Entity& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * begins. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline Entity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 0-based character offset in the input text that shows where the entity
     * ends. The offset returns the UTF-8 code point in the string. </p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline Entity& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detection.</p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline Entity& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The segment of input text extracted as this entity.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline Entity& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline Entity& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline Entity& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category of the entity.</p>
     */
    inline const EntityType& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const EntityType& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(EntityType&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline Entity& WithCategory(const EntityType& value) { SetCategory(value); return *this;}
    inline Entity& WithCategory(EntityType&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the specific type of entity with category of entities.</p>
     */
    inline const EntitySubType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EntitySubType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EntitySubType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Entity& WithType(const EntitySubType& value) { SetType(value); return *this;}
    inline Entity& WithType(EntitySubType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contextual information for the entity.</p>
     */
    inline const Aws::Vector<Trait>& GetTraits() const{ return m_traits; }
    inline bool TraitsHasBeenSet() const { return m_traitsHasBeenSet; }
    inline void SetTraits(const Aws::Vector<Trait>& value) { m_traitsHasBeenSet = true; m_traits = value; }
    inline void SetTraits(Aws::Vector<Trait>&& value) { m_traitsHasBeenSet = true; m_traits = std::move(value); }
    inline Entity& WithTraits(const Aws::Vector<Trait>& value) { SetTraits(value); return *this;}
    inline Entity& WithTraits(Aws::Vector<Trait>&& value) { SetTraits(std::move(value)); return *this;}
    inline Entity& AddTraits(const Trait& value) { m_traitsHasBeenSet = true; m_traits.push_back(value); return *this; }
    inline Entity& AddTraits(Trait&& value) { m_traitsHasBeenSet = true; m_traits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The extracted attributes that relate to this entity.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Entity& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline Entity& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Entity& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline Entity& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_id;
    bool m_idHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    EntityType m_category;
    bool m_categoryHasBeenSet = false;

    EntitySubType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Trait> m_traits;
    bool m_traitsHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
