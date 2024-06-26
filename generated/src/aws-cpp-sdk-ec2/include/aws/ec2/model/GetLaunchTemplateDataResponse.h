﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseLaunchTemplateData.h>
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
  class GetLaunchTemplateDataResponse
  {
  public:
    AWS_EC2_API GetLaunchTemplateDataResponse();
    AWS_EC2_API GetLaunchTemplateDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetLaunchTemplateDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The instance data.</p>
     */
    inline const ResponseLaunchTemplateData& GetLaunchTemplateData() const{ return m_launchTemplateData; }
    inline void SetLaunchTemplateData(const ResponseLaunchTemplateData& value) { m_launchTemplateData = value; }
    inline void SetLaunchTemplateData(ResponseLaunchTemplateData&& value) { m_launchTemplateData = std::move(value); }
    inline GetLaunchTemplateDataResponse& WithLaunchTemplateData(const ResponseLaunchTemplateData& value) { SetLaunchTemplateData(value); return *this;}
    inline GetLaunchTemplateDataResponse& WithLaunchTemplateData(ResponseLaunchTemplateData&& value) { SetLaunchTemplateData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetLaunchTemplateDataResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetLaunchTemplateDataResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    ResponseLaunchTemplateData m_launchTemplateData;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
