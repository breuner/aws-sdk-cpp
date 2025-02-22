﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/JobOperation.h>
#include <aws/s3control/model/JobReport.h>
#include <aws/s3control/model/JobManifest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobManifestGenerator.h>
#include <aws/s3control/model/S3Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID that creates the job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CreateJobRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CreateJobRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CreateJobRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether confirmation is required before Amazon S3 runs the job.
     * Confirmation is only required for jobs created through the Amazon S3
     * console.</p>
     */
    inline bool GetConfirmationRequired() const{ return m_confirmationRequired; }
    inline bool ConfirmationRequiredHasBeenSet() const { return m_confirmationRequiredHasBeenSet; }
    inline void SetConfirmationRequired(bool value) { m_confirmationRequiredHasBeenSet = true; m_confirmationRequired = value; }
    inline CreateJobRequest& WithConfirmationRequired(bool value) { SetConfirmationRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that you want this job to perform on every object listed in the
     * manifest. For more information about the available actions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Operations</a>
     * in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const JobOperation& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const JobOperation& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(JobOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline CreateJobRequest& WithOperation(const JobOperation& value) { SetOperation(value); return *this;}
    inline CreateJobRequest& WithOperation(JobOperation&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for the optional job-completion report.</p>
     */
    inline const JobReport& GetReport() const{ return m_report; }
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
    inline void SetReport(const JobReport& value) { m_reportHasBeenSet = true; m_report = value; }
    inline void SetReport(JobReport&& value) { m_reportHasBeenSet = true; m_report = std::move(value); }
    inline CreateJobRequest& WithReport(const JobReport& value) { SetReport(value); return *this;}
    inline CreateJobRequest& WithReport(JobReport&& value) { SetReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token to ensure that you don't accidentally submit the same
     * request twice. You can use any string up to the maximum length.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for the manifest.</p>
     */
    inline const JobManifest& GetManifest() const{ return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    inline void SetManifest(const JobManifest& value) { m_manifestHasBeenSet = true; m_manifest = value; }
    inline void SetManifest(JobManifest&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }
    inline CreateJobRequest& WithManifest(const JobManifest& value) { SetManifest(value); return *this;}
    inline CreateJobRequest& WithManifest(JobManifest&& value) { SetManifest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for this job. You can use any string within the permitted
     * length. Descriptions don't need to be unique and can be used for multiple
     * jobs.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numerical priority for this job. Higher numbers indicate higher
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CreateJobRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Identity and Access Management (IAM)
     * role that Batch Operations will use to run this job's action on every object in
     * the manifest.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags to associate with the S3 Batch Operations job. This is an
     * optional parameter. </p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<S3Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<S3Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateJobRequest& WithTags(const Aws::Vector<S3Tag>& value) { SetTags(value); return *this;}
    inline CreateJobRequest& WithTags(Aws::Vector<S3Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateJobRequest& AddTags(const S3Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateJobRequest& AddTags(S3Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attribute container for the ManifestGenerator details. Jobs must be
     * created with either a manifest file or a ManifestGenerator, but not both.</p>
     */
    inline const JobManifestGenerator& GetManifestGenerator() const{ return m_manifestGenerator; }
    inline bool ManifestGeneratorHasBeenSet() const { return m_manifestGeneratorHasBeenSet; }
    inline void SetManifestGenerator(const JobManifestGenerator& value) { m_manifestGeneratorHasBeenSet = true; m_manifestGenerator = value; }
    inline void SetManifestGenerator(JobManifestGenerator&& value) { m_manifestGeneratorHasBeenSet = true; m_manifestGenerator = std::move(value); }
    inline CreateJobRequest& WithManifestGenerator(const JobManifestGenerator& value) { SetManifestGenerator(value); return *this;}
    inline CreateJobRequest& WithManifestGenerator(JobManifestGenerator&& value) { SetManifestGenerator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_confirmationRequired;
    bool m_confirmationRequiredHasBeenSet = false;

    JobOperation m_operation;
    bool m_operationHasBeenSet = false;

    JobReport m_report;
    bool m_reportHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    JobManifest m_manifest;
    bool m_manifestHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<S3Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    JobManifestGenerator m_manifestGenerator;
    bool m_manifestGeneratorHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
