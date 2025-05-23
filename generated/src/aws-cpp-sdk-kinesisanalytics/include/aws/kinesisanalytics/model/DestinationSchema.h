﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/RecordFormatType.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the data format when records are written to the destination. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
   * Application Output</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DestinationSchema">AWS
   * API Reference</a></p>
   */
  class DestinationSchema
  {
  public:
    AWS_KINESISANALYTICS_API DestinationSchema() = default;
    AWS_KINESISANALYTICS_API DestinationSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API DestinationSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the format of the records on the output stream.</p>
     */
    inline RecordFormatType GetRecordFormatType() const { return m_recordFormatType; }
    inline bool RecordFormatTypeHasBeenSet() const { return m_recordFormatTypeHasBeenSet; }
    inline void SetRecordFormatType(RecordFormatType value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = value; }
    inline DestinationSchema& WithRecordFormatType(RecordFormatType value) { SetRecordFormatType(value); return *this;}
    ///@}
  private:

    RecordFormatType m_recordFormatType{RecordFormatType::NOT_SET};
    bool m_recordFormatTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
