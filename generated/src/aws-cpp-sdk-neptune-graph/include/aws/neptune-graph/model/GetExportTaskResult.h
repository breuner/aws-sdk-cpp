﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/ExportTaskStatus.h>
#include <aws/neptune-graph/model/ExportFormat.h>
#include <aws/neptune-graph/model/ParquetType.h>
#include <aws/neptune-graph/model/ExportTaskDetails.h>
#include <aws/neptune-graph/model/ExportFilter.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class GetExportTaskResult
  {
  public:
    AWS_NEPTUNEGRAPH_API GetExportTaskResult() = default;
    AWS_NEPTUNEGRAPH_API GetExportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetExportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The source graph identifier of the export task.</p>
     */
    inline const Aws::String& GetGraphId() const { return m_graphId; }
    template<typename GraphIdT = Aws::String>
    void SetGraphId(GraphIdT&& value) { m_graphIdHasBeenSet = true; m_graphId = std::forward<GraphIdT>(value); }
    template<typename GraphIdT = Aws::String>
    GetExportTaskResult& WithGraphId(GraphIdT&& value) { SetGraphId(std::forward<GraphIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that will allow data to be exported to the
     * destination.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetExportTaskResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the export task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    GetExportTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the export task.</p>
     */
    inline ExportTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(ExportTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetExportTaskResult& WithStatus(ExportTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the export task.</p>
     */
    inline ExportFormat GetFormat() const { return m_format; }
    inline void SetFormat(ExportFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline GetExportTaskResult& WithFormat(ExportFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the export task where data will be exported.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    GetExportTaskResult& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier of the export task.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    GetExportTaskResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the export task.</p>
     */
    inline ParquetType GetParquetType() const { return m_parquetType; }
    inline void SetParquetType(ParquetType value) { m_parquetTypeHasBeenSet = true; m_parquetType = value; }
    inline GetExportTaskResult& WithParquetType(ParquetType value) { SetParquetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the export task has this status value.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetExportTaskResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the export task.</p>
     */
    inline const ExportTaskDetails& GetExportTaskDetails() const { return m_exportTaskDetails; }
    template<typename ExportTaskDetailsT = ExportTaskDetails>
    void SetExportTaskDetails(ExportTaskDetailsT&& value) { m_exportTaskDetailsHasBeenSet = true; m_exportTaskDetails = std::forward<ExportTaskDetailsT>(value); }
    template<typename ExportTaskDetailsT = ExportTaskDetails>
    GetExportTaskResult& WithExportTaskDetails(ExportTaskDetailsT&& value) { SetExportTaskDetails(std::forward<ExportTaskDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export filter of the export task.</p>
     */
    inline const ExportFilter& GetExportFilter() const { return m_exportFilter; }
    template<typename ExportFilterT = ExportFilter>
    void SetExportFilter(ExportFilterT&& value) { m_exportFilterHasBeenSet = true; m_exportFilter = std::forward<ExportFilterT>(value); }
    template<typename ExportFilterT = ExportFilter>
    GetExportTaskResult& WithExportFilter(ExportFilterT&& value) { SetExportFilter(std::forward<ExportFilterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExportTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_graphId;
    bool m_graphIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    ExportTaskStatus m_status{ExportTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ExportFormat m_format{ExportFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    ParquetType m_parquetType{ParquetType::NOT_SET};
    bool m_parquetTypeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    ExportTaskDetails m_exportTaskDetails;
    bool m_exportTaskDetailsHasBeenSet = false;

    ExportFilter m_exportFilter;
    bool m_exportFilterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
