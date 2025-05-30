﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DocumentAttributeValue.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>The target document attribute or metadata field you want to alter when
   * ingesting documents into Amazon Kendra.</p> <p>For example, you can delete
   * customer identification numbers associated with the documents, stored in the
   * document metadata field called 'Customer_ID'. You set the target key as
   * 'Customer_ID' and the deletion flag to <code>TRUE</code>. This removes all
   * customer ID values in the field 'Customer_ID'. This would scrub personally
   * identifiable information from each document's metadata.</p> <p>Amazon Kendra
   * cannot create a target field if it has not already been created as an index
   * field. After you create your index field, you can create a document metadata
   * field using <code>DocumentAttributeTarget</code>. Amazon Kendra then will map
   * your newly created metadata field to your index field.</p> <p>You can also use
   * this with <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_DocumentAttributeCondition.html">DocumentAttributeCondition</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentAttributeTarget">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeTarget
  {
  public:
    AWS_KENDRA_API DocumentAttributeTarget() = default;
    AWS_KENDRA_API DocumentAttributeTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentAttributeTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the target document attribute or metadata field.</p> <p>For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline const Aws::String& GetTargetDocumentAttributeKey() const { return m_targetDocumentAttributeKey; }
    inline bool TargetDocumentAttributeKeyHasBeenSet() const { return m_targetDocumentAttributeKeyHasBeenSet; }
    template<typename TargetDocumentAttributeKeyT = Aws::String>
    void SetTargetDocumentAttributeKey(TargetDocumentAttributeKeyT&& value) { m_targetDocumentAttributeKeyHasBeenSet = true; m_targetDocumentAttributeKey = std::forward<TargetDocumentAttributeKeyT>(value); }
    template<typename TargetDocumentAttributeKeyT = Aws::String>
    DocumentAttributeTarget& WithTargetDocumentAttributeKey(TargetDocumentAttributeKeyT&& value) { SetTargetDocumentAttributeKey(std::forward<TargetDocumentAttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>. To create a target value
     * (<code>TargetDocumentAttributeValue</code>), set this to <code>FALSE</code>.</p>
     */
    inline bool GetTargetDocumentAttributeValueDeletion() const { return m_targetDocumentAttributeValueDeletion; }
    inline bool TargetDocumentAttributeValueDeletionHasBeenSet() const { return m_targetDocumentAttributeValueDeletionHasBeenSet; }
    inline void SetTargetDocumentAttributeValueDeletion(bool value) { m_targetDocumentAttributeValueDeletionHasBeenSet = true; m_targetDocumentAttributeValueDeletion = value; }
    inline DocumentAttributeTarget& WithTargetDocumentAttributeValueDeletion(bool value) { SetTargetDocumentAttributeValueDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target value you want to create for the target attribute.</p> <p>For
     * example, 'Finance' could be the target value for the target attribute key
     * 'Department'.</p>
     */
    inline const DocumentAttributeValue& GetTargetDocumentAttributeValue() const { return m_targetDocumentAttributeValue; }
    inline bool TargetDocumentAttributeValueHasBeenSet() const { return m_targetDocumentAttributeValueHasBeenSet; }
    template<typename TargetDocumentAttributeValueT = DocumentAttributeValue>
    void SetTargetDocumentAttributeValue(TargetDocumentAttributeValueT&& value) { m_targetDocumentAttributeValueHasBeenSet = true; m_targetDocumentAttributeValue = std::forward<TargetDocumentAttributeValueT>(value); }
    template<typename TargetDocumentAttributeValueT = DocumentAttributeValue>
    DocumentAttributeTarget& WithTargetDocumentAttributeValue(TargetDocumentAttributeValueT&& value) { SetTargetDocumentAttributeValue(std::forward<TargetDocumentAttributeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetDocumentAttributeKey;
    bool m_targetDocumentAttributeKeyHasBeenSet = false;

    bool m_targetDocumentAttributeValueDeletion{false};
    bool m_targetDocumentAttributeValueDeletionHasBeenSet = false;

    DocumentAttributeValue m_targetDocumentAttributeValue;
    bool m_targetDocumentAttributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
