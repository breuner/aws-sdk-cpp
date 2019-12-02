﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API BatchAssociateApprovalRuleTemplateWithRepositoriesRequest : public CodeCommitRequest
  {
  public:
    BatchAssociateApprovalRuleTemplateWithRepositoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateApprovalRuleTemplateWithRepositories"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the template you want to associate with one or more
     * repositories.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}


    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const{ return m_repositoryNames; }

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline void SetRepositoryNames(const Aws::Vector<Aws::String>& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = value; }

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline void SetRepositoryNames(Aws::Vector<Aws::String>&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::move(value); }

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& WithRepositoryNames(const Aws::Vector<Aws::String>& value) { SetRepositoryNames(value); return *this;}

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& WithRepositoryNames(Aws::Vector<Aws::String>&& value) { SetRepositoryNames(std::move(value)); return *this;}

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& AddRepositoryNames(const Aws::String& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& AddRepositoryNames(Aws::String&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the repositories you want to associate with the template.</p>
     * <note> <p>The length constraint limit is for each string in the array. The array
     * itself can be empty.</p> </note>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesRequest& AddRepositoryNames(const char* value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }

  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet;

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws