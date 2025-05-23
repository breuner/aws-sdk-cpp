﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/MatchOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMPricingCalculator
  {
    namespace Model
    {
      namespace MatchOptionMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        MatchOption GetMatchOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return MatchOption::EQUALS;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return MatchOption::STARTS_WITH;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return MatchOption::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatchOption>(hashCode);
          }

          return MatchOption::NOT_SET;
        }

        Aws::String GetNameForMatchOption(MatchOption enumValue)
        {
          switch(enumValue)
          {
          case MatchOption::NOT_SET:
            return {};
          case MatchOption::EQUALS:
            return "EQUALS";
          case MatchOption::STARTS_WITH:
            return "STARTS_WITH";
          case MatchOption::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MatchOptionMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
