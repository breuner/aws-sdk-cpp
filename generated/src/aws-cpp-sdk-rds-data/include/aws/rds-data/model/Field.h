﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/rds-data/model/ArrayValue.h>
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
   * <p>Contains a value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/Field">AWS API
   * Reference</a></p>
   */
  class Field
  {
  public:
    AWS_RDSDATASERVICE_API Field() = default;
    AWS_RDSDATASERVICE_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A NULL value.</p>
     */
    inline bool GetIsNull() const { return m_isNull; }
    inline bool IsNullHasBeenSet() const { return m_isNullHasBeenSet; }
    inline void SetIsNull(bool value) { m_isNullHasBeenSet = true; m_isNull = value; }
    inline Field& WithIsNull(bool value) { SetIsNull(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value of Boolean data type.</p>
     */
    inline bool GetBooleanValue() const { return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline Field& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value of long data type.</p>
     */
    inline long long GetLongValue() const { return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline Field& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value of double data type.</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline Field& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value of string data type.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    Field& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value of BLOB data type.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlobValue() const { return m_blobValue; }
    inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }
    template<typename BlobValueT = Aws::Utils::ByteBuffer>
    void SetBlobValue(BlobValueT&& value) { m_blobValueHasBeenSet = true; m_blobValue = std::forward<BlobValueT>(value); }
    template<typename BlobValueT = Aws::Utils::ByteBuffer>
    Field& WithBlobValue(BlobValueT&& value) { SetBlobValue(std::forward<BlobValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of values.</p>
     */
    inline const ArrayValue& GetArrayValue() const { return m_arrayValue; }
    inline bool ArrayValueHasBeenSet() const { return m_arrayValueHasBeenSet; }
    template<typename ArrayValueT = ArrayValue>
    void SetArrayValue(ArrayValueT&& value) { m_arrayValueHasBeenSet = true; m_arrayValue = std::forward<ArrayValueT>(value); }
    template<typename ArrayValueT = ArrayValue>
    Field& WithArrayValue(ArrayValueT&& value) { SetArrayValue(std::forward<ArrayValueT>(value)); return *this;}
    ///@}
  private:

    bool m_isNull{false};
    bool m_isNullHasBeenSet = false;

    bool m_booleanValue{false};
    bool m_booleanValueHasBeenSet = false;

    long long m_longValue{0};
    bool m_longValueHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blobValue{};
    bool m_blobValueHasBeenSet = false;

    ArrayValue m_arrayValue;
    bool m_arrayValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
