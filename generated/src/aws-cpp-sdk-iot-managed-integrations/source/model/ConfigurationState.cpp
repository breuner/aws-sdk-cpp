﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace ConfigurationStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        ConfigurationState GetConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ConfigurationState::ENABLED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ConfigurationState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ConfigurationState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationState>(hashCode);
          }

          return ConfigurationState::NOT_SET;
        }

        Aws::String GetNameForConfigurationState(ConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationState::NOT_SET:
            return {};
          case ConfigurationState::ENABLED:
            return "ENABLED";
          case ConfigurationState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ConfigurationState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationStateMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
