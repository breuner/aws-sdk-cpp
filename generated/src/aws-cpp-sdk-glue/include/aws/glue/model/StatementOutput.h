﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/StatementOutputData.h>
#include <aws/glue/model/StatementState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The code execution output in JSON format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StatementOutput">AWS
   * API Reference</a></p>
   */
  class StatementOutput
  {
  public:
    AWS_GLUE_API StatementOutput();
    AWS_GLUE_API StatementOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatementOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code execution output.</p>
     */
    inline const StatementOutputData& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const StatementOutputData& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(StatementOutputData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline StatementOutput& WithData(const StatementOutputData& value) { SetData(value); return *this;}
    inline StatementOutput& WithData(StatementOutputData&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution count of the output.</p>
     */
    inline int GetExecutionCount() const{ return m_executionCount; }
    inline bool ExecutionCountHasBeenSet() const { return m_executionCountHasBeenSet; }
    inline void SetExecutionCount(int value) { m_executionCountHasBeenSet = true; m_executionCount = value; }
    inline StatementOutput& WithExecutionCount(int value) { SetExecutionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the code execution output.</p>
     */
    inline const StatementState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StatementState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StatementState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StatementOutput& WithStatus(const StatementState& value) { SetStatus(value); return *this;}
    inline StatementOutput& WithStatus(StatementState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the error in the output.</p>
     */
    inline const Aws::String& GetErrorName() const{ return m_errorName; }
    inline bool ErrorNameHasBeenSet() const { return m_errorNameHasBeenSet; }
    inline void SetErrorName(const Aws::String& value) { m_errorNameHasBeenSet = true; m_errorName = value; }
    inline void SetErrorName(Aws::String&& value) { m_errorNameHasBeenSet = true; m_errorName = std::move(value); }
    inline void SetErrorName(const char* value) { m_errorNameHasBeenSet = true; m_errorName.assign(value); }
    inline StatementOutput& WithErrorName(const Aws::String& value) { SetErrorName(value); return *this;}
    inline StatementOutput& WithErrorName(Aws::String&& value) { SetErrorName(std::move(value)); return *this;}
    inline StatementOutput& WithErrorName(const char* value) { SetErrorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error value of the output.</p>
     */
    inline const Aws::String& GetErrorValue() const{ return m_errorValue; }
    inline bool ErrorValueHasBeenSet() const { return m_errorValueHasBeenSet; }
    inline void SetErrorValue(const Aws::String& value) { m_errorValueHasBeenSet = true; m_errorValue = value; }
    inline void SetErrorValue(Aws::String&& value) { m_errorValueHasBeenSet = true; m_errorValue = std::move(value); }
    inline void SetErrorValue(const char* value) { m_errorValueHasBeenSet = true; m_errorValue.assign(value); }
    inline StatementOutput& WithErrorValue(const Aws::String& value) { SetErrorValue(value); return *this;}
    inline StatementOutput& WithErrorValue(Aws::String&& value) { SetErrorValue(std::move(value)); return *this;}
    inline StatementOutput& WithErrorValue(const char* value) { SetErrorValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The traceback of the output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTraceback() const{ return m_traceback; }
    inline bool TracebackHasBeenSet() const { return m_tracebackHasBeenSet; }
    inline void SetTraceback(const Aws::Vector<Aws::String>& value) { m_tracebackHasBeenSet = true; m_traceback = value; }
    inline void SetTraceback(Aws::Vector<Aws::String>&& value) { m_tracebackHasBeenSet = true; m_traceback = std::move(value); }
    inline StatementOutput& WithTraceback(const Aws::Vector<Aws::String>& value) { SetTraceback(value); return *this;}
    inline StatementOutput& WithTraceback(Aws::Vector<Aws::String>&& value) { SetTraceback(std::move(value)); return *this;}
    inline StatementOutput& AddTraceback(const Aws::String& value) { m_tracebackHasBeenSet = true; m_traceback.push_back(value); return *this; }
    inline StatementOutput& AddTraceback(Aws::String&& value) { m_tracebackHasBeenSet = true; m_traceback.push_back(std::move(value)); return *this; }
    inline StatementOutput& AddTraceback(const char* value) { m_tracebackHasBeenSet = true; m_traceback.push_back(value); return *this; }
    ///@}
  private:

    StatementOutputData m_data;
    bool m_dataHasBeenSet = false;

    int m_executionCount;
    bool m_executionCountHasBeenSet = false;

    StatementState m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorName;
    bool m_errorNameHasBeenSet = false;

    Aws::String m_errorValue;
    bool m_errorValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_traceback;
    bool m_tracebackHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
