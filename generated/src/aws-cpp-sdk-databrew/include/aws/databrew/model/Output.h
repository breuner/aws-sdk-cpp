﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/CompressionFormat.h>
#include <aws/databrew/model/OutputFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/S3Location.h>
#include <aws/databrew/model/OutputFormatOptions.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents options that specify how and where in Amazon S3 DataBrew writes
   * the output generated by recipe jobs or profile jobs.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_GLUEDATABREW_API Output();
    AWS_GLUEDATABREW_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compression algorithm used to compress the output text of the job.</p>
     */
    inline const CompressionFormat& GetCompressionFormat() const{ return m_compressionFormat; }
    inline bool CompressionFormatHasBeenSet() const { return m_compressionFormatHasBeenSet; }
    inline void SetCompressionFormat(const CompressionFormat& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }
    inline void SetCompressionFormat(CompressionFormat&& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = std::move(value); }
    inline Output& WithCompressionFormat(const CompressionFormat& value) { SetCompressionFormat(value); return *this;}
    inline Output& WithCompressionFormat(CompressionFormat&& value) { SetCompressionFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the output of the job.</p>
     */
    inline const OutputFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const OutputFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(OutputFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline Output& WithFormat(const OutputFormat& value) { SetFormat(value); return *this;}
    inline Output& WithFormat(OutputFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of one or more partition columns for the output of the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionColumns() const{ return m_partitionColumns; }
    inline bool PartitionColumnsHasBeenSet() const { return m_partitionColumnsHasBeenSet; }
    inline void SetPartitionColumns(const Aws::Vector<Aws::String>& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = value; }
    inline void SetPartitionColumns(Aws::Vector<Aws::String>&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns = std::move(value); }
    inline Output& WithPartitionColumns(const Aws::Vector<Aws::String>& value) { SetPartitionColumns(value); return *this;}
    inline Output& WithPartitionColumns(Aws::Vector<Aws::String>&& value) { SetPartitionColumns(std::move(value)); return *this;}
    inline Output& AddPartitionColumns(const Aws::String& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }
    inline Output& AddPartitionColumns(Aws::String&& value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(std::move(value)); return *this; }
    inline Output& AddPartitionColumns(const char* value) { m_partitionColumnsHasBeenSet = true; m_partitionColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where the job writes its output.</p>
     */
    inline const S3Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const S3Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(S3Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline Output& WithLocation(const S3Location& value) { SetLocation(value); return *this;}
    inline Output& WithLocation(S3Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that, if true, means that any data in the location specified for
     * output is overwritten with new output.</p>
     */
    inline bool GetOverwrite() const{ return m_overwrite; }
    inline bool OverwriteHasBeenSet() const { return m_overwriteHasBeenSet; }
    inline void SetOverwrite(bool value) { m_overwriteHasBeenSet = true; m_overwrite = value; }
    inline Output& WithOverwrite(bool value) { SetOverwrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents options that define how DataBrew formats job output files.</p>
     */
    inline const OutputFormatOptions& GetFormatOptions() const{ return m_formatOptions; }
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }
    inline void SetFormatOptions(const OutputFormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }
    inline void SetFormatOptions(OutputFormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }
    inline Output& WithFormatOptions(const OutputFormatOptions& value) { SetFormatOptions(value); return *this;}
    inline Output& WithFormatOptions(OutputFormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of files to be generated by the job and written to the output
     * folder. For output partitioned by column(s), the MaxOutputFiles value is the
     * maximum number of files per partition.</p>
     */
    inline int GetMaxOutputFiles() const{ return m_maxOutputFiles; }
    inline bool MaxOutputFilesHasBeenSet() const { return m_maxOutputFilesHasBeenSet; }
    inline void SetMaxOutputFiles(int value) { m_maxOutputFilesHasBeenSet = true; m_maxOutputFiles = value; }
    inline Output& WithMaxOutputFiles(int value) { SetMaxOutputFiles(value); return *this;}
    ///@}
  private:

    CompressionFormat m_compressionFormat;
    bool m_compressionFormatHasBeenSet = false;

    OutputFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionColumns;
    bool m_partitionColumnsHasBeenSet = false;

    S3Location m_location;
    bool m_locationHasBeenSet = false;

    bool m_overwrite;
    bool m_overwriteHasBeenSet = false;

    OutputFormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;

    int m_maxOutputFiles;
    bool m_maxOutputFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
