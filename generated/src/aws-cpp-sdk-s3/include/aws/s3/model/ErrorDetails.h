﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p> If the <code>CreateBucketMetadataTableConfiguration</code> request succeeds,
   * but S3 Metadata was unable to create the table, this structure contains the
   * error code and error message. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ErrorDetails">AWS API
   * Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_S3_API ErrorDetails() = default;
    AWS_S3_API ErrorDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API ErrorDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> If the <code>CreateBucketMetadataTableConfiguration</code> request succeeds,
     * but S3 Metadata was unable to create the table, this structure contains the
     * error code. The possible error codes and error messages are as follows: </p>
     * <ul> <li> <p> <code>AccessDeniedCreatingResources</code> - You don't have
     * sufficient permissions to create the required resources. Make sure that you have
     * <code>s3tables:CreateNamespace</code>, <code>s3tables:CreateTable</code>,
     * <code>s3tables:GetTable</code> and <code>s3tables:PutTablePolicy</code>
     * permissions, and then try again. To create a new metadata table, you must delete
     * the metadata configuration for this bucket, and then create a new metadata
     * configuration. </p> </li> <li> <p> <code>AccessDeniedWritingToTable</code> -
     * Unable to write to the metadata table because of missing resource permissions.
     * To fix the resource policy, Amazon S3 needs to create a new metadata table. To
     * create a new metadata table, you must delete the metadata configuration for this
     * bucket, and then create a new metadata configuration.</p> </li> <li> <p>
     * <code>DestinationTableNotFound</code> - The destination table doesn't exist. To
     * create a new metadata table, you must delete the metadata configuration for this
     * bucket, and then create a new metadata configuration.</p> </li> <li> <p>
     * <code>ServerInternalError</code> - An internal error has occurred. To create a
     * new metadata table, you must delete the metadata configuration for this bucket,
     * and then create a new metadata configuration.</p> </li> <li> <p>
     * <code>TableAlreadyExists</code> - The table that you specified already exists in
     * the table bucket's namespace. Specify a different table name. To create a new
     * metadata table, you must delete the metadata configuration for this bucket, and
     * then create a new metadata configuration.</p> </li> <li> <p>
     * <code>TableBucketNotFound</code> - The table bucket that you specified doesn't
     * exist in this Amazon Web Services Region and account. Create or choose a
     * different table bucket. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> </ul>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ErrorDetails& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>CreateBucketMetadataTableConfiguration</code> request succeeds,
     * but S3 Metadata was unable to create the table, this structure contains the
     * error message. The possible error codes and error messages are as follows: </p>
     * <ul> <li> <p> <code>AccessDeniedCreatingResources</code> - You don't have
     * sufficient permissions to create the required resources. Make sure that you have
     * <code>s3tables:CreateNamespace</code>, <code>s3tables:CreateTable</code>,
     * <code>s3tables:GetTable</code> and <code>s3tables:PutTablePolicy</code>
     * permissions, and then try again. To create a new metadata table, you must delete
     * the metadata configuration for this bucket, and then create a new metadata
     * configuration. </p> </li> <li> <p> <code>AccessDeniedWritingToTable</code> -
     * Unable to write to the metadata table because of missing resource permissions.
     * To fix the resource policy, Amazon S3 needs to create a new metadata table. To
     * create a new metadata table, you must delete the metadata configuration for this
     * bucket, and then create a new metadata configuration.</p> </li> <li> <p>
     * <code>DestinationTableNotFound</code> - The destination table doesn't exist. To
     * create a new metadata table, you must delete the metadata configuration for this
     * bucket, and then create a new metadata configuration.</p> </li> <li> <p>
     * <code>ServerInternalError</code> - An internal error has occurred. To create a
     * new metadata table, you must delete the metadata configuration for this bucket,
     * and then create a new metadata configuration.</p> </li> <li> <p>
     * <code>TableAlreadyExists</code> - The table that you specified already exists in
     * the table bucket's namespace. Specify a different table name. To create a new
     * metadata table, you must delete the metadata configuration for this bucket, and
     * then create a new metadata configuration.</p> </li> <li> <p>
     * <code>TableBucketNotFound</code> - The table bucket that you specified doesn't
     * exist in this Amazon Web Services Region and account. Create or choose a
     * different table bucket. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> </ul>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ErrorDetails& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
