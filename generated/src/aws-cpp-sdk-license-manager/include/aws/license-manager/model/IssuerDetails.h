﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details associated with the issuer of a license.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/IssuerDetails">AWS
   * API Reference</a></p>
   */
  class IssuerDetails
  {
  public:
    AWS_LICENSEMANAGER_API IssuerDetails();
    AWS_LICENSEMANAGER_API IssuerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API IssuerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Issuer name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IssuerDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IssuerDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IssuerDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline const Aws::String& GetSignKey() const{ return m_signKey; }
    inline bool SignKeyHasBeenSet() const { return m_signKeyHasBeenSet; }
    inline void SetSignKey(const Aws::String& value) { m_signKeyHasBeenSet = true; m_signKey = value; }
    inline void SetSignKey(Aws::String&& value) { m_signKeyHasBeenSet = true; m_signKey = std::move(value); }
    inline void SetSignKey(const char* value) { m_signKeyHasBeenSet = true; m_signKey.assign(value); }
    inline IssuerDetails& WithSignKey(const Aws::String& value) { SetSignKey(value); return *this;}
    inline IssuerDetails& WithSignKey(Aws::String&& value) { SetSignKey(std::move(value)); return *this;}
    inline IssuerDetails& WithSignKey(const char* value) { SetSignKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Issuer key fingerprint.</p>
     */
    inline const Aws::String& GetKeyFingerprint() const{ return m_keyFingerprint; }
    inline bool KeyFingerprintHasBeenSet() const { return m_keyFingerprintHasBeenSet; }
    inline void SetKeyFingerprint(const Aws::String& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = value; }
    inline void SetKeyFingerprint(Aws::String&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::move(value); }
    inline void SetKeyFingerprint(const char* value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint.assign(value); }
    inline IssuerDetails& WithKeyFingerprint(const Aws::String& value) { SetKeyFingerprint(value); return *this;}
    inline IssuerDetails& WithKeyFingerprint(Aws::String&& value) { SetKeyFingerprint(std::move(value)); return *this;}
    inline IssuerDetails& WithKeyFingerprint(const char* value) { SetKeyFingerprint(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_signKey;
    bool m_signKeyHasBeenSet = false;

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
