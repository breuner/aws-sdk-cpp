﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediapackage-vod/model/EgressEndpoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaPackageVod
{
namespace Model
{
  class DescribeAssetResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API DescribeAssetResult();
    AWS_MEDIAPACKAGEVOD_API DescribeAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API DescribeAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the Asset.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeAssetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeAssetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeAssetResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The time the Asset was initially submitted for Ingest.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }
    inline DescribeAssetResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline DescribeAssetResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline DescribeAssetResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * The list of egress endpoints available for the Asset.
     */
    inline const Aws::Vector<EgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }
    inline void SetEgressEndpoints(const Aws::Vector<EgressEndpoint>& value) { m_egressEndpoints = value; }
    inline void SetEgressEndpoints(Aws::Vector<EgressEndpoint>&& value) { m_egressEndpoints = std::move(value); }
    inline DescribeAssetResult& WithEgressEndpoints(const Aws::Vector<EgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}
    inline DescribeAssetResult& WithEgressEndpoints(Aws::Vector<EgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}
    inline DescribeAssetResult& AddEgressEndpoints(const EgressEndpoint& value) { m_egressEndpoints.push_back(value); return *this; }
    inline DescribeAssetResult& AddEgressEndpoints(EgressEndpoint&& value) { m_egressEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The unique identifier for the Asset.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribeAssetResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeAssetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeAssetResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupId = value; }
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupId = std::move(value); }
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupId.assign(value); }
    inline DescribeAssetResult& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}
    inline DescribeAssetResult& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}
    inline DescribeAssetResult& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline DescribeAssetResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline DescribeAssetResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline DescribeAssetResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * ARN of the source object in S3.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline DescribeAssetResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline DescribeAssetResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline DescribeAssetResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline const Aws::String& GetSourceRoleArn() const{ return m_sourceRoleArn; }
    inline void SetSourceRoleArn(const Aws::String& value) { m_sourceRoleArn = value; }
    inline void SetSourceRoleArn(Aws::String&& value) { m_sourceRoleArn = std::move(value); }
    inline void SetSourceRoleArn(const char* value) { m_sourceRoleArn.assign(value); }
    inline DescribeAssetResult& WithSourceRoleArn(const Aws::String& value) { SetSourceRoleArn(value); return *this;}
    inline DescribeAssetResult& WithSourceRoleArn(Aws::String&& value) { SetSourceRoleArn(std::move(value)); return *this;}
    inline DescribeAssetResult& WithSourceRoleArn(const char* value) { SetSourceRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeAssetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeAssetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeAssetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeAssetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeAssetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeAssetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAssetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeAssetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeAssetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAssetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAssetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAssetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_createdAt;

    Aws::Vector<EgressEndpoint> m_egressEndpoints;

    Aws::String m_id;

    Aws::String m_packagingGroupId;

    Aws::String m_resourceId;

    Aws::String m_sourceArn;

    Aws::String m_sourceRoleArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
