﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/CompleteSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CompleteSnapshotRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection CompleteSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_changedBlocksCountHasBeenSet)
  {
    ss << m_changedBlocksCount;
    headers.emplace("x-amz-changedblockscount",  ss.str());
    ss.str("");
  }

  if(m_checksumHasBeenSet)
  {
    ss << m_checksum;
    headers.emplace("x-amz-checksum",  ss.str());
    ss.str("");
  }

  if(m_checksumAlgorithmHasBeenSet && m_checksumAlgorithm != ChecksumAlgorithm::NOT_SET)
  {
    headers.emplace("x-amz-checksum-algorithm", ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(m_checksumAlgorithm));
  }

  if(m_checksumAggregationMethodHasBeenSet && m_checksumAggregationMethod != ChecksumAggregationMethod::NOT_SET)
  {
    headers.emplace("x-amz-checksum-aggregation-method", ChecksumAggregationMethodMapper::GetNameForChecksumAggregationMethod(m_checksumAggregationMethod));
  }

  return headers;

}




