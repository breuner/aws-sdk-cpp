﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/KmsKey.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfileResponse">AWS
   * API Reference</a></p>
   */
  class GetMissionProfileResult
  {
  public:
    AWS_GROUNDSTATION_API GetMissionProfileResult();
    AWS_GROUNDSTATION_API GetMissionProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetMissionProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline int GetContactPostPassDurationSeconds() const{ return m_contactPostPassDurationSeconds; }
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSeconds = value; }
    inline GetMissionProfileResult& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline int GetContactPrePassDurationSeconds() const{ return m_contactPrePassDurationSeconds; }
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSeconds = value; }
    inline GetMissionProfileResult& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a <i>from</i>
     * <code>Config</code> and a <i>to</i> <code>Config</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetDataflowEdges() const{ return m_dataflowEdges; }
    inline void SetDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_dataflowEdges = value; }
    inline void SetDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_dataflowEdges = std::move(value); }
    inline GetMissionProfileResult& WithDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetDataflowEdges(value); return *this;}
    inline GetMissionProfileResult& WithDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetDataflowEdges(std::move(value)); return *this;}
    inline GetMissionProfileResult& AddDataflowEdges(const Aws::Vector<Aws::String>& value) { m_dataflowEdges.push_back(value); return *this; }
    inline GetMissionProfileResult& AddDataflowEdges(Aws::Vector<Aws::String>&& value) { m_dataflowEdges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline int GetMinimumViableContactDurationSeconds() const{ return m_minimumViableContactDurationSeconds; }
    inline void SetMinimumViableContactDurationSeconds(int value) { m_minimumViableContactDurationSeconds = value; }
    inline GetMissionProfileResult& WithMinimumViableContactDurationSeconds(int value) { SetMinimumViableContactDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const{ return m_missionProfileArn; }
    inline void SetMissionProfileArn(const Aws::String& value) { m_missionProfileArn = value; }
    inline void SetMissionProfileArn(Aws::String&& value) { m_missionProfileArn = std::move(value); }
    inline void SetMissionProfileArn(const char* value) { m_missionProfileArn.assign(value); }
    inline GetMissionProfileResult& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}
    inline GetMissionProfileResult& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}
    inline GetMissionProfileResult& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileId = value; }
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileId = std::move(value); }
    inline void SetMissionProfileId(const char* value) { m_missionProfileId.assign(value); }
    inline GetMissionProfileResult& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}
    inline GetMissionProfileResult& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}
    inline GetMissionProfileResult& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a mission profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetMissionProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetMissionProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetMissionProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a mission profile.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline GetMissionProfileResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline GetMissionProfileResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline GetMissionProfileResult& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS key to use for encrypting streams.</p>
     */
    inline const KmsKey& GetStreamsKmsKey() const{ return m_streamsKmsKey; }
    inline void SetStreamsKmsKey(const KmsKey& value) { m_streamsKmsKey = value; }
    inline void SetStreamsKmsKey(KmsKey&& value) { m_streamsKmsKey = std::move(value); }
    inline GetMissionProfileResult& WithStreamsKmsKey(const KmsKey& value) { SetStreamsKmsKey(value); return *this;}
    inline GetMissionProfileResult& WithStreamsKmsKey(KmsKey&& value) { SetStreamsKmsKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Role to use for encrypting streams with KMS key.</p>
     */
    inline const Aws::String& GetStreamsKmsRole() const{ return m_streamsKmsRole; }
    inline void SetStreamsKmsRole(const Aws::String& value) { m_streamsKmsRole = value; }
    inline void SetStreamsKmsRole(Aws::String&& value) { m_streamsKmsRole = std::move(value); }
    inline void SetStreamsKmsRole(const char* value) { m_streamsKmsRole.assign(value); }
    inline GetMissionProfileResult& WithStreamsKmsRole(const Aws::String& value) { SetStreamsKmsRole(value); return *this;}
    inline GetMissionProfileResult& WithStreamsKmsRole(Aws::String&& value) { SetStreamsKmsRole(std::move(value)); return *this;}
    inline GetMissionProfileResult& WithStreamsKmsRole(const char* value) { SetStreamsKmsRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetMissionProfileResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetMissionProfileResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetMissionProfileResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetMissionProfileResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetMissionProfileResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetMissionProfileResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetMissionProfileResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetMissionProfileResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetMissionProfileResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline const Aws::String& GetTrackingConfigArn() const{ return m_trackingConfigArn; }
    inline void SetTrackingConfigArn(const Aws::String& value) { m_trackingConfigArn = value; }
    inline void SetTrackingConfigArn(Aws::String&& value) { m_trackingConfigArn = std::move(value); }
    inline void SetTrackingConfigArn(const char* value) { m_trackingConfigArn.assign(value); }
    inline GetMissionProfileResult& WithTrackingConfigArn(const Aws::String& value) { SetTrackingConfigArn(value); return *this;}
    inline GetMissionProfileResult& WithTrackingConfigArn(Aws::String&& value) { SetTrackingConfigArn(std::move(value)); return *this;}
    inline GetMissionProfileResult& WithTrackingConfigArn(const char* value) { SetTrackingConfigArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMissionProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMissionProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMissionProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_contactPostPassDurationSeconds;

    int m_contactPrePassDurationSeconds;

    Aws::Vector<Aws::Vector<Aws::String>> m_dataflowEdges;

    int m_minimumViableContactDurationSeconds;

    Aws::String m_missionProfileArn;

    Aws::String m_missionProfileId;

    Aws::String m_name;

    Aws::String m_region;

    KmsKey m_streamsKmsKey;

    Aws::String m_streamsKmsRole;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_trackingConfigArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
