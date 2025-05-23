﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Tag.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex type that contains zero or more <code>Tag</code>
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Tags">AWS API
   * Reference</a></p>
   */
  class Tags
  {
  public:
    AWS_CLOUDFRONT_API Tags() = default;
    AWS_CLOUDFRONT_API Tags(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Tags& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline const Aws::Vector<Tag>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<Tag>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Tag>>
    Tags& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = Tag>
    Tags& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Tag> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
