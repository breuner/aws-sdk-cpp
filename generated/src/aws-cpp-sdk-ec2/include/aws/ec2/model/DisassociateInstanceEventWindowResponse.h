﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceEventWindow.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class DisassociateInstanceEventWindowResponse
  {
  public:
    AWS_EC2_API DisassociateInstanceEventWindowResponse();
    AWS_EC2_API DisassociateInstanceEventWindowResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateInstanceEventWindowResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the event window.</p>
     */
    inline const InstanceEventWindow& GetInstanceEventWindow() const{ return m_instanceEventWindow; }
    inline void SetInstanceEventWindow(const InstanceEventWindow& value) { m_instanceEventWindow = value; }
    inline void SetInstanceEventWindow(InstanceEventWindow&& value) { m_instanceEventWindow = std::move(value); }
    inline DisassociateInstanceEventWindowResponse& WithInstanceEventWindow(const InstanceEventWindow& value) { SetInstanceEventWindow(value); return *this;}
    inline DisassociateInstanceEventWindowResponse& WithInstanceEventWindow(InstanceEventWindow&& value) { SetInstanceEventWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DisassociateInstanceEventWindowResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DisassociateInstanceEventWindowResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    InstanceEventWindow m_instanceEventWindow;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
