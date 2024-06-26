﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/NamedQuery.h>
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
namespace Athena
{
namespace Model
{
  class GetNamedQueryResult
  {
  public:
    AWS_ATHENA_API GetNamedQueryResult();
    AWS_ATHENA_API GetNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the query.</p>
     */
    inline const NamedQuery& GetNamedQuery() const{ return m_namedQuery; }
    inline void SetNamedQuery(const NamedQuery& value) { m_namedQuery = value; }
    inline void SetNamedQuery(NamedQuery&& value) { m_namedQuery = std::move(value); }
    inline GetNamedQueryResult& WithNamedQuery(const NamedQuery& value) { SetNamedQuery(value); return *this;}
    inline GetNamedQueryResult& WithNamedQuery(NamedQuery&& value) { SetNamedQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNamedQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNamedQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNamedQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    NamedQuery m_namedQuery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
