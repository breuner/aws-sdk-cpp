﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class AddProfileKeyResult
  {
  public:
    AWS_CUSTOMERPROFILES_API AddProfileKeyResult();
    AWS_CUSTOMERPROFILES_API AddProfileKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API AddProfileKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A searchable identifier of a customer profile.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline void SetKeyName(const Aws::String& value) { m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyName.assign(value); }
    inline AddProfileKeyResult& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline AddProfileKeyResult& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline AddProfileKeyResult& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_values = std::move(value); }
    inline AddProfileKeyResult& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline AddProfileKeyResult& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline AddProfileKeyResult& AddValues(const Aws::String& value) { m_values.push_back(value); return *this; }
    inline AddProfileKeyResult& AddValues(Aws::String&& value) { m_values.push_back(std::move(value)); return *this; }
    inline AddProfileKeyResult& AddValues(const char* value) { m_values.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddProfileKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddProfileKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddProfileKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyName;

    Aws::Vector<Aws::String> m_values;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
