﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StudioComponentState.h>
#include <aws/nimble/model/StudioComponentType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class ListStudioComponentsRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API ListStudioComponentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStudioComponents"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The max number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStudioComponentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListStudioComponentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStudioComponentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStudioComponentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the request to studio components that are in one of the given states.
     * </p>
     */
    inline const Aws::Vector<StudioComponentState>& GetStates() const{ return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    inline void SetStates(const Aws::Vector<StudioComponentState>& value) { m_statesHasBeenSet = true; m_states = value; }
    inline void SetStates(Aws::Vector<StudioComponentState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }
    inline ListStudioComponentsRequest& WithStates(const Aws::Vector<StudioComponentState>& value) { SetStates(value); return *this;}
    inline ListStudioComponentsRequest& WithStates(Aws::Vector<StudioComponentState>&& value) { SetStates(std::move(value)); return *this;}
    inline ListStudioComponentsRequest& AddStates(const StudioComponentState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    inline ListStudioComponentsRequest& AddStates(StudioComponentState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline ListStudioComponentsRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline ListStudioComponentsRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline ListStudioComponentsRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the request to studio components that are of one of the given
     * types.</p>
     */
    inline const Aws::Vector<StudioComponentType>& GetTypes() const{ return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    inline void SetTypes(const Aws::Vector<StudioComponentType>& value) { m_typesHasBeenSet = true; m_types = value; }
    inline void SetTypes(Aws::Vector<StudioComponentType>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }
    inline ListStudioComponentsRequest& WithTypes(const Aws::Vector<StudioComponentType>& value) { SetTypes(value); return *this;}
    inline ListStudioComponentsRequest& WithTypes(Aws::Vector<StudioComponentType>&& value) { SetTypes(std::move(value)); return *this;}
    inline ListStudioComponentsRequest& AddTypes(const StudioComponentType& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    inline ListStudioComponentsRequest& AddTypes(StudioComponentType&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<StudioComponentState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::Vector<StudioComponentType> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
