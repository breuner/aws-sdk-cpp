﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Identifies a scanned resource. This is used with the
   * <code>ListResourceScanRelatedResources</code> API action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ScannedResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class ScannedResourceIdentifier
  {
  public:
    AWS_CLOUDFORMATION_API ScannedResourceIdentifier() = default;
    AWS_CLOUDFORMATION_API ScannedResourceIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ScannedResourceIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of the resource, such as <code>AWS::DynamoDB::Table</code>. For the
     * list of supported resources, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import-supported-resources.html">Resource
     * type support for imports and drift detection</a> In the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ScannedResourceIdentifier& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 256 key-value pairs that identifies the scanned resource. The
     * key is the name of one of the primary identifiers for the resource. (Primary
     * identifiers are specified in the <code>primaryIdentifier</code> list in the
     * resource schema.) The value is the value of that primary identifier. For
     * example, for a <code>AWS::DynamoDB::Table</code> resource, the primary
     * identifiers is <code>TableName</code> so the key-value pair could be
     * <code>"TableName": "MyDDBTable"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-primaryidentifier">primaryIdentifier</a>
     * in the <i>CloudFormation Command Line Interface (CLI) User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::Map<Aws::String, Aws::String>>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::Map<Aws::String, Aws::String>>
    ScannedResourceIdentifier& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    template<typename ResourceIdentifierKeyT = Aws::String, typename ResourceIdentifierValueT = Aws::String>
    ScannedResourceIdentifier& AddResourceIdentifier(ResourceIdentifierKeyT&& key, ResourceIdentifierValueT&& value) {
      m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.emplace(std::forward<ResourceIdentifierKeyT>(key), std::forward<ResourceIdentifierValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
