﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/mq/model/AvailabilityZone.h>
#include <aws/mq/model/DeploymentMode.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Option for host instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerInstanceOption">AWS
   * API Reference</a></p>
   */
  class BrokerInstanceOption
  {
  public:
    AWS_MQ_API BrokerInstanceOption();
    AWS_MQ_API BrokerInstanceOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerInstanceOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of available az.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline BrokerInstanceOption& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}
    inline BrokerInstanceOption& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline BrokerInstanceOption& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline BrokerInstanceOption& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's engine type.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }
    inline BrokerInstanceOption& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}
    inline BrokerInstanceOption& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }
    inline BrokerInstanceOption& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}
    inline BrokerInstanceOption& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}
    inline BrokerInstanceOption& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's storage type.</p>
     */
    inline const BrokerStorageType& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const BrokerStorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(BrokerStorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline BrokerInstanceOption& WithStorageType(const BrokerStorageType& value) { SetStorageType(value); return *this;}
    inline BrokerInstanceOption& WithStorageType(BrokerStorageType&& value) { SetStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of supported deployment modes.</p>
     */
    inline const Aws::Vector<DeploymentMode>& GetSupportedDeploymentModes() const{ return m_supportedDeploymentModes; }
    inline bool SupportedDeploymentModesHasBeenSet() const { return m_supportedDeploymentModesHasBeenSet; }
    inline void SetSupportedDeploymentModes(const Aws::Vector<DeploymentMode>& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes = value; }
    inline void SetSupportedDeploymentModes(Aws::Vector<DeploymentMode>&& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes = std::move(value); }
    inline BrokerInstanceOption& WithSupportedDeploymentModes(const Aws::Vector<DeploymentMode>& value) { SetSupportedDeploymentModes(value); return *this;}
    inline BrokerInstanceOption& WithSupportedDeploymentModes(Aws::Vector<DeploymentMode>&& value) { SetSupportedDeploymentModes(std::move(value)); return *this;}
    inline BrokerInstanceOption& AddSupportedDeploymentModes(const DeploymentMode& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes.push_back(value); return *this; }
    inline BrokerInstanceOption& AddSupportedDeploymentModes(DeploymentMode&& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of supported engine versions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineVersions() const{ return m_supportedEngineVersions; }
    inline bool SupportedEngineVersionsHasBeenSet() const { return m_supportedEngineVersionsHasBeenSet; }
    inline void SetSupportedEngineVersions(const Aws::Vector<Aws::String>& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions = value; }
    inline void SetSupportedEngineVersions(Aws::Vector<Aws::String>&& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions = std::move(value); }
    inline BrokerInstanceOption& WithSupportedEngineVersions(const Aws::Vector<Aws::String>& value) { SetSupportedEngineVersions(value); return *this;}
    inline BrokerInstanceOption& WithSupportedEngineVersions(Aws::Vector<Aws::String>&& value) { SetSupportedEngineVersions(std::move(value)); return *this;}
    inline BrokerInstanceOption& AddSupportedEngineVersions(const Aws::String& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions.push_back(value); return *this; }
    inline BrokerInstanceOption& AddSupportedEngineVersions(Aws::String&& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions.push_back(std::move(value)); return *this; }
    inline BrokerInstanceOption& AddSupportedEngineVersions(const char* value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;

    BrokerStorageType m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<DeploymentMode> m_supportedDeploymentModes;
    bool m_supportedDeploymentModesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedEngineVersions;
    bool m_supportedEngineVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
