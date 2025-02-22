﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace ChallengeNameTypeMapper
      {

        static const int SMS_MFA_HASH = HashingUtils::HashString("SMS_MFA");
        static const int EMAIL_OTP_HASH = HashingUtils::HashString("EMAIL_OTP");
        static const int SOFTWARE_TOKEN_MFA_HASH = HashingUtils::HashString("SOFTWARE_TOKEN_MFA");
        static const int SELECT_MFA_TYPE_HASH = HashingUtils::HashString("SELECT_MFA_TYPE");
        static const int MFA_SETUP_HASH = HashingUtils::HashString("MFA_SETUP");
        static const int PASSWORD_VERIFIER_HASH = HashingUtils::HashString("PASSWORD_VERIFIER");
        static const int CUSTOM_CHALLENGE_HASH = HashingUtils::HashString("CUSTOM_CHALLENGE");
        static const int SELECT_CHALLENGE_HASH = HashingUtils::HashString("SELECT_CHALLENGE");
        static const int DEVICE_SRP_AUTH_HASH = HashingUtils::HashString("DEVICE_SRP_AUTH");
        static const int DEVICE_PASSWORD_VERIFIER_HASH = HashingUtils::HashString("DEVICE_PASSWORD_VERIFIER");
        static const int ADMIN_NO_SRP_AUTH_HASH = HashingUtils::HashString("ADMIN_NO_SRP_AUTH");
        static const int NEW_PASSWORD_REQUIRED_HASH = HashingUtils::HashString("NEW_PASSWORD_REQUIRED");
        static const int SMS_OTP_HASH = HashingUtils::HashString("SMS_OTP");
        static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
        static const int WEB_AUTHN_HASH = HashingUtils::HashString("WEB_AUTHN");
        static const int PASSWORD_SRP_HASH = HashingUtils::HashString("PASSWORD_SRP");


        ChallengeNameType GetChallengeNameTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_MFA_HASH)
          {
            return ChallengeNameType::SMS_MFA;
          }
          else if (hashCode == EMAIL_OTP_HASH)
          {
            return ChallengeNameType::EMAIL_OTP;
          }
          else if (hashCode == SOFTWARE_TOKEN_MFA_HASH)
          {
            return ChallengeNameType::SOFTWARE_TOKEN_MFA;
          }
          else if (hashCode == SELECT_MFA_TYPE_HASH)
          {
            return ChallengeNameType::SELECT_MFA_TYPE;
          }
          else if (hashCode == MFA_SETUP_HASH)
          {
            return ChallengeNameType::MFA_SETUP;
          }
          else if (hashCode == PASSWORD_VERIFIER_HASH)
          {
            return ChallengeNameType::PASSWORD_VERIFIER;
          }
          else if (hashCode == CUSTOM_CHALLENGE_HASH)
          {
            return ChallengeNameType::CUSTOM_CHALLENGE;
          }
          else if (hashCode == SELECT_CHALLENGE_HASH)
          {
            return ChallengeNameType::SELECT_CHALLENGE;
          }
          else if (hashCode == DEVICE_SRP_AUTH_HASH)
          {
            return ChallengeNameType::DEVICE_SRP_AUTH;
          }
          else if (hashCode == DEVICE_PASSWORD_VERIFIER_HASH)
          {
            return ChallengeNameType::DEVICE_PASSWORD_VERIFIER;
          }
          else if (hashCode == ADMIN_NO_SRP_AUTH_HASH)
          {
            return ChallengeNameType::ADMIN_NO_SRP_AUTH;
          }
          else if (hashCode == NEW_PASSWORD_REQUIRED_HASH)
          {
            return ChallengeNameType::NEW_PASSWORD_REQUIRED;
          }
          else if (hashCode == SMS_OTP_HASH)
          {
            return ChallengeNameType::SMS_OTP;
          }
          else if (hashCode == PASSWORD_HASH)
          {
            return ChallengeNameType::PASSWORD;
          }
          else if (hashCode == WEB_AUTHN_HASH)
          {
            return ChallengeNameType::WEB_AUTHN;
          }
          else if (hashCode == PASSWORD_SRP_HASH)
          {
            return ChallengeNameType::PASSWORD_SRP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChallengeNameType>(hashCode);
          }

          return ChallengeNameType::NOT_SET;
        }

        Aws::String GetNameForChallengeNameType(ChallengeNameType enumValue)
        {
          switch(enumValue)
          {
          case ChallengeNameType::NOT_SET:
            return {};
          case ChallengeNameType::SMS_MFA:
            return "SMS_MFA";
          case ChallengeNameType::EMAIL_OTP:
            return "EMAIL_OTP";
          case ChallengeNameType::SOFTWARE_TOKEN_MFA:
            return "SOFTWARE_TOKEN_MFA";
          case ChallengeNameType::SELECT_MFA_TYPE:
            return "SELECT_MFA_TYPE";
          case ChallengeNameType::MFA_SETUP:
            return "MFA_SETUP";
          case ChallengeNameType::PASSWORD_VERIFIER:
            return "PASSWORD_VERIFIER";
          case ChallengeNameType::CUSTOM_CHALLENGE:
            return "CUSTOM_CHALLENGE";
          case ChallengeNameType::SELECT_CHALLENGE:
            return "SELECT_CHALLENGE";
          case ChallengeNameType::DEVICE_SRP_AUTH:
            return "DEVICE_SRP_AUTH";
          case ChallengeNameType::DEVICE_PASSWORD_VERIFIER:
            return "DEVICE_PASSWORD_VERIFIER";
          case ChallengeNameType::ADMIN_NO_SRP_AUTH:
            return "ADMIN_NO_SRP_AUTH";
          case ChallengeNameType::NEW_PASSWORD_REQUIRED:
            return "NEW_PASSWORD_REQUIRED";
          case ChallengeNameType::SMS_OTP:
            return "SMS_OTP";
          case ChallengeNameType::PASSWORD:
            return "PASSWORD";
          case ChallengeNameType::WEB_AUTHN:
            return "WEB_AUTHN";
          case ChallengeNameType::PASSWORD_SRP:
            return "PASSWORD_SRP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChallengeNameTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
