﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/PushSync.h>
#include <aws/cognito-sync/model/CognitoStreams.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * <p>The output for the SetIdentityPoolConfiguration operation</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class SetIdentityPoolConfigurationResult
  {
  public:
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationResult();
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = std::move(value); }
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }
    inline SetIdentityPoolConfigurationResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline SetIdentityPoolConfigurationResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline SetIdentityPoolConfigurationResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline const PushSync& GetPushSync() const{ return m_pushSync; }
    inline void SetPushSync(const PushSync& value) { m_pushSync = value; }
    inline void SetPushSync(PushSync&& value) { m_pushSync = std::move(value); }
    inline SetIdentityPoolConfigurationResult& WithPushSync(const PushSync& value) { SetPushSync(value); return *this;}
    inline SetIdentityPoolConfigurationResult& WithPushSync(PushSync&& value) { SetPushSync(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline const CognitoStreams& GetCognitoStreams() const{ return m_cognitoStreams; }
    inline void SetCognitoStreams(const CognitoStreams& value) { m_cognitoStreams = value; }
    inline void SetCognitoStreams(CognitoStreams&& value) { m_cognitoStreams = std::move(value); }
    inline SetIdentityPoolConfigurationResult& WithCognitoStreams(const CognitoStreams& value) { SetCognitoStreams(value); return *this;}
    inline SetIdentityPoolConfigurationResult& WithCognitoStreams(CognitoStreams&& value) { SetCognitoStreams(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SetIdentityPoolConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SetIdentityPoolConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SetIdentityPoolConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;

    PushSync m_pushSync;

    CognitoStreams m_cognitoStreams;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
