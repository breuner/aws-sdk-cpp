﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class CreateCloudFormationChangeSetResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateCloudFormationChangeSetResult();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateCloudFormationChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateCloudFormationChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline CreateCloudFormationChangeSetResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateCloudFormationChangeSetResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p><p>Length constraints:
     * Minimum length of 1.</p><p>Pattern: ARN:[-a-zA-Z0-9:/]*</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetId = value; }
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetId = std::move(value); }
    inline void SetChangeSetId(const char* value) { m_changeSetId.assign(value); }
    inline CreateCloudFormationChangeSetResult& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}
    inline CreateCloudFormationChangeSetResult& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetResult& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersion.assign(value); }
    inline CreateCloudFormationChangeSetResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline CreateCloudFormationChangeSetResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackId.assign(value); }
    inline CreateCloudFormationChangeSetResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline CreateCloudFormationChangeSetResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetResult& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCloudFormationChangeSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCloudFormationChangeSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCloudFormationChangeSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_changeSetId;

    Aws::String m_semanticVersion;

    Aws::String m_stackId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
