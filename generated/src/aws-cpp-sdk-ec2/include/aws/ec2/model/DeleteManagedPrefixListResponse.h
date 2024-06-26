﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ManagedPrefixList.h>
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
  class DeleteManagedPrefixListResponse
  {
  public:
    AWS_EC2_API DeleteManagedPrefixListResponse();
    AWS_EC2_API DeleteManagedPrefixListResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteManagedPrefixListResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the prefix list.</p>
     */
    inline const ManagedPrefixList& GetPrefixList() const{ return m_prefixList; }
    inline void SetPrefixList(const ManagedPrefixList& value) { m_prefixList = value; }
    inline void SetPrefixList(ManagedPrefixList&& value) { m_prefixList = std::move(value); }
    inline DeleteManagedPrefixListResponse& WithPrefixList(const ManagedPrefixList& value) { SetPrefixList(value); return *this;}
    inline DeleteManagedPrefixListResponse& WithPrefixList(ManagedPrefixList&& value) { SetPrefixList(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DeleteManagedPrefixListResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DeleteManagedPrefixListResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    ManagedPrefixList m_prefixList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
