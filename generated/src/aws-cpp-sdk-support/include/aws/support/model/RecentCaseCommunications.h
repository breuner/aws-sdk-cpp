﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/Communication.h>
#include <utility>

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
namespace Support
{
namespace Model
{

  /**
   * <p>The five most recent communications associated with the case.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RecentCaseCommunications">AWS
   * API Reference</a></p>
   */
  class RecentCaseCommunications
  {
  public:
    AWS_SUPPORT_API RecentCaseCommunications();
    AWS_SUPPORT_API RecentCaseCommunications(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API RecentCaseCommunications& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The five most recent communications associated with the case.</p>
     */
    inline const Aws::Vector<Communication>& GetCommunications() const{ return m_communications; }
    inline bool CommunicationsHasBeenSet() const { return m_communicationsHasBeenSet; }
    inline void SetCommunications(const Aws::Vector<Communication>& value) { m_communicationsHasBeenSet = true; m_communications = value; }
    inline void SetCommunications(Aws::Vector<Communication>&& value) { m_communicationsHasBeenSet = true; m_communications = std::move(value); }
    inline RecentCaseCommunications& WithCommunications(const Aws::Vector<Communication>& value) { SetCommunications(value); return *this;}
    inline RecentCaseCommunications& WithCommunications(Aws::Vector<Communication>&& value) { SetCommunications(std::move(value)); return *this;}
    inline RecentCaseCommunications& AddCommunications(const Communication& value) { m_communicationsHasBeenSet = true; m_communications.push_back(value); return *this; }
    inline RecentCaseCommunications& AddCommunications(Communication&& value) { m_communicationsHasBeenSet = true; m_communications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline RecentCaseCommunications& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline RecentCaseCommunications& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline RecentCaseCommunications& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Communication> m_communications;
    bool m_communicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
