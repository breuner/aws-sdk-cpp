﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ValidationSeverity.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>An error or warning for a desired configuration option value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ValidationMessage">AWS
   * API Reference</a></p>
   */
  class ValidationMessage
  {
  public:
    AWS_ELASTICBEANSTALK_API ValidationMessage();
    AWS_ELASTICBEANSTALK_API ValidationMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ValidationMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A message describing the error or warning.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ValidationMessage& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ValidationMessage& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ValidationMessage& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indication of the severity of this message:</p> <ul> <li> <p>
     * <code>error</code>: This message indicates that this is not a valid setting for
     * an option.</p> </li> <li> <p> <code>warning</code>: This message is providing
     * information you should take into account.</p> </li> </ul>
     */
    inline const ValidationSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const ValidationSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(ValidationSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline ValidationMessage& WithSeverity(const ValidationSeverity& value) { SetSeverity(value); return *this;}
    inline ValidationMessage& WithSeverity(ValidationSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace to which the option belongs.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline ValidationMessage& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline ValidationMessage& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline ValidationMessage& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = std::move(value); }
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }
    inline ValidationMessage& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}
    inline ValidationMessage& WithOptionName(Aws::String&& value) { SetOptionName(std::move(value)); return *this;}
    inline ValidationMessage& WithOptionName(const char* value) { SetOptionName(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationSeverity m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
