﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ResourceDetail">AWS
   * API Reference</a></p>
   */
  class ResourceDetail
  {
  public:
    AWS_SERVICECATALOG_API ResourceDetail();
    AWS_SERVICECATALOG_API ResourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ResourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResourceDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResourceDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResourceDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline ResourceDetail& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline ResourceDetail& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline ResourceDetail& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ResourceDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ResourceDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ResourceDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the resource.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ResourceDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ResourceDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
