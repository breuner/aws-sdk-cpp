﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RebootDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class RebootDBInstanceRequest : public RDSRequest
  {
  public:
    AWS_RDS_API RebootDBInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootDBInstance"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    RebootDBInstanceRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the reboot is conducted through a Multi-AZ failover.</p>
     * <p>Constraint: You can't enable force failover if the instance isn't configured
     * for Multi-AZ.</p>
     */
    inline bool GetForceFailover() const { return m_forceFailover; }
    inline bool ForceFailoverHasBeenSet() const { return m_forceFailoverHasBeenSet; }
    inline void SetForceFailover(bool value) { m_forceFailoverHasBeenSet = true; m_forceFailover = value; }
    inline RebootDBInstanceRequest& WithForceFailover(bool value) { SetForceFailover(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    bool m_forceFailover{false};
    bool m_forceFailoverHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
