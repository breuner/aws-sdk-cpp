﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A ProfileObject in a list of ProfileObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjectsItem">AWS
   * API Reference</a></p>
   */
  class ListProfileObjectsItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileObjectsItem();
    AWS_CUSTOMERPROFILES_API ListProfileObjectsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListProfileObjectsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the kind of object being added to a profile, such as
     * "Salesforce-Account."</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }
    inline ListProfileObjectsItem& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline ListProfileObjectsItem& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline ListProfileObjectsItem& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the ProfileObject generated by the service.</p>
     */
    inline const Aws::String& GetProfileObjectUniqueKey() const{ return m_profileObjectUniqueKey; }
    inline bool ProfileObjectUniqueKeyHasBeenSet() const { return m_profileObjectUniqueKeyHasBeenSet; }
    inline void SetProfileObjectUniqueKey(const Aws::String& value) { m_profileObjectUniqueKeyHasBeenSet = true; m_profileObjectUniqueKey = value; }
    inline void SetProfileObjectUniqueKey(Aws::String&& value) { m_profileObjectUniqueKeyHasBeenSet = true; m_profileObjectUniqueKey = std::move(value); }
    inline void SetProfileObjectUniqueKey(const char* value) { m_profileObjectUniqueKeyHasBeenSet = true; m_profileObjectUniqueKey.assign(value); }
    inline ListProfileObjectsItem& WithProfileObjectUniqueKey(const Aws::String& value) { SetProfileObjectUniqueKey(value); return *this;}
    inline ListProfileObjectsItem& WithProfileObjectUniqueKey(Aws::String&& value) { SetProfileObjectUniqueKey(std::move(value)); return *this;}
    inline ListProfileObjectsItem& WithProfileObjectUniqueKey(const char* value) { SetProfileObjectUniqueKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON representation of a ProfileObject that belongs to a profile.</p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }
    inline ListProfileObjectsItem& WithObject(const Aws::String& value) { SetObject(value); return *this;}
    inline ListProfileObjectsItem& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}
    inline ListProfileObjectsItem& WithObject(const char* value) { SetObject(value); return *this;}
    ///@}
  private:

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::String m_profileObjectUniqueKey;
    bool m_profileObjectUniqueKeyHasBeenSet = false;

    Aws::String m_object;
    bool m_objectHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
