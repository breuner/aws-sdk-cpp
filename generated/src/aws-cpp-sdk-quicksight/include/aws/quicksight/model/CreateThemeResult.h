﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateThemeResult
  {
  public:
    AWS_QUICKSIGHT_API CreateThemeResult();
    AWS_QUICKSIGHT_API CreateThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the theme.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateThemeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateThemeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateThemeResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the new theme.</p>
     */
    inline const Aws::String& GetVersionArn() const{ return m_versionArn; }
    inline void SetVersionArn(const Aws::String& value) { m_versionArn = value; }
    inline void SetVersionArn(Aws::String&& value) { m_versionArn = std::move(value); }
    inline void SetVersionArn(const char* value) { m_versionArn.assign(value); }
    inline CreateThemeResult& WithVersionArn(const Aws::String& value) { SetVersionArn(value); return *this;}
    inline CreateThemeResult& WithVersionArn(Aws::String&& value) { SetVersionArn(std::move(value)); return *this;}
    inline CreateThemeResult& WithVersionArn(const char* value) { SetVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }
    inline void SetThemeId(const Aws::String& value) { m_themeId = value; }
    inline void SetThemeId(Aws::String&& value) { m_themeId = std::move(value); }
    inline void SetThemeId(const char* value) { m_themeId.assign(value); }
    inline CreateThemeResult& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}
    inline CreateThemeResult& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}
    inline CreateThemeResult& WithThemeId(const char* value) { SetThemeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The theme creation status.</p>
     */
    inline const ResourceStatus& GetCreationStatus() const{ return m_creationStatus; }
    inline void SetCreationStatus(const ResourceStatus& value) { m_creationStatus = value; }
    inline void SetCreationStatus(ResourceStatus&& value) { m_creationStatus = std::move(value); }
    inline CreateThemeResult& WithCreationStatus(const ResourceStatus& value) { SetCreationStatus(value); return *this;}
    inline CreateThemeResult& WithCreationStatus(ResourceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline CreateThemeResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateThemeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateThemeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateThemeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_versionArn;

    Aws::String m_themeId;

    ResourceStatus m_creationStatus;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
