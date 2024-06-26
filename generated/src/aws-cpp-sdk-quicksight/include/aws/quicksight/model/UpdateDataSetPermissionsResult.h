﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateDataSetPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDataSetPermissionsResult();
    AWS_QUICKSIGHT_API UpdateDataSetPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDataSetPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDataSetArn() const{ return m_dataSetArn; }
    inline void SetDataSetArn(const Aws::String& value) { m_dataSetArn = value; }
    inline void SetDataSetArn(Aws::String&& value) { m_dataSetArn = std::move(value); }
    inline void SetDataSetArn(const char* value) { m_dataSetArn.assign(value); }
    inline UpdateDataSetPermissionsResult& WithDataSetArn(const Aws::String& value) { SetDataSetArn(value); return *this;}
    inline UpdateDataSetPermissionsResult& WithDataSetArn(Aws::String&& value) { SetDataSetArn(std::move(value)); return *this;}
    inline UpdateDataSetPermissionsResult& WithDataSetArn(const char* value) { SetDataSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dataset whose permissions you want to update. This ID is
     * unique per Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }
    inline UpdateDataSetPermissionsResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline UpdateDataSetPermissionsResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline UpdateDataSetPermissionsResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDataSetPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDataSetPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDataSetPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateDataSetPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSetArn;

    Aws::String m_dataSetId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
