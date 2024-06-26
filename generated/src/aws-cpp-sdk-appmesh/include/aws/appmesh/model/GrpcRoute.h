﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcRouteAction.h>
#include <aws/appmesh/model/GrpcRouteMatch.h>
#include <aws/appmesh/model/GrpcRetryPolicy.h>
#include <aws/appmesh/model/GrpcTimeout.h>
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
   * <p>An object that represents a gRPC route type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcRoute">AWS
   * API Reference</a></p>
   */
  class GrpcRoute
  {
  public:
    AWS_APPMESH_API GrpcRoute();
    AWS_APPMESH_API GrpcRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline const GrpcRouteAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GrpcRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GrpcRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GrpcRoute& WithAction(const GrpcRouteAction& value) { SetAction(value); return *this;}
    inline GrpcRoute& WithAction(GrpcRouteAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const GrpcRouteMatch& GetMatch() const{ return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    inline void SetMatch(const GrpcRouteMatch& value) { m_matchHasBeenSet = true; m_match = value; }
    inline void SetMatch(GrpcRouteMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }
    inline GrpcRoute& WithMatch(const GrpcRouteMatch& value) { SetMatch(value); return *this;}
    inline GrpcRoute& WithMatch(GrpcRouteMatch&& value) { SetMatch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline const GrpcRetryPolicy& GetRetryPolicy() const{ return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    inline void SetRetryPolicy(const GrpcRetryPolicy& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = value; }
    inline void SetRetryPolicy(GrpcRetryPolicy&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::move(value); }
    inline GrpcRoute& WithRetryPolicy(const GrpcRetryPolicy& value) { SetRetryPolicy(value); return *this;}
    inline GrpcRoute& WithRetryPolicy(GrpcRetryPolicy&& value) { SetRetryPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const GrpcTimeout& GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(const GrpcTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline void SetTimeout(GrpcTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }
    inline GrpcRoute& WithTimeout(const GrpcTimeout& value) { SetTimeout(value); return *this;}
    inline GrpcRoute& WithTimeout(GrpcTimeout&& value) { SetTimeout(std::move(value)); return *this;}
    ///@}
  private:

    GrpcRouteAction m_action;
    bool m_actionHasBeenSet = false;

    GrpcRouteMatch m_match;
    bool m_matchHasBeenSet = false;

    GrpcRetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;

    GrpcTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
