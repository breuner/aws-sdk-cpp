﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class ListSupportedInstanceTypesRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ListSupportedInstanceTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSupportedInstanceTypes"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon EMR release label determines the <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/emr-release-app-versions-6.x.html">versions
     * of open-source application packages</a> that Amazon EMR has installed on the
     * cluster. Release labels are in the format <code>emr-x.x.x</code>, where x.x.x is
     * an Amazon EMR release number such as <code>emr-6.10.0</code>. For more
     * information about Amazon EMR releases and their included application versions
     * and features, see the <i> <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/emr-release-components.html">Amazon
     * EMR Release Guide</a> </i>.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    ListSupportedInstanceTypesRequest& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListSupportedInstanceTypesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
