﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RestXmlProtocol
{
namespace Model
{

  class StructureListMember
  {
  public:
    AWS_RESTXMLPROTOCOL_API StructureListMember() = default;
    AWS_RESTXMLPROTOCOL_API StructureListMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API StructureListMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetA() const { return m_a; }
    inline bool AHasBeenSet() const { return m_aHasBeenSet; }
    template<typename AT = Aws::String>
    void SetA(AT&& value) { m_aHasBeenSet = true; m_a = std::forward<AT>(value); }
    template<typename AT = Aws::String>
    StructureListMember& WithA(AT&& value) { SetA(std::forward<AT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetB() const { return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    template<typename BT = Aws::String>
    void SetB(BT&& value) { m_bHasBeenSet = true; m_b = std::forward<BT>(value); }
    template<typename BT = Aws::String>
    StructureListMember& WithB(BT&& value) { SetB(std::forward<BT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_a;
    bool m_aHasBeenSet = false;

    Aws::String m_b;
    bool m_bHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
