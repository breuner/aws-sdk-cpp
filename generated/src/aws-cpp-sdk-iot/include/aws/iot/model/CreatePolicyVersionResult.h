﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output of the CreatePolicyVersion operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyVersionResponse">AWS
   * API Reference</a></p>
   */
  class CreatePolicyVersionResult
  {
  public:
    AWS_IOT_API CreatePolicyVersionResult();
    AWS_IOT_API CreatePolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreatePolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The policy ARN.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }
    inline CreatePolicyVersionResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline CreatePolicyVersionResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline CreatePolicyVersionResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }
    inline CreatePolicyVersionResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline CreatePolicyVersionResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline CreatePolicyVersionResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy version ID.</p>
     */
    inline const Aws::String& GetPolicyVersionId() const{ return m_policyVersionId; }
    inline void SetPolicyVersionId(const Aws::String& value) { m_policyVersionId = value; }
    inline void SetPolicyVersionId(Aws::String&& value) { m_policyVersionId = std::move(value); }
    inline void SetPolicyVersionId(const char* value) { m_policyVersionId.assign(value); }
    inline CreatePolicyVersionResult& WithPolicyVersionId(const Aws::String& value) { SetPolicyVersionId(value); return *this;}
    inline CreatePolicyVersionResult& WithPolicyVersionId(Aws::String&& value) { SetPolicyVersionId(std::move(value)); return *this;}
    inline CreatePolicyVersionResult& WithPolicyVersionId(const char* value) { SetPolicyVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }
    inline CreatePolicyVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePolicyVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePolicyVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePolicyVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;

    Aws::String m_policyDocument;

    Aws::String m_policyVersionId;

    bool m_isDefaultVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
