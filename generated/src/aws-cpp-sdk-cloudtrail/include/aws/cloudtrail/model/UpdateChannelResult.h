﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Destination.h>
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
namespace CloudTrail
{
namespace Model
{
  class UpdateChannelResult
  {
  public:
    AWS_CLOUDTRAIL_API UpdateChannelResult();
    AWS_CLOUDTRAIL_API UpdateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API UpdateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel that was updated.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }
    inline UpdateChannelResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline UpdateChannelResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline UpdateChannelResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel that was updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateChannelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event source of the channel that was updated.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline void SetSource(const Aws::String& value) { m_source = value; }
    inline void SetSource(Aws::String&& value) { m_source = std::move(value); }
    inline void SetSource(const char* value) { m_source.assign(value); }
    inline UpdateChannelResult& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline UpdateChannelResult& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline UpdateChannelResult& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event data stores that log events arriving through the channel.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinations = value; }
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinations = std::move(value); }
    inline UpdateChannelResult& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}
    inline UpdateChannelResult& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline UpdateChannelResult& AddDestinations(const Destination& value) { m_destinations.push_back(value); return *this; }
    inline UpdateChannelResult& AddDestinations(Destination&& value) { m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;

    Aws::String m_name;

    Aws::String m_source;

    Aws::Vector<Destination> m_destinations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
