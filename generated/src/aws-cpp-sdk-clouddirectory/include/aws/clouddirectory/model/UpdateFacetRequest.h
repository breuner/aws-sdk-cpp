﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectType.h>
#include <aws/clouddirectory/model/FacetAttributeUpdate.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class UpdateFacetRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API UpdateFacetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFacet"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Facet</a>. For
     * more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }
    inline UpdateFacetRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline UpdateFacetRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline UpdateFacetRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the facet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateFacetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateFacetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateFacetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of attributes that need to be updated in a given schema <a>Facet</a>.
     * Each attribute is followed by <code>AttributeAction</code>, which specifies the
     * type of update operation to perform. </p>
     */
    inline const Aws::Vector<FacetAttributeUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
    inline void SetAttributeUpdates(const Aws::Vector<FacetAttributeUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }
    inline void SetAttributeUpdates(Aws::Vector<FacetAttributeUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::move(value); }
    inline UpdateFacetRequest& WithAttributeUpdates(const Aws::Vector<FacetAttributeUpdate>& value) { SetAttributeUpdates(value); return *this;}
    inline UpdateFacetRequest& WithAttributeUpdates(Aws::Vector<FacetAttributeUpdate>&& value) { SetAttributeUpdates(std::move(value)); return *this;}
    inline UpdateFacetRequest& AddAttributeUpdates(const FacetAttributeUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(value); return *this; }
    inline UpdateFacetRequest& AddAttributeUpdates(FacetAttributeUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The object type that is associated with the facet. See
     * <a>CreateFacetRequest$ObjectType</a> for more details.</p>
     */
    inline const ObjectType& GetObjectType() const{ return m_objectType; }
    inline bool ObjectTypeHasBeenSet() const { return m_objectTypeHasBeenSet; }
    inline void SetObjectType(const ObjectType& value) { m_objectTypeHasBeenSet = true; m_objectType = value; }
    inline void SetObjectType(ObjectType&& value) { m_objectTypeHasBeenSet = true; m_objectType = std::move(value); }
    inline UpdateFacetRequest& WithObjectType(const ObjectType& value) { SetObjectType(value); return *this;}
    inline UpdateFacetRequest& WithObjectType(ObjectType&& value) { SetObjectType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<FacetAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet = false;

    ObjectType m_objectType;
    bool m_objectTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
