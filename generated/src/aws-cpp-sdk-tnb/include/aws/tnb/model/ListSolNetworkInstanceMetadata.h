﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
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
namespace tnb
{
namespace Model
{

  /**
   * <p>Metadata details for a network instance.</p> <p>A network instance is a
   * single network created in Amazon Web Services TNB that can be deployed and on
   * which life-cycle operations (like terminate, update, and delete) can be
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkInstanceMetadata">AWS
   * API Reference</a></p>
   */
  class ListSolNetworkInstanceMetadata
  {
  public:
    AWS_TNB_API ListSolNetworkInstanceMetadata();
    AWS_TNB_API ListSolNetworkInstanceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkInstanceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListSolNetworkInstanceMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ListSolNetworkInstanceMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline ListSolNetworkInstanceMetadata& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline ListSolNetworkInstanceMetadata& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
