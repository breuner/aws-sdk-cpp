﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a submodule reference in a repository
   * folder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/SubModule">AWS
   * API Reference</a></p>
   */
  class SubModule
  {
  public:
    AWS_CODECOMMIT_API SubModule();
    AWS_CODECOMMIT_API SubModule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API SubModule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }
    inline SubModule& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline SubModule& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline SubModule& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline const Aws::String& GetAbsolutePath() const{ return m_absolutePath; }
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }
    inline void SetAbsolutePath(const Aws::String& value) { m_absolutePathHasBeenSet = true; m_absolutePath = value; }
    inline void SetAbsolutePath(Aws::String&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::move(value); }
    inline void SetAbsolutePath(const char* value) { m_absolutePathHasBeenSet = true; m_absolutePath.assign(value); }
    inline SubModule& WithAbsolutePath(const Aws::String& value) { SetAbsolutePath(value); return *this;}
    inline SubModule& WithAbsolutePath(Aws::String&& value) { SetAbsolutePath(std::move(value)); return *this;}
    inline SubModule& WithAbsolutePath(const char* value) { SetAbsolutePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }
    inline SubModule& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}
    inline SubModule& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}
    inline SubModule& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}
    ///@}
  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
