﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class CopyDBClusterParameterGroupRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API CopyDBClusterParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBClusterParameterGroup"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/UserGuide/tagging.ARN.html#tagging.ARN.Constructing">
     * Constructing an Amazon Resource Name (ARN)</a>.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li> <p>If
     * the source DB cluster parameter group is in the same Amazon Region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different Amazon Region than the copy, specify
     * a valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSourceDBClusterParameterGroupIdentifier() const { return m_sourceDBClusterParameterGroupIdentifier; }
    inline bool SourceDBClusterParameterGroupIdentifierHasBeenSet() const { return m_sourceDBClusterParameterGroupIdentifierHasBeenSet; }
    template<typename SourceDBClusterParameterGroupIdentifierT = Aws::String>
    void SetSourceDBClusterParameterGroupIdentifier(SourceDBClusterParameterGroupIdentifierT&& value) { m_sourceDBClusterParameterGroupIdentifierHasBeenSet = true; m_sourceDBClusterParameterGroupIdentifier = std::forward<SourceDBClusterParameterGroupIdentifierT>(value); }
    template<typename SourceDBClusterParameterGroupIdentifierT = Aws::String>
    CopyDBClusterParameterGroupRequest& WithSourceDBClusterParameterGroupIdentifier(SourceDBClusterParameterGroupIdentifierT&& value) { SetSourceDBClusterParameterGroupIdentifier(std::forward<SourceDBClusterParameterGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterParameterGroupIdentifier() const { return m_targetDBClusterParameterGroupIdentifier; }
    inline bool TargetDBClusterParameterGroupIdentifierHasBeenSet() const { return m_targetDBClusterParameterGroupIdentifierHasBeenSet; }
    template<typename TargetDBClusterParameterGroupIdentifierT = Aws::String>
    void SetTargetDBClusterParameterGroupIdentifier(TargetDBClusterParameterGroupIdentifierT&& value) { m_targetDBClusterParameterGroupIdentifierHasBeenSet = true; m_targetDBClusterParameterGroupIdentifier = std::forward<TargetDBClusterParameterGroupIdentifierT>(value); }
    template<typename TargetDBClusterParameterGroupIdentifierT = Aws::String>
    CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupIdentifier(TargetDBClusterParameterGroupIdentifierT&& value) { SetTargetDBClusterParameterGroupIdentifier(std::forward<TargetDBClusterParameterGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline const Aws::String& GetTargetDBClusterParameterGroupDescription() const { return m_targetDBClusterParameterGroupDescription; }
    inline bool TargetDBClusterParameterGroupDescriptionHasBeenSet() const { return m_targetDBClusterParameterGroupDescriptionHasBeenSet; }
    template<typename TargetDBClusterParameterGroupDescriptionT = Aws::String>
    void SetTargetDBClusterParameterGroupDescription(TargetDBClusterParameterGroupDescriptionT&& value) { m_targetDBClusterParameterGroupDescriptionHasBeenSet = true; m_targetDBClusterParameterGroupDescription = std::forward<TargetDBClusterParameterGroupDescriptionT>(value); }
    template<typename TargetDBClusterParameterGroupDescriptionT = Aws::String>
    CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupDescription(TargetDBClusterParameterGroupDescriptionT&& value) { SetTargetDBClusterParameterGroupDescription(std::forward<TargetDBClusterParameterGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the copied DB cluster parameter group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CopyDBClusterParameterGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CopyDBClusterParameterGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceDBClusterParameterGroupIdentifier;
    bool m_sourceDBClusterParameterGroupIdentifierHasBeenSet = false;

    Aws::String m_targetDBClusterParameterGroupIdentifier;
    bool m_targetDBClusterParameterGroupIdentifierHasBeenSet = false;

    Aws::String m_targetDBClusterParameterGroupDescription;
    bool m_targetDBClusterParameterGroupDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
