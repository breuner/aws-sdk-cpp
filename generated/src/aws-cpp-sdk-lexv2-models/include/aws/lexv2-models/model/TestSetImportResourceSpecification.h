﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
#include <aws/lexv2-models/model/TestSetImportInputLocation.h>
#include <aws/lexv2-models/model/TestSetModality.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the test set that is imported.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetImportResourceSpecification">AWS
   * API Reference</a></p>
   */
  class TestSetImportResourceSpecification
  {
  public:
    AWS_LEXMODELSV2_API TestSetImportResourceSpecification();
    AWS_LEXMODELSV2_API TestSetImportResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetImportResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the test set.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetNameHasBeenSet = true; m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetNameHasBeenSet = true; m_testSetName.assign(value); }
    inline TestSetImportResourceSpecification& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline TestSetImportResourceSpecification& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline TestSetImportResourceSpecification& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TestSetImportResourceSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TestSetImportResourceSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TestSetImportResourceSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the test set.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline TestSetImportResourceSpecification& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline TestSetImportResourceSpecification& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline TestSetImportResourceSpecification& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the location that Amazon Lex uses to store the
     * test-set.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const{ return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    inline void SetStorageLocation(const TestSetStorageLocation& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }
    inline void SetStorageLocation(TestSetStorageLocation&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }
    inline TestSetImportResourceSpecification& WithStorageLocation(const TestSetStorageLocation& value) { SetStorageLocation(value); return *this;}
    inline TestSetImportResourceSpecification& WithStorageLocation(TestSetStorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the input location from where test-set should be
     * imported.</p>
     */
    inline const TestSetImportInputLocation& GetImportInputLocation() const{ return m_importInputLocation; }
    inline bool ImportInputLocationHasBeenSet() const { return m_importInputLocationHasBeenSet; }
    inline void SetImportInputLocation(const TestSetImportInputLocation& value) { m_importInputLocationHasBeenSet = true; m_importInputLocation = value; }
    inline void SetImportInputLocation(TestSetImportInputLocation&& value) { m_importInputLocationHasBeenSet = true; m_importInputLocation = std::move(value); }
    inline TestSetImportResourceSpecification& WithImportInputLocation(const TestSetImportInputLocation& value) { SetImportInputLocation(value); return *this;}
    inline TestSetImportResourceSpecification& WithImportInputLocation(TestSetImportInputLocation&& value) { SetImportInputLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the test-set being imported contains written or spoken
     * data.</p>
     */
    inline const TestSetModality& GetModality() const{ return m_modality; }
    inline bool ModalityHasBeenSet() const { return m_modalityHasBeenSet; }
    inline void SetModality(const TestSetModality& value) { m_modalityHasBeenSet = true; m_modality = value; }
    inline void SetModality(TestSetModality&& value) { m_modalityHasBeenSet = true; m_modality = std::move(value); }
    inline TestSetImportResourceSpecification& WithModality(const TestSetModality& value) { SetModality(value); return *this;}
    inline TestSetImportResourceSpecification& WithModality(TestSetModality&& value) { SetModality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the test set. You can only add tags when you
     * import/generate a new test set. You can't use the <code>UpdateTestSet</code>
     * operation to update tags. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestSetTags() const{ return m_testSetTags; }
    inline bool TestSetTagsHasBeenSet() const { return m_testSetTagsHasBeenSet; }
    inline void SetTestSetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_testSetTagsHasBeenSet = true; m_testSetTags = value; }
    inline void SetTestSetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags = std::move(value); }
    inline TestSetImportResourceSpecification& WithTestSetTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTestSetTags(value); return *this;}
    inline TestSetImportResourceSpecification& WithTestSetTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTestSetTags(std::move(value)); return *this;}
    inline TestSetImportResourceSpecification& AddTestSetTags(const Aws::String& key, const Aws::String& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, value); return *this; }
    inline TestSetImportResourceSpecification& AddTestSetTags(Aws::String&& key, const Aws::String& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::move(key), value); return *this; }
    inline TestSetImportResourceSpecification& AddTestSetTags(const Aws::String& key, Aws::String&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, std::move(value)); return *this; }
    inline TestSetImportResourceSpecification& AddTestSetTags(Aws::String&& key, Aws::String&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::move(key), std::move(value)); return *this; }
    inline TestSetImportResourceSpecification& AddTestSetTags(const char* key, Aws::String&& value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, std::move(value)); return *this; }
    inline TestSetImportResourceSpecification& AddTestSetTags(Aws::String&& key, const char* value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(std::move(key), value); return *this; }
    inline TestSetImportResourceSpecification& AddTestSetTags(const char* key, const char* value) { m_testSetTagsHasBeenSet = true; m_testSetTags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    TestSetStorageLocation m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    TestSetImportInputLocation m_importInputLocation;
    bool m_importInputLocationHasBeenSet = false;

    TestSetModality m_modality;
    bool m_modalityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_testSetTags;
    bool m_testSetTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
