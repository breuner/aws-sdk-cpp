﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about what created the incident record and when it was
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/IncidentRecordSource">AWS
   * API Reference</a></p>
   */
  class IncidentRecordSource
  {
  public:
    AWS_SSMINCIDENTS_API IncidentRecordSource();
    AWS_SSMINCIDENTS_API IncidentRecordSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API IncidentRecordSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The principal that started the incident.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline IncidentRecordSource& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline IncidentRecordSource& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline IncidentRecordSource& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal that assumed the role specified in
     * <code>createdBy</code>. If no service principal assumed the role this will be
     * left blank.</p>
     */
    inline const Aws::String& GetInvokedBy() const{ return m_invokedBy; }
    inline bool InvokedByHasBeenSet() const { return m_invokedByHasBeenSet; }
    inline void SetInvokedBy(const Aws::String& value) { m_invokedByHasBeenSet = true; m_invokedBy = value; }
    inline void SetInvokedBy(Aws::String&& value) { m_invokedByHasBeenSet = true; m_invokedBy = std::move(value); }
    inline void SetInvokedBy(const char* value) { m_invokedByHasBeenSet = true; m_invokedBy.assign(value); }
    inline IncidentRecordSource& WithInvokedBy(const Aws::String& value) { SetInvokedBy(value); return *this;}
    inline IncidentRecordSource& WithInvokedBy(Aws::String&& value) { SetInvokedBy(std::move(value)); return *this;}
    inline IncidentRecordSource& WithInvokedBy(const char* value) { SetInvokedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline IncidentRecordSource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline IncidentRecordSource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline IncidentRecordSource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline IncidentRecordSource& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline IncidentRecordSource& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline IncidentRecordSource& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}
  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_invokedBy;
    bool m_invokedByHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
