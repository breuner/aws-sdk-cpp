﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DescribeDBEngineVersionsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBEngineVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBEngineVersions"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The database engine to return version details for.</p> <p>Valid Values:</p>
     * <ul> <li> <p> <code>aurora-mysql</code> </p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>custom-oracle-ee</code>
     * </p> </li> <li> <p> <code>custom-oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2-cdb</code> </p> </li> <li> <p> <code>db2-ae</code> </p>
     * </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    DescribeDBEngineVersionsRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specific database engine version to return details for.</p> <p>Example:
     * <code>5.1.49</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DescribeDBEngineVersionsRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing DB
     * parameter group family.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const { return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    template<typename DBParameterGroupFamilyT = Aws::String>
    void SetDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::forward<DBParameterGroupFamilyT>(value); }
    template<typename DBParameterGroupFamilyT = Aws::String>
    DescribeDBEngineVersionsRequest& WithDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { SetDBParameterGroupFamily(std::forward<DBParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies one or more DB engine versions to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-parameter-group-family</code> -
     * Accepts parameter groups family names. The results list only includes
     * information about the DB engine versions for these parameter group families.</p>
     * </li> <li> <p> <code>engine</code> - Accepts engine names. The results list only
     * includes information about the DB engine versions for these engines.</p> </li>
     * <li> <p> <code>engine-mode</code> - Accepts DB engine modes. The results list
     * only includes information about the DB engine versions for these engine modes.
     * Valid DB engine modes are the following:</p> <ul> <li> <p> <code>global</code>
     * </p> </li> <li> <p> <code>multimaster</code> </p> </li> <li> <p>
     * <code>parallelquery</code> </p> </li> <li> <p> <code>provisioned</code> </p>
     * </li> <li> <p> <code>serverless</code> </p> </li> </ul> </li> <li> <p>
     * <code>engine-version</code> - Accepts engine versions. The results list only
     * includes information about the DB engine versions for these engine versions.</p>
     * </li> <li> <p> <code>status</code> - Accepts engine version statuses. The
     * results list only includes information about the DB engine versions for these
     * statuses. Valid statuses are the following:</p> <ul> <li> <p>
     * <code>available</code> </p> </li> <li> <p> <code>deprecated</code> </p> </li>
     * </ul> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeDBEngineVersionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeDBEngineVersionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so you can retrieve the remaining results.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDBEngineVersionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBEngineVersionsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to return only the default version of the specified engine
     * or the engine and major version combination.</p>
     */
    inline bool GetDefaultOnly() const { return m_defaultOnly; }
    inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }
    inline void SetDefaultOnly(bool value) { m_defaultOnlyHasBeenSet = true; m_defaultOnly = value; }
    inline DescribeDBEngineVersionsRequest& WithDefaultOnly(bool value) { SetDefaultOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to list the supported character sets for each engine
     * version.</p> <p>If this parameter is enabled and the requested engine supports
     * the <code>CharacterSetName</code> parameter for <code>CreateDBInstance</code>,
     * the response includes a list of supported character sets for each engine
     * version.</p> <p>For RDS Custom, the default is not to list supported character
     * sets. If you enable this parameter, RDS Custom returns no results.</p>
     */
    inline bool GetListSupportedCharacterSets() const { return m_listSupportedCharacterSets; }
    inline bool ListSupportedCharacterSetsHasBeenSet() const { return m_listSupportedCharacterSetsHasBeenSet; }
    inline void SetListSupportedCharacterSets(bool value) { m_listSupportedCharacterSetsHasBeenSet = true; m_listSupportedCharacterSets = value; }
    inline DescribeDBEngineVersionsRequest& WithListSupportedCharacterSets(bool value) { SetListSupportedCharacterSets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to list the supported time zones for each engine
     * version.</p> <p>If this parameter is enabled and the requested engine supports
     * the <code>TimeZone</code> parameter for <code>CreateDBInstance</code>, the
     * response includes a list of supported time zones for each engine version.</p>
     * <p>For RDS Custom, the default is not to list supported time zones. If you
     * enable this parameter, RDS Custom returns no results.</p>
     */
    inline bool GetListSupportedTimezones() const { return m_listSupportedTimezones; }
    inline bool ListSupportedTimezonesHasBeenSet() const { return m_listSupportedTimezonesHasBeenSet; }
    inline void SetListSupportedTimezones(bool value) { m_listSupportedTimezonesHasBeenSet = true; m_listSupportedTimezones = value; }
    inline DescribeDBEngineVersionsRequest& WithListSupportedTimezones(bool value) { SetListSupportedTimezones(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to also list the engine versions that aren't available. The
     * default is to list only available engine versions.</p>
     */
    inline bool GetIncludeAll() const { return m_includeAll; }
    inline bool IncludeAllHasBeenSet() const { return m_includeAllHasBeenSet; }
    inline void SetIncludeAll(bool value) { m_includeAllHasBeenSet = true; m_includeAll = value; }
    inline DescribeDBEngineVersionsRequest& WithIncludeAll(bool value) { SetIncludeAll(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_defaultOnly{false};
    bool m_defaultOnlyHasBeenSet = false;

    bool m_listSupportedCharacterSets{false};
    bool m_listSupportedCharacterSetsHasBeenSet = false;

    bool m_listSupportedTimezones{false};
    bool m_listSupportedTimezonesHasBeenSet = false;

    bool m_includeAll{false};
    bool m_includeAllHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
