﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetListing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetListing::AssetListing(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetListing& AssetListing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetRevision"))
  {
    m_assetRevision = jsonValue.GetString("assetRevision");
    m_assetRevisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetType"))
  {
    m_assetType = jsonValue.GetString("assetType");
    m_assetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("forms"))
  {
    m_forms = jsonValue.GetString("forms");
    m_formsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glossaryTerms"))
  {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
    {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsObject());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestTimeSeriesDataPointForms"))
  {
    Aws::Utils::Array<JsonView> latestTimeSeriesDataPointFormsJsonList = jsonValue.GetArray("latestTimeSeriesDataPointForms");
    for(unsigned latestTimeSeriesDataPointFormsIndex = 0; latestTimeSeriesDataPointFormsIndex < latestTimeSeriesDataPointFormsJsonList.GetLength(); ++latestTimeSeriesDataPointFormsIndex)
    {
      m_latestTimeSeriesDataPointForms.push_back(latestTimeSeriesDataPointFormsJsonList[latestTimeSeriesDataPointFormsIndex].AsObject());
    }
    m_latestTimeSeriesDataPointFormsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");
    m_owningProjectIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetListing::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_assetRevisionHasBeenSet)
  {
   payload.WithString("assetRevision", m_assetRevision);

  }

  if(m_assetTypeHasBeenSet)
  {
   payload.WithString("assetType", m_assetType);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_formsHasBeenSet)
  {
   payload.WithString("forms", m_forms);

  }

  if(m_glossaryTermsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
   for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
   {
     glossaryTermsJsonList[glossaryTermsIndex].AsObject(m_glossaryTerms[glossaryTermsIndex].Jsonize());
   }
   payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));

  }

  if(m_latestTimeSeriesDataPointFormsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> latestTimeSeriesDataPointFormsJsonList(m_latestTimeSeriesDataPointForms.size());
   for(unsigned latestTimeSeriesDataPointFormsIndex = 0; latestTimeSeriesDataPointFormsIndex < latestTimeSeriesDataPointFormsJsonList.GetLength(); ++latestTimeSeriesDataPointFormsIndex)
   {
     latestTimeSeriesDataPointFormsJsonList[latestTimeSeriesDataPointFormsIndex].AsObject(m_latestTimeSeriesDataPointForms[latestTimeSeriesDataPointFormsIndex].Jsonize());
   }
   payload.WithArray("latestTimeSeriesDataPointForms", std::move(latestTimeSeriesDataPointFormsJsonList));

  }

  if(m_owningProjectIdHasBeenSet)
  {
   payload.WithString("owningProjectId", m_owningProjectId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
