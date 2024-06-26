﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An IPv4 CIDR block association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class CidrBlockAssociation
  {
  public:
    AWS_SECURITYHUB_API CidrBlockAssociation();
    AWS_SECURITYHUB_API CidrBlockAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CidrBlockAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline CidrBlockAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline CidrBlockAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline CidrBlockAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }
    inline CidrBlockAssociation& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}
    inline CidrBlockAssociation& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}
    inline CidrBlockAssociation& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state of the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlockState() const{ return m_cidrBlockState; }
    inline bool CidrBlockStateHasBeenSet() const { return m_cidrBlockStateHasBeenSet; }
    inline void SetCidrBlockState(const Aws::String& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = value; }
    inline void SetCidrBlockState(Aws::String&& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = std::move(value); }
    inline void SetCidrBlockState(const char* value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState.assign(value); }
    inline CidrBlockAssociation& WithCidrBlockState(const Aws::String& value) { SetCidrBlockState(value); return *this;}
    inline CidrBlockAssociation& WithCidrBlockState(Aws::String&& value) { SetCidrBlockState(std::move(value)); return *this;}
    inline CidrBlockAssociation& WithCidrBlockState(const char* value) { SetCidrBlockState(value); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_cidrBlockState;
    bool m_cidrBlockStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
