﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/ResultFrame.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The result of a SQL statement.</p>  <p>This data structure is only used
   * with the deprecated <code>ExecuteSql</code> operation. Use the
   * <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code> operation
   * instead.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/SqlStatementResult">AWS
   * API Reference</a></p>
   */
  class SqlStatementResult
  {
  public:
    AWS_RDSDATASERVICE_API SqlStatementResult() = default;
    AWS_RDSDATASERVICE_API SqlStatementResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API SqlStatementResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The result set of the SQL statement.</p>
     */
    inline const ResultFrame& GetResultFrame() const { return m_resultFrame; }
    inline bool ResultFrameHasBeenSet() const { return m_resultFrameHasBeenSet; }
    template<typename ResultFrameT = ResultFrame>
    void SetResultFrame(ResultFrameT&& value) { m_resultFrameHasBeenSet = true; m_resultFrame = std::forward<ResultFrameT>(value); }
    template<typename ResultFrameT = ResultFrame>
    SqlStatementResult& WithResultFrame(ResultFrameT&& value) { SetResultFrame(std::forward<ResultFrameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records updated by a SQL statement.</p>
     */
    inline long long GetNumberOfRecordsUpdated() const { return m_numberOfRecordsUpdated; }
    inline bool NumberOfRecordsUpdatedHasBeenSet() const { return m_numberOfRecordsUpdatedHasBeenSet; }
    inline void SetNumberOfRecordsUpdated(long long value) { m_numberOfRecordsUpdatedHasBeenSet = true; m_numberOfRecordsUpdated = value; }
    inline SqlStatementResult& WithNumberOfRecordsUpdated(long long value) { SetNumberOfRecordsUpdated(value); return *this;}
    ///@}
  private:

    ResultFrame m_resultFrame;
    bool m_resultFrameHasBeenSet = false;

    long long m_numberOfRecordsUpdated{0};
    bool m_numberOfRecordsUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
