﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>provides information about the Amazon S3 Public Access Block configuration
   * for accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3AccountPublicAccessBlockDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3AccountPublicAccessBlockDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3AccountPublicAccessBlockDetails() = default;
    AWS_SECURITYHUB_API AwsS3AccountPublicAccessBlockDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3AccountPublicAccessBlockDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether to reject calls to update an S3 bucket if the calls include
     * a public access control list (ACL).</p>
     */
    inline bool GetBlockPublicAcls() const { return m_blockPublicAcls; }
    inline bool BlockPublicAclsHasBeenSet() const { return m_blockPublicAclsHasBeenSet; }
    inline void SetBlockPublicAcls(bool value) { m_blockPublicAclsHasBeenSet = true; m_blockPublicAcls = value; }
    inline AwsS3AccountPublicAccessBlockDetails& WithBlockPublicAcls(bool value) { SetBlockPublicAcls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to reject calls to update the access policy for an S3
     * bucket or access point if the policy allows public access.</p>
     */
    inline bool GetBlockPublicPolicy() const { return m_blockPublicPolicy; }
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }
    inline AwsS3AccountPublicAccessBlockDetails& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon S3 ignores public ACLs that are associated with an
     * S3 bucket.</p>
     */
    inline bool GetIgnorePublicAcls() const { return m_ignorePublicAcls; }
    inline bool IgnorePublicAclsHasBeenSet() const { return m_ignorePublicAclsHasBeenSet; }
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }
    inline AwsS3AccountPublicAccessBlockDetails& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to restrict access to an access point or S3 bucket that has
     * a public policy to only Amazon Web Services service principals and authorized
     * users within the S3 bucket owner's account.</p>
     */
    inline bool GetRestrictPublicBuckets() const { return m_restrictPublicBuckets; }
    inline bool RestrictPublicBucketsHasBeenSet() const { return m_restrictPublicBucketsHasBeenSet; }
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }
    inline AwsS3AccountPublicAccessBlockDetails& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}
    ///@}
  private:

    bool m_blockPublicAcls{false};
    bool m_blockPublicAclsHasBeenSet = false;

    bool m_blockPublicPolicy{false};
    bool m_blockPublicPolicyHasBeenSet = false;

    bool m_ignorePublicAcls{false};
    bool m_ignorePublicAclsHasBeenSet = false;

    bool m_restrictPublicBuckets{false};
    bool m_restrictPublicBucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
