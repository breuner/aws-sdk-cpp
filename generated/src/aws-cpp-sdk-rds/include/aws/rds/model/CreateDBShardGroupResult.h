﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>Contains the details for an Amazon RDS DB shard group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBShardGroup">AWS
   * API Reference</a></p>
   */
  class CreateDBShardGroupResult
  {
  public:
    AWS_RDS_API CreateDBShardGroupResult();
    AWS_RDS_API CreateDBShardGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateDBShardGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB shard
     * group.</p>
     */
    inline const Aws::String& GetDBShardGroupResourceId() const{ return m_dBShardGroupResourceId; }
    inline void SetDBShardGroupResourceId(const Aws::String& value) { m_dBShardGroupResourceId = value; }
    inline void SetDBShardGroupResourceId(Aws::String&& value) { m_dBShardGroupResourceId = std::move(value); }
    inline void SetDBShardGroupResourceId(const char* value) { m_dBShardGroupResourceId.assign(value); }
    inline CreateDBShardGroupResult& WithDBShardGroupResourceId(const Aws::String& value) { SetDBShardGroupResourceId(value); return *this;}
    inline CreateDBShardGroupResult& WithDBShardGroupResourceId(Aws::String&& value) { SetDBShardGroupResourceId(std::move(value)); return *this;}
    inline CreateDBShardGroupResult& WithDBShardGroupResourceId(const char* value) { SetDBShardGroupResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const{ return m_dBShardGroupIdentifier; }
    inline void SetDBShardGroupIdentifier(const Aws::String& value) { m_dBShardGroupIdentifier = value; }
    inline void SetDBShardGroupIdentifier(Aws::String&& value) { m_dBShardGroupIdentifier = std::move(value); }
    inline void SetDBShardGroupIdentifier(const char* value) { m_dBShardGroupIdentifier.assign(value); }
    inline CreateDBShardGroupResult& WithDBShardGroupIdentifier(const Aws::String& value) { SetDBShardGroupIdentifier(value); return *this;}
    inline CreateDBShardGroupResult& WithDBShardGroupIdentifier(Aws::String&& value) { SetDBShardGroupIdentifier(std::move(value)); return *this;}
    inline CreateDBShardGroupResult& WithDBShardGroupIdentifier(const char* value) { SetDBShardGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifier.assign(value); }
    inline CreateDBShardGroupResult& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline CreateDBShardGroupResult& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline CreateDBShardGroupResult& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const{ return m_maxACU; }
    inline void SetMaxACU(double value) { m_maxACU = value; }
    inline CreateDBShardGroupResult& WithMaxACU(double value) { SetMaxACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMinACU() const{ return m_minACU; }
    inline void SetMinACU(double value) { m_minACU = value; }
    inline CreateDBShardGroupResult& WithMinACU(double value) { SetMinACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create standby DB shard groups for the DB shard group.
     * Valid values are the following:</p> <ul> <li> <p>0 - Creates a DB shard group
     * without a standby DB shard group. This is the default value.</p> </li> <li> <p>1
     * - Creates a DB shard group with a standby DB shard group in a different
     * Availability Zone (AZ).</p> </li> <li> <p>2 - Creates a DB shard group with two
     * standby DB shard groups in two different AZs.</p> </li> </ul>
     */
    inline int GetComputeRedundancy() const{ return m_computeRedundancy; }
    inline void SetComputeRedundancy(int value) { m_computeRedundancy = value; }
    inline CreateDBShardGroupResult& WithComputeRedundancy(int value) { SetComputeRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB shard group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline CreateDBShardGroupResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline CreateDBShardGroupResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline CreateDBShardGroupResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB shard group is publicly accessible.</p> <p>When the
     * DB shard group is publicly accessible, its Domain Name System (DNS) endpoint
     * resolves to the private IP address from within the DB shard group's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * shard group's VPC. Access to the DB shard group is ultimately controlled by the
     * security group it uses. That public access isn't permitted if the security group
     * assigned to the DB shard group doesn't permit it.</p> <p>When the DB shard group
     * isn't publicly accessible, it is an internal DB shard group with a DNS name that
     * resolves to a private IP address.</p> <p>For more information, see
     * <a>CreateDBShardGroup</a>.</p> <p>This setting is only for Aurora Limitless
     * Database.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }
    inline CreateDBShardGroupResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for the DB shard group.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }
    inline CreateDBShardGroupResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline CreateDBShardGroupResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline CreateDBShardGroupResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupArn() const{ return m_dBShardGroupArn; }
    inline void SetDBShardGroupArn(const Aws::String& value) { m_dBShardGroupArn = value; }
    inline void SetDBShardGroupArn(Aws::String&& value) { m_dBShardGroupArn = std::move(value); }
    inline void SetDBShardGroupArn(const char* value) { m_dBShardGroupArn.assign(value); }
    inline CreateDBShardGroupResult& WithDBShardGroupArn(const Aws::String& value) { SetDBShardGroupArn(value); return *this;}
    inline CreateDBShardGroupResult& WithDBShardGroupArn(Aws::String&& value) { SetDBShardGroupArn(std::move(value)); return *this;}
    inline CreateDBShardGroupResult& WithDBShardGroupArn(const char* value) { SetDBShardGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }
    inline CreateDBShardGroupResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline CreateDBShardGroupResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline CreateDBShardGroupResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }
    inline CreateDBShardGroupResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateDBShardGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateDBShardGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBShardGroupResourceId;

    Aws::String m_dBShardGroupIdentifier;

    Aws::String m_dBClusterIdentifier;

    double m_maxACU;

    double m_minACU;

    int m_computeRedundancy;

    Aws::String m_status;

    bool m_publiclyAccessible;

    Aws::String m_endpoint;

    Aws::String m_dBShardGroupArn;

    Aws::Vector<Tag> m_tagList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
