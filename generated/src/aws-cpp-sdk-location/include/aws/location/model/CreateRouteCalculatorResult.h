﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace LocationService
{
namespace Model
{
  class CreateRouteCalculatorResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateRouteCalculatorResult();
    AWS_LOCATIONSERVICE_API CreateRouteCalculatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateRouteCalculatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the route calculator resource. </p> <ul> <li> <p>For example,
     * <code>ExampleRouteCalculator</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorName() const{ return m_calculatorName; }
    inline void SetCalculatorName(const Aws::String& value) { m_calculatorName = value; }
    inline void SetCalculatorName(Aws::String&& value) { m_calculatorName = std::move(value); }
    inline void SetCalculatorName(const char* value) { m_calculatorName.assign(value); }
    inline CreateRouteCalculatorResult& WithCalculatorName(const Aws::String& value) { SetCalculatorName(value); return *this;}
    inline CreateRouteCalculatorResult& WithCalculatorName(Aws::String&& value) { SetCalculatorName(std::move(value)); return *this;}
    inline CreateRouteCalculatorResult& WithCalculatorName(const char* value) { SetCalculatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the route calculator resource. Use the ARN
     * when you specify a resource across all Amazon Web Services.</p> <ul> <li>
     * <p>Format example:
     * <code>arn:aws:geo:region:account-id:route-calculator/ExampleCalculator</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetCalculatorArn() const{ return m_calculatorArn; }
    inline void SetCalculatorArn(const Aws::String& value) { m_calculatorArn = value; }
    inline void SetCalculatorArn(Aws::String&& value) { m_calculatorArn = std::move(value); }
    inline void SetCalculatorArn(const char* value) { m_calculatorArn.assign(value); }
    inline CreateRouteCalculatorResult& WithCalculatorArn(const Aws::String& value) { SetCalculatorArn(value); return *this;}
    inline CreateRouteCalculatorResult& WithCalculatorArn(Aws::String&& value) { SetCalculatorArn(std::move(value)); return *this;}
    inline CreateRouteCalculatorResult& WithCalculatorArn(const char* value) { SetCalculatorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the route calculator resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p> <ul> <li> <p>For example,
     * <code>2020–07-2T12:15:20.000Z+01:00</code> </p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline CreateRouteCalculatorResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CreateRouteCalculatorResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRouteCalculatorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRouteCalculatorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRouteCalculatorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_calculatorName;

    Aws::String m_calculatorArn;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
