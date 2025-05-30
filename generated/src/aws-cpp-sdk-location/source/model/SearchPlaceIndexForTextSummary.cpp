﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchPlaceIndexForTextSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

SearchPlaceIndexForTextSummary::SearchPlaceIndexForTextSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchPlaceIndexForTextSummary& SearchPlaceIndexForTextSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BiasPosition"))
  {
    Aws::Utils::Array<JsonView> biasPositionJsonList = jsonValue.GetArray("BiasPosition");
    for(unsigned biasPositionIndex = 0; biasPositionIndex < biasPositionJsonList.GetLength(); ++biasPositionIndex)
    {
      m_biasPosition.push_back(biasPositionJsonList[biasPositionIndex].AsDouble());
    }
    m_biasPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterBBox"))
  {
    Aws::Utils::Array<JsonView> filterBBoxJsonList = jsonValue.GetArray("FilterBBox");
    for(unsigned filterBBoxIndex = 0; filterBBoxIndex < filterBBoxJsonList.GetLength(); ++filterBBoxIndex)
    {
      m_filterBBox.push_back(filterBBoxJsonList[filterBBoxIndex].AsDouble());
    }
    m_filterBBoxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterCountries"))
  {
    Aws::Utils::Array<JsonView> filterCountriesJsonList = jsonValue.GetArray("FilterCountries");
    for(unsigned filterCountriesIndex = 0; filterCountriesIndex < filterCountriesJsonList.GetLength(); ++filterCountriesIndex)
    {
      m_filterCountries.push_back(filterCountriesJsonList[filterCountriesIndex].AsString());
    }
    m_filterCountriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");
    m_maxResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultBBox"))
  {
    Aws::Utils::Array<JsonView> resultBBoxJsonList = jsonValue.GetArray("ResultBBox");
    for(unsigned resultBBoxIndex = 0; resultBBoxIndex < resultBBoxJsonList.GetLength(); ++resultBBoxIndex)
    {
      m_resultBBox.push_back(resultBBoxJsonList[resultBBoxIndex].AsDouble());
    }
    m_resultBBoxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetString("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");
    m_languageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterCategories"))
  {
    Aws::Utils::Array<JsonView> filterCategoriesJsonList = jsonValue.GetArray("FilterCategories");
    for(unsigned filterCategoriesIndex = 0; filterCategoriesIndex < filterCategoriesJsonList.GetLength(); ++filterCategoriesIndex)
    {
      m_filterCategories.push_back(filterCategoriesJsonList[filterCategoriesIndex].AsString());
    }
    m_filterCategoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchPlaceIndexForTextSummary::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_biasPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> biasPositionJsonList(m_biasPosition.size());
   for(unsigned biasPositionIndex = 0; biasPositionIndex < biasPositionJsonList.GetLength(); ++biasPositionIndex)
   {
     biasPositionJsonList[biasPositionIndex].AsDouble(m_biasPosition[biasPositionIndex]);
   }
   payload.WithArray("BiasPosition", std::move(biasPositionJsonList));

  }

  if(m_filterBBoxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterBBoxJsonList(m_filterBBox.size());
   for(unsigned filterBBoxIndex = 0; filterBBoxIndex < filterBBoxJsonList.GetLength(); ++filterBBoxIndex)
   {
     filterBBoxJsonList[filterBBoxIndex].AsDouble(m_filterBBox[filterBBoxIndex]);
   }
   payload.WithArray("FilterBBox", std::move(filterBBoxJsonList));

  }

  if(m_filterCountriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterCountriesJsonList(m_filterCountries.size());
   for(unsigned filterCountriesIndex = 0; filterCountriesIndex < filterCountriesJsonList.GetLength(); ++filterCountriesIndex)
   {
     filterCountriesJsonList[filterCountriesIndex].AsString(m_filterCountries[filterCountriesIndex]);
   }
   payload.WithArray("FilterCountries", std::move(filterCountriesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_resultBBoxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resultBBoxJsonList(m_resultBBox.size());
   for(unsigned resultBBoxIndex = 0; resultBBoxIndex < resultBBoxJsonList.GetLength(); ++resultBBoxIndex)
   {
     resultBBoxJsonList[resultBBoxIndex].AsDouble(m_resultBBox[resultBBoxIndex]);
   }
   payload.WithArray("ResultBBox", std::move(resultBBoxJsonList));

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", m_dataSource);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_filterCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterCategoriesJsonList(m_filterCategories.size());
   for(unsigned filterCategoriesIndex = 0; filterCategoriesIndex < filterCategoriesJsonList.GetLength(); ++filterCategoriesIndex)
   {
     filterCategoriesJsonList[filterCategoriesIndex].AsString(m_filterCategories[filterCategoriesIndex]);
   }
   payload.WithArray("FilterCategories", std::move(filterCategoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
