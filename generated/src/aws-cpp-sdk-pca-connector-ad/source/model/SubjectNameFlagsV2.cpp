﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/SubjectNameFlagsV2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

SubjectNameFlagsV2::SubjectNameFlagsV2(JsonView jsonValue)
{
  *this = jsonValue;
}

SubjectNameFlagsV2& SubjectNameFlagsV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequireCommonName"))
  {
    m_requireCommonName = jsonValue.GetBool("RequireCommonName");
    m_requireCommonNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequireDirectoryPath"))
  {
    m_requireDirectoryPath = jsonValue.GetBool("RequireDirectoryPath");
    m_requireDirectoryPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequireDnsAsCn"))
  {
    m_requireDnsAsCn = jsonValue.GetBool("RequireDnsAsCn");
    m_requireDnsAsCnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequireEmail"))
  {
    m_requireEmail = jsonValue.GetBool("RequireEmail");
    m_requireEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SanRequireDirectoryGuid"))
  {
    m_sanRequireDirectoryGuid = jsonValue.GetBool("SanRequireDirectoryGuid");
    m_sanRequireDirectoryGuidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SanRequireDns"))
  {
    m_sanRequireDns = jsonValue.GetBool("SanRequireDns");
    m_sanRequireDnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SanRequireDomainDns"))
  {
    m_sanRequireDomainDns = jsonValue.GetBool("SanRequireDomainDns");
    m_sanRequireDomainDnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SanRequireEmail"))
  {
    m_sanRequireEmail = jsonValue.GetBool("SanRequireEmail");
    m_sanRequireEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SanRequireSpn"))
  {
    m_sanRequireSpn = jsonValue.GetBool("SanRequireSpn");
    m_sanRequireSpnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SanRequireUpn"))
  {
    m_sanRequireUpn = jsonValue.GetBool("SanRequireUpn");
    m_sanRequireUpnHasBeenSet = true;
  }
  return *this;
}

JsonValue SubjectNameFlagsV2::Jsonize() const
{
  JsonValue payload;

  if(m_requireCommonNameHasBeenSet)
  {
   payload.WithBool("RequireCommonName", m_requireCommonName);

  }

  if(m_requireDirectoryPathHasBeenSet)
  {
   payload.WithBool("RequireDirectoryPath", m_requireDirectoryPath);

  }

  if(m_requireDnsAsCnHasBeenSet)
  {
   payload.WithBool("RequireDnsAsCn", m_requireDnsAsCn);

  }

  if(m_requireEmailHasBeenSet)
  {
   payload.WithBool("RequireEmail", m_requireEmail);

  }

  if(m_sanRequireDirectoryGuidHasBeenSet)
  {
   payload.WithBool("SanRequireDirectoryGuid", m_sanRequireDirectoryGuid);

  }

  if(m_sanRequireDnsHasBeenSet)
  {
   payload.WithBool("SanRequireDns", m_sanRequireDns);

  }

  if(m_sanRequireDomainDnsHasBeenSet)
  {
   payload.WithBool("SanRequireDomainDns", m_sanRequireDomainDns);

  }

  if(m_sanRequireEmailHasBeenSet)
  {
   payload.WithBool("SanRequireEmail", m_sanRequireEmail);

  }

  if(m_sanRequireSpnHasBeenSet)
  {
   payload.WithBool("SanRequireSpn", m_sanRequireSpn);

  }

  if(m_sanRequireUpnHasBeenSet)
  {
   payload.WithBool("SanRequireUpn", m_sanRequireUpn);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
