﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/BackendConnectionErrors">AWS
   * API Reference</a></p>
   */
  class BackendConnectionErrors
  {
  public:
    AWS_XRAY_API BackendConnectionErrors() = default;
    AWS_XRAY_API BackendConnectionErrors(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API BackendConnectionErrors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline int GetTimeoutCount() const { return m_timeoutCount; }
    inline bool TimeoutCountHasBeenSet() const { return m_timeoutCountHasBeenSet; }
    inline void SetTimeoutCount(int value) { m_timeoutCountHasBeenSet = true; m_timeoutCount = value; }
    inline BackendConnectionErrors& WithTimeoutCount(int value) { SetTimeoutCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline int GetConnectionRefusedCount() const { return m_connectionRefusedCount; }
    inline bool ConnectionRefusedCountHasBeenSet() const { return m_connectionRefusedCountHasBeenSet; }
    inline void SetConnectionRefusedCount(int value) { m_connectionRefusedCountHasBeenSet = true; m_connectionRefusedCount = value; }
    inline BackendConnectionErrors& WithConnectionRefusedCount(int value) { SetConnectionRefusedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline int GetHTTPCode4XXCount() const { return m_hTTPCode4XXCount; }
    inline bool HTTPCode4XXCountHasBeenSet() const { return m_hTTPCode4XXCountHasBeenSet; }
    inline void SetHTTPCode4XXCount(int value) { m_hTTPCode4XXCountHasBeenSet = true; m_hTTPCode4XXCount = value; }
    inline BackendConnectionErrors& WithHTTPCode4XXCount(int value) { SetHTTPCode4XXCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline int GetHTTPCode5XXCount() const { return m_hTTPCode5XXCount; }
    inline bool HTTPCode5XXCountHasBeenSet() const { return m_hTTPCode5XXCountHasBeenSet; }
    inline void SetHTTPCode5XXCount(int value) { m_hTTPCode5XXCountHasBeenSet = true; m_hTTPCode5XXCount = value; }
    inline BackendConnectionErrors& WithHTTPCode5XXCount(int value) { SetHTTPCode5XXCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline int GetUnknownHostCount() const { return m_unknownHostCount; }
    inline bool UnknownHostCountHasBeenSet() const { return m_unknownHostCountHasBeenSet; }
    inline void SetUnknownHostCount(int value) { m_unknownHostCountHasBeenSet = true; m_unknownHostCount = value; }
    inline BackendConnectionErrors& WithUnknownHostCount(int value) { SetUnknownHostCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline int GetOtherCount() const { return m_otherCount; }
    inline bool OtherCountHasBeenSet() const { return m_otherCountHasBeenSet; }
    inline void SetOtherCount(int value) { m_otherCountHasBeenSet = true; m_otherCount = value; }
    inline BackendConnectionErrors& WithOtherCount(int value) { SetOtherCount(value); return *this;}
    ///@}
  private:

    int m_timeoutCount{0};
    bool m_timeoutCountHasBeenSet = false;

    int m_connectionRefusedCount{0};
    bool m_connectionRefusedCountHasBeenSet = false;

    int m_hTTPCode4XXCount{0};
    bool m_hTTPCode4XXCountHasBeenSet = false;

    int m_hTTPCode5XXCount{0};
    bool m_hTTPCode5XXCountHasBeenSet = false;

    int m_unknownHostCount{0};
    bool m_unknownHostCountHasBeenSet = false;

    int m_otherCount{0};
    bool m_otherCountHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
