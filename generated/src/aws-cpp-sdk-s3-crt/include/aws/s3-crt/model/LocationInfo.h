﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/LocationType.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Specifies the location where the bucket will be created.</p> <p>For directory
   * buckets, the location type is Availability Zone or Local Zone. For more
   * information about directory buckets, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-overview.html">Working
   * with directory buckets</a> in the <i>Amazon S3 User Guide</i>.</p> 
   * <p>This functionality is only supported by directory buckets.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/LocationInfo">AWS API
   * Reference</a></p>
   */
  class LocationInfo
  {
  public:
    AWS_S3CRT_API LocationInfo() = default;
    AWS_S3CRT_API LocationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API LocationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of location where the bucket will be created.</p>
     */
    inline LocationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LocationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LocationInfo& WithType(LocationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the location where the bucket will be created.</p> <p>For
     * directory buckets, the name of the location is the Zone ID of the Availability
     * Zone (AZ) or Local Zone (LZ) where the bucket will be created. An example AZ ID
     * value is <code>usw2-az1</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LocationInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    LocationType m_type{LocationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
