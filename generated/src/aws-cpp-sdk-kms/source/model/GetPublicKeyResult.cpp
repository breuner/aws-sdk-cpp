﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetPublicKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPublicKeyResult::GetPublicKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPublicKeyResult& GetPublicKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = HashingUtils::Base64Decode(jsonValue.GetString("PublicKey"));
    m_publicKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeySpec"))
  {
    m_keySpec = KeySpecMapper::GetKeySpecForName(jsonValue.GetString("KeySpec"));
    m_keySpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyUsage"))
  {
    m_keyUsage = KeyUsageTypeMapper::GetKeyUsageTypeForName(jsonValue.GetString("KeyUsage"));
    m_keyUsageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionAlgorithms"))
  {
    Aws::Utils::Array<JsonView> encryptionAlgorithmsJsonList = jsonValue.GetArray("EncryptionAlgorithms");
    for(unsigned encryptionAlgorithmsIndex = 0; encryptionAlgorithmsIndex < encryptionAlgorithmsJsonList.GetLength(); ++encryptionAlgorithmsIndex)
    {
      m_encryptionAlgorithms.push_back(EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(encryptionAlgorithmsJsonList[encryptionAlgorithmsIndex].AsString()));
    }
    m_encryptionAlgorithmsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SigningAlgorithms"))
  {
    Aws::Utils::Array<JsonView> signingAlgorithmsJsonList = jsonValue.GetArray("SigningAlgorithms");
    for(unsigned signingAlgorithmsIndex = 0; signingAlgorithmsIndex < signingAlgorithmsJsonList.GetLength(); ++signingAlgorithmsIndex)
    {
      m_signingAlgorithms.push_back(SigningAlgorithmSpecMapper::GetSigningAlgorithmSpecForName(signingAlgorithmsJsonList[signingAlgorithmsIndex].AsString()));
    }
    m_signingAlgorithmsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyAgreementAlgorithms"))
  {
    Aws::Utils::Array<JsonView> keyAgreementAlgorithmsJsonList = jsonValue.GetArray("KeyAgreementAlgorithms");
    for(unsigned keyAgreementAlgorithmsIndex = 0; keyAgreementAlgorithmsIndex < keyAgreementAlgorithmsJsonList.GetLength(); ++keyAgreementAlgorithmsIndex)
    {
      m_keyAgreementAlgorithms.push_back(KeyAgreementAlgorithmSpecMapper::GetKeyAgreementAlgorithmSpecForName(keyAgreementAlgorithmsJsonList[keyAgreementAlgorithmsIndex].AsString()));
    }
    m_keyAgreementAlgorithmsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
