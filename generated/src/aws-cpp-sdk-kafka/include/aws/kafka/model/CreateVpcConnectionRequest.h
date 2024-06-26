﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class CreateVpcConnectionRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API CreateVpcConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcConnection"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The cluster Amazon Resource Name (ARN) for the VPC
     * connection.</p>
         
     */
    inline const Aws::String& GetTargetClusterArn() const{ return m_targetClusterArn; }
    inline bool TargetClusterArnHasBeenSet() const { return m_targetClusterArnHasBeenSet; }
    inline void SetTargetClusterArn(const Aws::String& value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn = value; }
    inline void SetTargetClusterArn(Aws::String&& value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn = std::move(value); }
    inline void SetTargetClusterArn(const char* value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn.assign(value); }
    inline CreateVpcConnectionRequest& WithTargetClusterArn(const Aws::String& value) { SetTargetClusterArn(value); return *this;}
    inline CreateVpcConnectionRequest& WithTargetClusterArn(Aws::String&& value) { SetTargetClusterArn(std::move(value)); return *this;}
    inline CreateVpcConnectionRequest& WithTargetClusterArn(const char* value) { SetTargetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The authentication type of VPC connection.</p>
         
     */
    inline const Aws::String& GetAuthentication() const{ return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    inline void SetAuthentication(const Aws::String& value) { m_authenticationHasBeenSet = true; m_authentication = value; }
    inline void SetAuthentication(Aws::String&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }
    inline void SetAuthentication(const char* value) { m_authenticationHasBeenSet = true; m_authentication.assign(value); }
    inline CreateVpcConnectionRequest& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}
    inline CreateVpcConnectionRequest& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}
    inline CreateVpcConnectionRequest& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The VPC ID of VPC connection.</p>
         
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreateVpcConnectionRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateVpcConnectionRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateVpcConnectionRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of client subnets.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetClientSubnets() const{ return m_clientSubnets; }
    inline bool ClientSubnetsHasBeenSet() const { return m_clientSubnetsHasBeenSet; }
    inline void SetClientSubnets(const Aws::Vector<Aws::String>& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets = value; }
    inline void SetClientSubnets(Aws::Vector<Aws::String>&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets = std::move(value); }
    inline CreateVpcConnectionRequest& WithClientSubnets(const Aws::Vector<Aws::String>& value) { SetClientSubnets(value); return *this;}
    inline CreateVpcConnectionRequest& WithClientSubnets(Aws::Vector<Aws::String>&& value) { SetClientSubnets(std::move(value)); return *this;}
    inline CreateVpcConnectionRequest& AddClientSubnets(const Aws::String& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.push_back(value); return *this; }
    inline CreateVpcConnectionRequest& AddClientSubnets(Aws::String&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.push_back(std::move(value)); return *this; }
    inline CreateVpcConnectionRequest& AddClientSubnets(const char* value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The list of security groups.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline CreateVpcConnectionRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline CreateVpcConnectionRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline CreateVpcConnectionRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline CreateVpcConnectionRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline CreateVpcConnectionRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>A map of tags for the VPC connection.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateVpcConnectionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateVpcConnectionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateVpcConnectionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateVpcConnectionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateVpcConnectionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateVpcConnectionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateVpcConnectionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateVpcConnectionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateVpcConnectionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_targetClusterArn;
    bool m_targetClusterArnHasBeenSet = false;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientSubnets;
    bool m_clientSubnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
