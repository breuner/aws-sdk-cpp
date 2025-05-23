﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/importexport/ImportExportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ImportExport
{
namespace Model
{

  /**
   * Input structure for the ListJobs operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/ListJobsInput">AWS
   * API Reference</a></p>
   */
  class ListJobsRequest : public ImportExportRequest
  {
  public:
    AWS_IMPORTEXPORT_API ListJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    AWS_IMPORTEXPORT_API Aws::String SerializePayload() const override;

  protected:
    AWS_IMPORTEXPORT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline int GetMaxJobs() const { return m_maxJobs; }
    inline bool MaxJobsHasBeenSet() const { return m_maxJobsHasBeenSet; }
    inline void SetMaxJobs(int value) { m_maxJobsHasBeenSet = true; m_maxJobs = value; }
    inline ListJobsRequest& WithMaxJobs(int value) { SetMaxJobs(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListJobsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAPIVersion() const { return m_aPIVersion; }
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }
    template<typename APIVersionT = Aws::String>
    void SetAPIVersion(APIVersionT&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::forward<APIVersionT>(value); }
    template<typename APIVersionT = Aws::String>
    ListJobsRequest& WithAPIVersion(APIVersionT&& value) { SetAPIVersion(std::forward<APIVersionT>(value)); return *this;}
    ///@}
  private:

    int m_maxJobs{0};
    bool m_maxJobsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
