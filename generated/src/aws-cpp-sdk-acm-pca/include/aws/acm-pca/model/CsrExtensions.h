﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/KeyUsage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/AccessDescription.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Describes the certificate extensions to be added to the certificate signing
   * request (CSR).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CsrExtensions">AWS
   * API Reference</a></p>
   */
  class CsrExtensions
  {
  public:
    AWS_ACMPCA_API CsrExtensions() = default;
    AWS_ACMPCA_API CsrExtensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CsrExtensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the purpose of the certificate and of the key contained in the
     * certificate.</p>
     */
    inline const KeyUsage& GetKeyUsage() const { return m_keyUsage; }
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
    template<typename KeyUsageT = KeyUsage>
    void SetKeyUsage(KeyUsageT&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::forward<KeyUsageT>(value); }
    template<typename KeyUsageT = KeyUsage>
    CsrExtensions& WithKeyUsage(KeyUsageT&& value) { SetKeyUsage(std::forward<KeyUsageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For CA certificates, provides a path to additional information pertaining to
     * the CA, such as revocation and policy. For more information, see <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.2.2">Subject
     * Information Access</a> in RFC 5280.</p>
     */
    inline const Aws::Vector<AccessDescription>& GetSubjectInformationAccess() const { return m_subjectInformationAccess; }
    inline bool SubjectInformationAccessHasBeenSet() const { return m_subjectInformationAccessHasBeenSet; }
    template<typename SubjectInformationAccessT = Aws::Vector<AccessDescription>>
    void SetSubjectInformationAccess(SubjectInformationAccessT&& value) { m_subjectInformationAccessHasBeenSet = true; m_subjectInformationAccess = std::forward<SubjectInformationAccessT>(value); }
    template<typename SubjectInformationAccessT = Aws::Vector<AccessDescription>>
    CsrExtensions& WithSubjectInformationAccess(SubjectInformationAccessT&& value) { SetSubjectInformationAccess(std::forward<SubjectInformationAccessT>(value)); return *this;}
    template<typename SubjectInformationAccessT = AccessDescription>
    CsrExtensions& AddSubjectInformationAccess(SubjectInformationAccessT&& value) { m_subjectInformationAccessHasBeenSet = true; m_subjectInformationAccess.emplace_back(std::forward<SubjectInformationAccessT>(value)); return *this; }
    ///@}
  private:

    KeyUsage m_keyUsage;
    bool m_keyUsageHasBeenSet = false;

    Aws::Vector<AccessDescription> m_subjectInformationAccess;
    bool m_subjectInformationAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
