﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateBackendAuthVerificationMessageConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

CreateBackendAuthVerificationMessageConfig::CreateBackendAuthVerificationMessageConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateBackendAuthVerificationMessageConfig& CreateBackendAuthVerificationMessageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryMethod"))
  {
    m_deliveryMethod = DeliveryMethodMapper::GetDeliveryMethodForName(jsonValue.GetString("deliveryMethod"));
    m_deliveryMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("emailSettings"))
  {
    m_emailSettings = jsonValue.GetObject("emailSettings");
    m_emailSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("smsSettings"))
  {
    m_smsSettings = jsonValue.GetObject("smsSettings");
    m_smsSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateBackendAuthVerificationMessageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryMethodHasBeenSet)
  {
   payload.WithString("deliveryMethod", DeliveryMethodMapper::GetNameForDeliveryMethod(m_deliveryMethod));
  }

  if(m_emailSettingsHasBeenSet)
  {
   payload.WithObject("emailSettings", m_emailSettings.Jsonize());

  }

  if(m_smsSettingsHasBeenSet)
  {
   payload.WithObject("smsSettings", m_smsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
