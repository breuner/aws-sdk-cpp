﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace SES
{
namespace Model
{

  /**
   * <p>The name of the configuration set.</p> <p>Configuration sets let you create
   * groups of rules that you can apply to the emails you send using Amazon SES. For
   * more information about using configuration sets, see <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/using-configuration-sets.html">Using
   * Amazon SES Configuration Sets</a> in the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/">Amazon SES Developer
   * Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ConfigurationSet">AWS
   * API Reference</a></p>
   */
  class ConfigurationSet
  {
  public:
    AWS_SES_API ConfigurationSet() = default;
    AWS_SES_API ConfigurationSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API ConfigurationSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the configuration set. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only letters (a-z, A-Z), numbers (0-9),
     * underscores (_), or dashes (-).</p> </li> <li> <p>Contain 64 characters or
     * fewer.</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfigurationSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
