﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/CancelStepsInfo.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p> The output for the <a>CancelSteps</a> operation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelStepsOutput">AWS
   * API Reference</a></p>
   */
  class CancelStepsResult
  {
  public:
    AWS_EMR_API CancelStepsResult();
    AWS_EMR_API CancelStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API CancelStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline const Aws::Vector<CancelStepsInfo>& GetCancelStepsInfoList() const{ return m_cancelStepsInfoList; }
    inline void SetCancelStepsInfoList(const Aws::Vector<CancelStepsInfo>& value) { m_cancelStepsInfoList = value; }
    inline void SetCancelStepsInfoList(Aws::Vector<CancelStepsInfo>&& value) { m_cancelStepsInfoList = std::move(value); }
    inline CancelStepsResult& WithCancelStepsInfoList(const Aws::Vector<CancelStepsInfo>& value) { SetCancelStepsInfoList(value); return *this;}
    inline CancelStepsResult& WithCancelStepsInfoList(Aws::Vector<CancelStepsInfo>&& value) { SetCancelStepsInfoList(std::move(value)); return *this;}
    inline CancelStepsResult& AddCancelStepsInfoList(const CancelStepsInfo& value) { m_cancelStepsInfoList.push_back(value); return *this; }
    inline CancelStepsResult& AddCancelStepsInfoList(CancelStepsInfo&& value) { m_cancelStepsInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelStepsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelStepsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelStepsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CancelStepsInfo> m_cancelStepsInfoList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
