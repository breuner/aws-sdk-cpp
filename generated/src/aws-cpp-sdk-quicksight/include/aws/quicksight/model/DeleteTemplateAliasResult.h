﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteTemplateAliasResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteTemplateAliasResult();
    AWS_QUICKSIGHT_API DeleteTemplateAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteTemplateAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DeleteTemplateAliasResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the template associated with the deletion.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }
    inline DeleteTemplateAliasResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline DeleteTemplateAliasResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline DeleteTemplateAliasResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the template alias.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline void SetAliasName(const Aws::String& value) { m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasName.assign(value); }
    inline DeleteTemplateAliasResult& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline DeleteTemplateAliasResult& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline DeleteTemplateAliasResult& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the template you want to delete.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeleteTemplateAliasResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeleteTemplateAliasResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeleteTemplateAliasResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteTemplateAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteTemplateAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteTemplateAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_status;

    Aws::String m_templateId;

    Aws::String m_aliasName;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
