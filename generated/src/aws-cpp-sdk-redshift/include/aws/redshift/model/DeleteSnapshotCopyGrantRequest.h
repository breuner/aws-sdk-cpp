﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p>The result of the <code>DeleteSnapshotCopyGrant</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteSnapshotCopyGrantMessage">AWS
   * API Reference</a></p>
   */
  class DeleteSnapshotCopyGrantRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DeleteSnapshotCopyGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSnapshotCopyGrant"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the snapshot copy grant to delete.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const { return m_snapshotCopyGrantName; }
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }
    template<typename SnapshotCopyGrantNameT = Aws::String>
    void SetSnapshotCopyGrantName(SnapshotCopyGrantNameT&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::forward<SnapshotCopyGrantNameT>(value); }
    template<typename SnapshotCopyGrantNameT = Aws::String>
    DeleteSnapshotCopyGrantRequest& WithSnapshotCopyGrantName(SnapshotCopyGrantNameT&& value) { SetSnapshotCopyGrantName(std::forward<SnapshotCopyGrantNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
