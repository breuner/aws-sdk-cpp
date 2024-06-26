﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/OptionGroupOption.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroupOptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeOptionGroupOptionsResult
  {
  public:
    AWS_RDS_API DescribeOptionGroupOptionsResult();
    AWS_RDS_API DescribeOptionGroupOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeOptionGroupOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Vector<OptionGroupOption>& GetOptionGroupOptions() const{ return m_optionGroupOptions; }
    inline void SetOptionGroupOptions(const Aws::Vector<OptionGroupOption>& value) { m_optionGroupOptions = value; }
    inline void SetOptionGroupOptions(Aws::Vector<OptionGroupOption>&& value) { m_optionGroupOptions = std::move(value); }
    inline DescribeOptionGroupOptionsResult& WithOptionGroupOptions(const Aws::Vector<OptionGroupOption>& value) { SetOptionGroupOptions(value); return *this;}
    inline DescribeOptionGroupOptionsResult& WithOptionGroupOptions(Aws::Vector<OptionGroupOption>&& value) { SetOptionGroupOptions(std::move(value)); return *this;}
    inline DescribeOptionGroupOptionsResult& AddOptionGroupOptions(const OptionGroupOption& value) { m_optionGroupOptions.push_back(value); return *this; }
    inline DescribeOptionGroupOptionsResult& AddOptionGroupOptions(OptionGroupOption&& value) { m_optionGroupOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeOptionGroupOptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeOptionGroupOptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeOptionGroupOptionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeOptionGroupOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeOptionGroupOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OptionGroupOption> m_optionGroupOptions;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
