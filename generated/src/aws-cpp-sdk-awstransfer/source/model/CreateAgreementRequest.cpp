﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CreateAgreementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAgreementRequest::CreateAgreementRequest() : 
    m_descriptionHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_localProfileIdHasBeenSet(false),
    m_partnerProfileIdHasBeenSet(false),
    m_baseDirectoryHasBeenSet(false),
    m_accessRoleHasBeenSet(false),
    m_status(AgreementStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_preserveFilename(PreserveFilenameType::NOT_SET),
    m_preserveFilenameHasBeenSet(false),
    m_enforceMessageSigning(EnforceMessageSigningType::NOT_SET),
    m_enforceMessageSigningHasBeenSet(false),
    m_customDirectoriesHasBeenSet(false)
{
}

Aws::String CreateAgreementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_localProfileIdHasBeenSet)
  {
   payload.WithString("LocalProfileId", m_localProfileId);

  }

  if(m_partnerProfileIdHasBeenSet)
  {
   payload.WithString("PartnerProfileId", m_partnerProfileId);

  }

  if(m_baseDirectoryHasBeenSet)
  {
   payload.WithString("BaseDirectory", m_baseDirectory);

  }

  if(m_accessRoleHasBeenSet)
  {
   payload.WithString("AccessRole", m_accessRole);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AgreementStatusTypeMapper::GetNameForAgreementStatusType(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_preserveFilenameHasBeenSet)
  {
   payload.WithString("PreserveFilename", PreserveFilenameTypeMapper::GetNameForPreserveFilenameType(m_preserveFilename));
  }

  if(m_enforceMessageSigningHasBeenSet)
  {
   payload.WithString("EnforceMessageSigning", EnforceMessageSigningTypeMapper::GetNameForEnforceMessageSigningType(m_enforceMessageSigning));
  }

  if(m_customDirectoriesHasBeenSet)
  {
   payload.WithObject("CustomDirectories", m_customDirectories.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAgreementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.CreateAgreement"));
  return headers;

}




