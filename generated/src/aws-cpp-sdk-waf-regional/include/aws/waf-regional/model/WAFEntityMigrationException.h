﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/model/MigrationErrorType.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>The operation failed due to a problem with the migration. The failure cause
   * is provided in the exception, in the <code>MigrationErrorType</code>: </p> <ul>
   * <li> <p> <code>ENTITY_NOT_SUPPORTED</code> - The web ACL has an unsupported
   * entity but the <code>IgnoreUnsupportedType</code> is not set to true.</p> </li>
   * <li> <p> <code>ENTITY_NOT_FOUND</code> - The web ACL doesn't exist. </p> </li>
   * <li> <p> <code>S3_BUCKET_NO_PERMISSION</code> - You don't have permission to
   * perform the <code>PutObject</code> action to the specified Amazon S3 bucket.</p>
   * </li> <li> <p> <code>S3_BUCKET_NOT_ACCESSIBLE</code> - The bucket policy doesn't
   * allow AWS WAF to perform the <code>PutObject</code> action in the bucket.</p>
   * </li> <li> <p> <code>S3_BUCKET_NOT_FOUND</code> - The S3 bucket doesn't exist.
   * </p> </li> <li> <p> <code>S3_BUCKET_INVALID_REGION</code> - The S3 bucket is not
   * in the same Region as the web ACL.</p> </li> <li> <p>
   * <code>S3_INTERNAL_ERROR</code> - AWS WAF failed to create the template in the S3
   * bucket for another reason.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/WAFEntityMigrationException">AWS
   * API Reference</a></p>
   */
  class WAFEntityMigrationException
  {
  public:
    AWS_WAFREGIONAL_API WAFEntityMigrationException() = default;
    AWS_WAFREGIONAL_API WAFEntityMigrationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API WAFEntityMigrationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    WAFEntityMigrationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline MigrationErrorType GetMigrationErrorType() const { return m_migrationErrorType; }
    inline bool MigrationErrorTypeHasBeenSet() const { return m_migrationErrorTypeHasBeenSet; }
    inline void SetMigrationErrorType(MigrationErrorType value) { m_migrationErrorTypeHasBeenSet = true; m_migrationErrorType = value; }
    inline WAFEntityMigrationException& WithMigrationErrorType(MigrationErrorType value) { SetMigrationErrorType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMigrationErrorReason() const { return m_migrationErrorReason; }
    inline bool MigrationErrorReasonHasBeenSet() const { return m_migrationErrorReasonHasBeenSet; }
    template<typename MigrationErrorReasonT = Aws::String>
    void SetMigrationErrorReason(MigrationErrorReasonT&& value) { m_migrationErrorReasonHasBeenSet = true; m_migrationErrorReason = std::forward<MigrationErrorReasonT>(value); }
    template<typename MigrationErrorReasonT = Aws::String>
    WAFEntityMigrationException& WithMigrationErrorReason(MigrationErrorReasonT&& value) { SetMigrationErrorReason(std::forward<MigrationErrorReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    MigrationErrorType m_migrationErrorType{MigrationErrorType::NOT_SET};
    bool m_migrationErrorTypeHasBeenSet = false;

    Aws::String m_migrationErrorReason;
    bool m_migrationErrorReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
