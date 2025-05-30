﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/MatchFieldType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Specifies where in a web
   * request to look for <code>TargetString</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/FieldToMatch">AWS
   * API Reference</a></p>
   */
  class FieldToMatch
  {
  public:
    AWS_WAF_API FieldToMatch() = default;
    AWS_WAF_API FieldToMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API FieldToMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The part of the web request that you want AWS WAF to search for a specified
     * string. Parts of a request that you can search include the following:</p> <ul>
     * <li> <p> <code>HEADER</code>: A specified request header, for example, the value
     * of the <code>User-Agent</code> or <code>Referer</code> header. If you choose
     * <code>HEADER</code> for the type, specify the name of the header in
     * <code>Data</code>.</p> </li> <li> <p> <code>METHOD</code>: The HTTP method,
     * which indicated the type of operation that the request is asking the origin to
     * perform. Amazon CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: A query string, which is the part of a URL that
     * appears after a <code>?</code> character, if any.</p> </li> <li> <p>
     * <code>URI</code>: The part of a web request that identifies a resource, for
     * example, <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p>
     * <code>BODY</code>: The part of a request that contains any additional data that
     * you want to send to your web server as the HTTP request body, such as data from
     * a form. The request body immediately follows the request headers. Note that only
     * the first <code>8192</code> bytes of the request body are forwarded to AWS WAF
     * for inspection. To allow or block requests based on the length of the body, you
     * can create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> <li> <p>
     * <code>SINGLE_QUERY_ARG</code>: The parameter in the query string that you will
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The maximum length for
     * <code>SINGLE_QUERY_ARG</code> is 30 characters.</p> </li> <li> <p>
     * <code>ALL_QUERY_ARGS</code>: Similar to <code>SINGLE_QUERY_ARG</code>, but
     * rather than inspecting a single parameter, AWS WAF will inspect all parameters
     * within the query for the value or regex pattern that you specify in
     * <code>TargetString</code>.</p> </li> </ul>
     */
    inline MatchFieldType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MatchFieldType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FieldToMatch& WithType(MatchFieldType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. The name of the header is not case sensitive.</p>
     * <p>When the value of <code>Type</code> is <code>SINGLE_QUERY_ARG</code>, enter
     * the name of the parameter that you want AWS WAF to search, for example,
     * <code>UserName</code> or <code>SalesRegion</code>. The parameter name is not
     * case sensitive.</p> <p>If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p>
     */
    inline const Aws::String& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::String>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::String>
    FieldToMatch& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    MatchFieldType m_type{MatchFieldType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
