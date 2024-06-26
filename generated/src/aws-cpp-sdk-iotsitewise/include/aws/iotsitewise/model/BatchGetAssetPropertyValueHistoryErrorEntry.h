﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryErrorCode.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>A list of the errors (if any) associated with the batch request. Each error
   * entry contains the <code>entryId</code> of the entry that failed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueHistoryErrorEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyValueHistoryErrorEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryErrorEntry();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const BatchGetAssetPropertyValueHistoryErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const BatchGetAssetPropertyValueHistoryErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(BatchGetAssetPropertyValueHistoryErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithErrorCode(const BatchGetAssetPropertyValueHistoryErrorCode& value) { SetErrorCode(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithErrorCode(BatchGetAssetPropertyValueHistoryErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}
    inline BatchGetAssetPropertyValueHistoryErrorEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}
    ///@}
  private:

    BatchGetAssetPropertyValueHistoryErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
