﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/UnsuccessfulItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateFlowLogsResponse
  {
  public:
    AWS_EC2_API CreateFlowLogsResponse();
    AWS_EC2_API CreateFlowLogsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateFlowLogsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline CreateFlowLogsResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateFlowLogsResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateFlowLogsResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the flow logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlowLogIds() const{ return m_flowLogIds; }
    inline void SetFlowLogIds(const Aws::Vector<Aws::String>& value) { m_flowLogIds = value; }
    inline void SetFlowLogIds(Aws::Vector<Aws::String>&& value) { m_flowLogIds = std::move(value); }
    inline CreateFlowLogsResponse& WithFlowLogIds(const Aws::Vector<Aws::String>& value) { SetFlowLogIds(value); return *this;}
    inline CreateFlowLogsResponse& WithFlowLogIds(Aws::Vector<Aws::String>&& value) { SetFlowLogIds(std::move(value)); return *this;}
    inline CreateFlowLogsResponse& AddFlowLogIds(const Aws::String& value) { m_flowLogIds.push_back(value); return *this; }
    inline CreateFlowLogsResponse& AddFlowLogIds(Aws::String&& value) { m_flowLogIds.push_back(std::move(value)); return *this; }
    inline CreateFlowLogsResponse& AddFlowLogIds(const char* value) { m_flowLogIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the flow logs that could not be created successfully.</p>
     */
    inline const Aws::Vector<UnsuccessfulItem>& GetUnsuccessful() const{ return m_unsuccessful; }
    inline void SetUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { m_unsuccessful = value; }
    inline void SetUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { m_unsuccessful = std::move(value); }
    inline CreateFlowLogsResponse& WithUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { SetUnsuccessful(value); return *this;}
    inline CreateFlowLogsResponse& WithUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { SetUnsuccessful(std::move(value)); return *this;}
    inline CreateFlowLogsResponse& AddUnsuccessful(const UnsuccessfulItem& value) { m_unsuccessful.push_back(value); return *this; }
    inline CreateFlowLogsResponse& AddUnsuccessful(UnsuccessfulItem&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateFlowLogsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateFlowLogsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;

    Aws::Vector<Aws::String> m_flowLogIds;

    Aws::Vector<UnsuccessfulItem> m_unsuccessful;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
