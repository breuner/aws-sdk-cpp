﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>An individual VPC security group and its status.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/SecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class SecurityGroupMembership
  {
  public:
    AWS_DAX_API SecurityGroupMembership();
    AWS_DAX_API SecurityGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API SecurityGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for this security group.</p>
     */
    inline const Aws::String& GetSecurityGroupIdentifier() const{ return m_securityGroupIdentifier; }
    inline bool SecurityGroupIdentifierHasBeenSet() const { return m_securityGroupIdentifierHasBeenSet; }
    inline void SetSecurityGroupIdentifier(const Aws::String& value) { m_securityGroupIdentifierHasBeenSet = true; m_securityGroupIdentifier = value; }
    inline void SetSecurityGroupIdentifier(Aws::String&& value) { m_securityGroupIdentifierHasBeenSet = true; m_securityGroupIdentifier = std::move(value); }
    inline void SetSecurityGroupIdentifier(const char* value) { m_securityGroupIdentifierHasBeenSet = true; m_securityGroupIdentifier.assign(value); }
    inline SecurityGroupMembership& WithSecurityGroupIdentifier(const Aws::String& value) { SetSecurityGroupIdentifier(value); return *this;}
    inline SecurityGroupMembership& WithSecurityGroupIdentifier(Aws::String&& value) { SetSecurityGroupIdentifier(std::move(value)); return *this;}
    inline SecurityGroupMembership& WithSecurityGroupIdentifier(const char* value) { SetSecurityGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupIdentifier;
    bool m_securityGroupIdentifierHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
