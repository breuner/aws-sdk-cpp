﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>This API is in preview release for Amazon Connect and is subject to change.
   * To request access to this API, contact Amazon Web ServicesSupport.</p> <p>A
   * summary of a given authentication profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AuthenticationProfileSummary">AWS
   * API Reference</a></p>
   */
  class AuthenticationProfileSummary
  {
  public:
    AWS_CONNECT_API AuthenticationProfileSummary();
    AWS_CONNECT_API AuthenticationProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AuthenticationProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the authentication profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AuthenticationProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AuthenticationProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AuthenticationProfileSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the authentication profile summary.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AuthenticationProfileSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AuthenticationProfileSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AuthenticationProfileSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the authentication profile summary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AuthenticationProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AuthenticationProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AuthenticationProfileSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether the authentication profile is the default authentication
     * profile for the Amazon Connect instance. The default authentication profile
     * applies to all agents in an Amazon Connect instance, unless overridden by
     * another authentication profile.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline AuthenticationProfileSummary& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the authentication profile summary was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline AuthenticationProfileSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline AuthenticationProfileSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region when the authentication profile summary was
     * last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }
    inline AuthenticationProfileSummary& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline AuthenticationProfileSummary& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline AuthenticationProfileSummary& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
