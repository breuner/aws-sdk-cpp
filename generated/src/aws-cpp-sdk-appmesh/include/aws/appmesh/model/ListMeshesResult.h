﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/MeshRef.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshesOutput">AWS
   * API Reference</a></p>
   */
  class ListMeshesResult
  {
  public:
    AWS_APPMESH_API ListMeshesResult();
    AWS_APPMESH_API ListMeshesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListMeshesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of existing service meshes.</p>
     */
    inline const Aws::Vector<MeshRef>& GetMeshes() const{ return m_meshes; }
    inline void SetMeshes(const Aws::Vector<MeshRef>& value) { m_meshes = value; }
    inline void SetMeshes(Aws::Vector<MeshRef>&& value) { m_meshes = std::move(value); }
    inline ListMeshesResult& WithMeshes(const Aws::Vector<MeshRef>& value) { SetMeshes(value); return *this;}
    inline ListMeshesResult& WithMeshes(Aws::Vector<MeshRef>&& value) { SetMeshes(std::move(value)); return *this;}
    inline ListMeshesResult& AddMeshes(const MeshRef& value) { m_meshes.push_back(value); return *this; }
    inline ListMeshesResult& AddMeshes(MeshRef&& value) { m_meshes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListMeshes</code> request. When the results of a <code>ListMeshes</code>
     * request exceed <code>limit</code>, you can use this value to retrieve the next
     * page of results. This value is <code>null</code> when there are no more results
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMeshesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMeshesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMeshesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMeshesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMeshesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMeshesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MeshRef> m_meshes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
