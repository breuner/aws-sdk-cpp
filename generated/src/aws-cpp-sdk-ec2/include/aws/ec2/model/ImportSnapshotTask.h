﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotTaskDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an import snapshot task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshotTask">AWS
   * API Reference</a></p>
   */
  class ImportSnapshotTask
  {
  public:
    AWS_EC2_API ImportSnapshotTask();
    AWS_EC2_API ImportSnapshotTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportSnapshotTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description of the import snapshot task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportSnapshotTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportSnapshotTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportSnapshotTask& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the import snapshot task.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }
    inline ImportSnapshotTask& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}
    inline ImportSnapshotTask& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}
    inline ImportSnapshotTask& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an import snapshot task.</p>
     */
    inline const SnapshotTaskDetail& GetSnapshotTaskDetail() const{ return m_snapshotTaskDetail; }
    inline bool SnapshotTaskDetailHasBeenSet() const { return m_snapshotTaskDetailHasBeenSet; }
    inline void SetSnapshotTaskDetail(const SnapshotTaskDetail& value) { m_snapshotTaskDetailHasBeenSet = true; m_snapshotTaskDetail = value; }
    inline void SetSnapshotTaskDetail(SnapshotTaskDetail&& value) { m_snapshotTaskDetailHasBeenSet = true; m_snapshotTaskDetail = std::move(value); }
    inline ImportSnapshotTask& WithSnapshotTaskDetail(const SnapshotTaskDetail& value) { SetSnapshotTaskDetail(value); return *this;}
    inline ImportSnapshotTask& WithSnapshotTaskDetail(SnapshotTaskDetail&& value) { SetSnapshotTaskDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the import snapshot task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportSnapshotTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ImportSnapshotTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportSnapshotTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ImportSnapshotTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet = false;

    SnapshotTaskDetail m_snapshotTaskDetail;
    bool m_snapshotTaskDetailHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
