﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>ApplyPendingMaintenanceAction</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ApplyPendingMaintenanceActionMessage">AWS
   * API Reference</a></p>
   */
  class ApplyPendingMaintenanceActionRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API ApplyPendingMaintenanceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplyPendingMaintenanceAction"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline const Aws::String& GetApplyAction() const{ return m_applyAction; }
    inline bool ApplyActionHasBeenSet() const { return m_applyActionHasBeenSet; }
    inline void SetApplyAction(const Aws::String& value) { m_applyActionHasBeenSet = true; m_applyAction = value; }
    inline void SetApplyAction(Aws::String&& value) { m_applyActionHasBeenSet = true; m_applyAction = std::move(value); }
    inline void SetApplyAction(const char* value) { m_applyActionHasBeenSet = true; m_applyAction.assign(value); }
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const Aws::String& value) { SetApplyAction(value); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(Aws::String&& value) { SetApplyAction(std::move(value)); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithApplyAction(const char* value) { SetApplyAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the type of opt-in request or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource. </p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline const Aws::String& GetOptInType() const{ return m_optInType; }
    inline bool OptInTypeHasBeenSet() const { return m_optInTypeHasBeenSet; }
    inline void SetOptInType(const Aws::String& value) { m_optInTypeHasBeenSet = true; m_optInType = value; }
    inline void SetOptInType(Aws::String&& value) { m_optInTypeHasBeenSet = true; m_optInType = std::move(value); }
    inline void SetOptInType(const char* value) { m_optInTypeHasBeenSet = true; m_optInType.assign(value); }
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(const Aws::String& value) { SetOptInType(value); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(Aws::String&& value) { SetOptInType(std::move(value)); return *this;}
    inline ApplyPendingMaintenanceActionRequest& WithOptInType(const char* value) { SetOptInType(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_applyAction;
    bool m_applyActionHasBeenSet = false;

    Aws::String m_optInType;
    bool m_optInTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
