﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/MissionProfileListItem.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfilesResponse">AWS
   * API Reference</a></p>
   */
  class ListMissionProfilesResult
  {
  public:
    AWS_GROUNDSTATION_API ListMissionProfilesResult();
    AWS_GROUNDSTATION_API ListMissionProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListMissionProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of mission profiles.</p>
     */
    inline const Aws::Vector<MissionProfileListItem>& GetMissionProfileList() const{ return m_missionProfileList; }
    inline void SetMissionProfileList(const Aws::Vector<MissionProfileListItem>& value) { m_missionProfileList = value; }
    inline void SetMissionProfileList(Aws::Vector<MissionProfileListItem>&& value) { m_missionProfileList = std::move(value); }
    inline ListMissionProfilesResult& WithMissionProfileList(const Aws::Vector<MissionProfileListItem>& value) { SetMissionProfileList(value); return *this;}
    inline ListMissionProfilesResult& WithMissionProfileList(Aws::Vector<MissionProfileListItem>&& value) { SetMissionProfileList(std::move(value)); return *this;}
    inline ListMissionProfilesResult& AddMissionProfileList(const MissionProfileListItem& value) { m_missionProfileList.push_back(value); return *this; }
    inline ListMissionProfilesResult& AddMissionProfileList(MissionProfileListItem&& value) { m_missionProfileList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token returned in the response of a previous
     * <code>ListMissionProfiles</code> call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMissionProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMissionProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMissionProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMissionProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMissionProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMissionProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MissionProfileListItem> m_missionProfileList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
