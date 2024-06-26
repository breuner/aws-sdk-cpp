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
   * <p>Returns information about a folder in a repository.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Folder">AWS
   * API Reference</a></p>
   */
  class Folder
  {
  public:
    AWS_CODECOMMIT_API Folder();
    AWS_CODECOMMIT_API Folder(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Folder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }
    inline bool TreeIdHasBeenSet() const { return m_treeIdHasBeenSet; }
    inline void SetTreeId(const Aws::String& value) { m_treeIdHasBeenSet = true; m_treeId = value; }
    inline void SetTreeId(Aws::String&& value) { m_treeIdHasBeenSet = true; m_treeId = std::move(value); }
    inline void SetTreeId(const char* value) { m_treeIdHasBeenSet = true; m_treeId.assign(value); }
    inline Folder& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}
    inline Folder& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}
    inline Folder& WithTreeId(const char* value) { SetTreeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path of the folder in the repository.</p>
     */
    inline const Aws::String& GetAbsolutePath() const{ return m_absolutePath; }
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }
    inline void SetAbsolutePath(const Aws::String& value) { m_absolutePathHasBeenSet = true; m_absolutePath = value; }
    inline void SetAbsolutePath(Aws::String&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::move(value); }
    inline void SetAbsolutePath(const char* value) { m_absolutePathHasBeenSet = true; m_absolutePath.assign(value); }
    inline Folder& WithAbsolutePath(const Aws::String& value) { SetAbsolutePath(value); return *this;}
    inline Folder& WithAbsolutePath(Aws::String&& value) { SetAbsolutePath(std::move(value)); return *this;}
    inline Folder& WithAbsolutePath(const char* value) { SetAbsolutePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }
    inline Folder& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}
    inline Folder& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}
    inline Folder& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}
    ///@}
  private:

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet = false;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
