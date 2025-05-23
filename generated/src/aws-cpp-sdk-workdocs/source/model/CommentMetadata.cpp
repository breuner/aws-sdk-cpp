﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CommentMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

CommentMetadata::CommentMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

CommentMetadata& CommentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommentId"))
  {
    m_commentId = jsonValue.GetString("CommentId");
    m_commentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Contributor"))
  {
    m_contributor = jsonValue.GetObject("Contributor");
    m_contributorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommentStatus"))
  {
    m_commentStatus = CommentStatusTypeMapper::GetCommentStatusTypeForName(jsonValue.GetString("CommentStatus"));
    m_commentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecipientId"))
  {
    m_recipientId = jsonValue.GetString("RecipientId");
    m_recipientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributorId"))
  {
    m_contributorId = jsonValue.GetString("ContributorId");
    m_contributorIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CommentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_commentIdHasBeenSet)
  {
   payload.WithString("CommentId", m_commentId);

  }

  if(m_contributorHasBeenSet)
  {
   payload.WithObject("Contributor", m_contributor.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_commentStatusHasBeenSet)
  {
   payload.WithString("CommentStatus", CommentStatusTypeMapper::GetNameForCommentStatusType(m_commentStatus));
  }

  if(m_recipientIdHasBeenSet)
  {
   payload.WithString("RecipientId", m_recipientId);

  }

  if(m_contributorIdHasBeenSet)
  {
   payload.WithString("ContributorId", m_contributorId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
