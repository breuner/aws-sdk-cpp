﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ReferenceImportJobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A filter for import references.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ImportReferenceFilter">AWS
   * API Reference</a></p>
   */
  class ImportReferenceFilter
  {
  public:
    AWS_OMICS_API ImportReferenceFilter();
    AWS_OMICS_API ImportReferenceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ImportReferenceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A status to filter on.</p>
     */
    inline const ReferenceImportJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReferenceImportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReferenceImportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImportReferenceFilter& WithStatus(const ReferenceImportJobStatus& value) { SetStatus(value); return *this;}
    inline ImportReferenceFilter& WithStatus(ReferenceImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter's start date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline ImportReferenceFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline ImportReferenceFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter's end date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline ImportReferenceFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline ImportReferenceFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}
  private:

    ReferenceImportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
