﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HeaderMatchMethod.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the HTTP header in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpRouteHeader">AWS
   * API Reference</a></p>
   */
  class HttpRouteHeader
  {
  public:
    AWS_APPMESH_API HttpRouteHeader() = default;
    AWS_APPMESH_API HttpRouteHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpRouteHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify <code>True</code> to match anything except the match criteria. The
     * default value is <code>False</code>.</p>
     */
    inline bool GetInvert() const { return m_invert; }
    inline bool InvertHasBeenSet() const { return m_invertHasBeenSet; }
    inline void SetInvert(bool value) { m_invertHasBeenSet = true; m_invert = value; }
    inline HttpRouteHeader& WithInvert(bool value) { SetInvert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>HeaderMatchMethod</code> object.</p>
     */
    inline const HeaderMatchMethod& GetMatch() const { return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    template<typename MatchT = HeaderMatchMethod>
    void SetMatch(MatchT&& value) { m_matchHasBeenSet = true; m_match = std::forward<MatchT>(value); }
    template<typename MatchT = HeaderMatchMethod>
    HttpRouteHeader& WithMatch(MatchT&& value) { SetMatch(std::forward<MatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HttpRouteHeader& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    bool m_invert{false};
    bool m_invertHasBeenSet = false;

    HeaderMatchMethod m_match;
    bool m_matchHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
