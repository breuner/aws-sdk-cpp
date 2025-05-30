﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotFleetRequestConfigData.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

SpotFleetRequestConfigData::SpotFleetRequestConfigData(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SpotFleetRequestConfigData& SpotFleetRequestConfigData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationStrategyNode = resultNode.FirstChild("allocationStrategy");
    if(!allocationStrategyNode.IsNull())
    {
      m_allocationStrategy = AllocationStrategyMapper::GetAllocationStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationStrategyNode.GetText()).c_str()));
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode onDemandAllocationStrategyNode = resultNode.FirstChild("onDemandAllocationStrategy");
    if(!onDemandAllocationStrategyNode.IsNull())
    {
      m_onDemandAllocationStrategy = OnDemandAllocationStrategyMapper::GetOnDemandAllocationStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandAllocationStrategyNode.GetText()).c_str()));
      m_onDemandAllocationStrategyHasBeenSet = true;
    }
    XmlNode spotMaintenanceStrategiesNode = resultNode.FirstChild("spotMaintenanceStrategies");
    if(!spotMaintenanceStrategiesNode.IsNull())
    {
      m_spotMaintenanceStrategies = spotMaintenanceStrategiesNode;
      m_spotMaintenanceStrategiesHasBeenSet = true;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode excessCapacityTerminationPolicyNode = resultNode.FirstChild("excessCapacityTerminationPolicy");
    if(!excessCapacityTerminationPolicyNode.IsNull())
    {
      m_excessCapacityTerminationPolicy = ExcessCapacityTerminationPolicyMapper::GetExcessCapacityTerminationPolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(excessCapacityTerminationPolicyNode.GetText()).c_str()));
      m_excessCapacityTerminationPolicyHasBeenSet = true;
    }
    XmlNode fulfilledCapacityNode = resultNode.FirstChild("fulfilledCapacity");
    if(!fulfilledCapacityNode.IsNull())
    {
      m_fulfilledCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fulfilledCapacityNode.GetText()).c_str()).c_str());
      m_fulfilledCapacityHasBeenSet = true;
    }
    XmlNode onDemandFulfilledCapacityNode = resultNode.FirstChild("onDemandFulfilledCapacity");
    if(!onDemandFulfilledCapacityNode.IsNull())
    {
      m_onDemandFulfilledCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandFulfilledCapacityNode.GetText()).c_str()).c_str());
      m_onDemandFulfilledCapacityHasBeenSet = true;
    }
    XmlNode iamFleetRoleNode = resultNode.FirstChild("iamFleetRole");
    if(!iamFleetRoleNode.IsNull())
    {
      m_iamFleetRole = Aws::Utils::Xml::DecodeEscapedXmlText(iamFleetRoleNode.GetText());
      m_iamFleetRoleHasBeenSet = true;
    }
    XmlNode launchSpecificationsNode = resultNode.FirstChild("launchSpecifications");
    if(!launchSpecificationsNode.IsNull())
    {
      XmlNode launchSpecificationsMember = launchSpecificationsNode.FirstChild("item");
      m_launchSpecificationsHasBeenSet = !launchSpecificationsMember.IsNull();
      while(!launchSpecificationsMember.IsNull())
      {
        m_launchSpecifications.push_back(launchSpecificationsMember);
        launchSpecificationsMember = launchSpecificationsMember.NextNode("item");
      }

      m_launchSpecificationsHasBeenSet = true;
    }
    XmlNode launchTemplateConfigsNode = resultNode.FirstChild("launchTemplateConfigs");
    if(!launchTemplateConfigsNode.IsNull())
    {
      XmlNode launchTemplateConfigsMember = launchTemplateConfigsNode.FirstChild("item");
      m_launchTemplateConfigsHasBeenSet = !launchTemplateConfigsMember.IsNull();
      while(!launchTemplateConfigsMember.IsNull())
      {
        m_launchTemplateConfigs.push_back(launchTemplateConfigsMember);
        launchTemplateConfigsMember = launchTemplateConfigsMember.NextNode("item");
      }

      m_launchTemplateConfigsHasBeenSet = true;
    }
    XmlNode spotPriceNode = resultNode.FirstChild("spotPrice");
    if(!spotPriceNode.IsNull())
    {
      m_spotPrice = Aws::Utils::Xml::DecodeEscapedXmlText(spotPriceNode.GetText());
      m_spotPriceHasBeenSet = true;
    }
    XmlNode targetCapacityNode = resultNode.FirstChild("targetCapacity");
    if(!targetCapacityNode.IsNull())
    {
      m_targetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetCapacityNode.GetText()).c_str()).c_str());
      m_targetCapacityHasBeenSet = true;
    }
    XmlNode onDemandTargetCapacityNode = resultNode.FirstChild("onDemandTargetCapacity");
    if(!onDemandTargetCapacityNode.IsNull())
    {
      m_onDemandTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandTargetCapacityNode.GetText()).c_str()).c_str());
      m_onDemandTargetCapacityHasBeenSet = true;
    }
    XmlNode onDemandMaxTotalPriceNode = resultNode.FirstChild("onDemandMaxTotalPrice");
    if(!onDemandMaxTotalPriceNode.IsNull())
    {
      m_onDemandMaxTotalPrice = Aws::Utils::Xml::DecodeEscapedXmlText(onDemandMaxTotalPriceNode.GetText());
      m_onDemandMaxTotalPriceHasBeenSet = true;
    }
    XmlNode spotMaxTotalPriceNode = resultNode.FirstChild("spotMaxTotalPrice");
    if(!spotMaxTotalPriceNode.IsNull())
    {
      m_spotMaxTotalPrice = Aws::Utils::Xml::DecodeEscapedXmlText(spotMaxTotalPriceNode.GetText());
      m_spotMaxTotalPriceHasBeenSet = true;
    }
    XmlNode terminateInstancesWithExpirationNode = resultNode.FirstChild("terminateInstancesWithExpiration");
    if(!terminateInstancesWithExpirationNode.IsNull())
    {
      m_terminateInstancesWithExpiration = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(terminateInstancesWithExpirationNode.GetText()).c_str()).c_str());
      m_terminateInstancesWithExpirationHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = FleetTypeMapper::GetFleetTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode validFromNode = resultNode.FirstChild("validFrom");
    if(!validFromNode.IsNull())
    {
      m_validFrom = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validFromNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validFromHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("validUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validUntilNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validUntilHasBeenSet = true;
    }
    XmlNode replaceUnhealthyInstancesNode = resultNode.FirstChild("replaceUnhealthyInstances");
    if(!replaceUnhealthyInstancesNode.IsNull())
    {
      m_replaceUnhealthyInstances = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replaceUnhealthyInstancesNode.GetText()).c_str()).c_str());
      m_replaceUnhealthyInstancesHasBeenSet = true;
    }
    XmlNode instanceInterruptionBehaviorNode = resultNode.FirstChild("instanceInterruptionBehavior");
    if(!instanceInterruptionBehaviorNode.IsNull())
    {
      m_instanceInterruptionBehavior = InstanceInterruptionBehaviorMapper::GetInstanceInterruptionBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceInterruptionBehaviorNode.GetText()).c_str()));
      m_instanceInterruptionBehaviorHasBeenSet = true;
    }
    XmlNode loadBalancersConfigNode = resultNode.FirstChild("loadBalancersConfig");
    if(!loadBalancersConfigNode.IsNull())
    {
      m_loadBalancersConfig = loadBalancersConfigNode;
      m_loadBalancersConfigHasBeenSet = true;
    }
    XmlNode instancePoolsToUseCountNode = resultNode.FirstChild("instancePoolsToUseCount");
    if(!instancePoolsToUseCountNode.IsNull())
    {
      m_instancePoolsToUseCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancePoolsToUseCountNode.GetText()).c_str()).c_str());
      m_instancePoolsToUseCountHasBeenSet = true;
    }
    XmlNode contextNode = resultNode.FirstChild("context");
    if(!contextNode.IsNull())
    {
      m_context = Aws::Utils::Xml::DecodeEscapedXmlText(contextNode.GetText());
      m_contextHasBeenSet = true;
    }
    XmlNode targetCapacityUnitTypeNode = resultNode.FirstChild("targetCapacityUnitType");
    if(!targetCapacityUnitTypeNode.IsNull())
    {
      m_targetCapacityUnitType = TargetCapacityUnitTypeMapper::GetTargetCapacityUnitTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetCapacityUnitTypeNode.GetText()).c_str()));
      m_targetCapacityUnitTypeHasBeenSet = true;
    }
    XmlNode tagSpecificationsNode = resultNode.FirstChild("TagSpecification");
    if(!tagSpecificationsNode.IsNull())
    {
      XmlNode tagSpecificationsMember = tagSpecificationsNode.FirstChild("item");
      m_tagSpecificationsHasBeenSet = !tagSpecificationsMember.IsNull();
      while(!tagSpecificationsMember.IsNull())
      {
        m_tagSpecifications.push_back(tagSpecificationsMember);
        tagSpecificationsMember = tagSpecificationsMember.NextNode("item");
      }

      m_tagSpecificationsHasBeenSet = true;
    }
  }

  return *this;
}

void SpotFleetRequestConfigData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationStrategy=" << StringUtils::URLEncode(AllocationStrategyMapper::GetNameForAllocationStrategy(m_allocationStrategy)) << "&";
  }

  if(m_onDemandAllocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandAllocationStrategy=" << StringUtils::URLEncode(OnDemandAllocationStrategyMapper::GetNameForOnDemandAllocationStrategy(m_onDemandAllocationStrategy)) << "&";
  }

  if(m_spotMaintenanceStrategiesHasBeenSet)
  {
      Aws::StringStream spotMaintenanceStrategiesLocationAndMemberSs;
      spotMaintenanceStrategiesLocationAndMemberSs << location << index << locationValue << ".SpotMaintenanceStrategies";
      m_spotMaintenanceStrategies.OutputToStream(oStream, spotMaintenanceStrategiesLocationAndMemberSs.str().c_str());
  }

  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExcessCapacityTerminationPolicy=" << StringUtils::URLEncode(ExcessCapacityTerminationPolicyMapper::GetNameForExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy)) << "&";
  }

  if(m_fulfilledCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }

  if(m_onDemandFulfilledCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".OnDemandFulfilledCapacity=" << StringUtils::URLEncode(m_onDemandFulfilledCapacity) << "&";
  }

  if(m_iamFleetRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamFleetRole=" << StringUtils::URLEncode(m_iamFleetRole.c_str()) << "&";
  }

  if(m_launchSpecificationsHasBeenSet)
  {
      unsigned launchSpecificationsIdx = 1;
      for(auto& item : m_launchSpecifications)
      {
        Aws::StringStream launchSpecificationsSs;
        launchSpecificationsSs << location << index << locationValue << ".LaunchSpecifications." << launchSpecificationsIdx++;
        item.OutputToStream(oStream, launchSpecificationsSs.str().c_str());
      }
  }

  if(m_launchTemplateConfigsHasBeenSet)
  {
      unsigned launchTemplateConfigsIdx = 1;
      for(auto& item : m_launchTemplateConfigs)
      {
        Aws::StringStream launchTemplateConfigsSs;
        launchTemplateConfigsSs << location << index << locationValue << ".LaunchTemplateConfigs." << launchTemplateConfigsIdx++;
        item.OutputToStream(oStream, launchTemplateConfigsSs.str().c_str());
      }
  }

  if(m_spotPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_targetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetCapacity=" << m_targetCapacity << "&";
  }

  if(m_onDemandTargetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandTargetCapacity=" << m_onDemandTargetCapacity << "&";
  }

  if(m_onDemandMaxTotalPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandMaxTotalPrice=" << StringUtils::URLEncode(m_onDemandMaxTotalPrice.c_str()) << "&";
  }

  if(m_spotMaxTotalPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotMaxTotalPrice=" << StringUtils::URLEncode(m_spotMaxTotalPrice.c_str()) << "&";
  }

  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << index << locationValue << ".TerminateInstancesWithExpiration=" << std::boolalpha << m_terminateInstancesWithExpiration << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(FleetTypeMapper::GetNameForFleetType(m_type)) << "&";
  }

  if(m_validFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_replaceUnhealthyInstancesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplaceUnhealthyInstances=" << std::boolalpha << m_replaceUnhealthyInstances << "&";
  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInterruptionBehavior=" << StringUtils::URLEncode(InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior)) << "&";
  }

  if(m_loadBalancersConfigHasBeenSet)
  {
      Aws::StringStream loadBalancersConfigLocationAndMemberSs;
      loadBalancersConfigLocationAndMemberSs << location << index << locationValue << ".LoadBalancersConfig";
      m_loadBalancersConfig.OutputToStream(oStream, loadBalancersConfigLocationAndMemberSs.str().c_str());
  }

  if(m_instancePoolsToUseCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePoolsToUseCount=" << m_instancePoolsToUseCount << "&";
  }

  if(m_contextHasBeenSet)
  {
      oStream << location << index << locationValue << ".Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }

  if(m_targetCapacityUnitTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetCapacityUnitType=" << StringUtils::URLEncode(TargetCapacityUnitTypeMapper::GetNameForTargetCapacityUnitType(m_targetCapacityUnitType)) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
      unsigned tagSpecificationsIdx = 1;
      for(auto& item : m_tagSpecifications)
      {
        Aws::StringStream tagSpecificationsSs;
        tagSpecificationsSs << location << index << locationValue << ".TagSpecification." << tagSpecificationsIdx++;
        item.OutputToStream(oStream, tagSpecificationsSs.str().c_str());
      }
  }

}

void SpotFleetRequestConfigData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << ".AllocationStrategy=" << StringUtils::URLEncode(AllocationStrategyMapper::GetNameForAllocationStrategy(m_allocationStrategy)) << "&";
  }
  if(m_onDemandAllocationStrategyHasBeenSet)
  {
      oStream << location << ".OnDemandAllocationStrategy=" << StringUtils::URLEncode(OnDemandAllocationStrategyMapper::GetNameForOnDemandAllocationStrategy(m_onDemandAllocationStrategy)) << "&";
  }
  if(m_spotMaintenanceStrategiesHasBeenSet)
  {
      Aws::String spotMaintenanceStrategiesLocationAndMember(location);
      spotMaintenanceStrategiesLocationAndMember += ".SpotMaintenanceStrategies";
      m_spotMaintenanceStrategies.OutputToStream(oStream, spotMaintenanceStrategiesLocationAndMember.c_str());
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_excessCapacityTerminationPolicyHasBeenSet)
  {
      oStream << location << ".ExcessCapacityTerminationPolicy=" << StringUtils::URLEncode(ExcessCapacityTerminationPolicyMapper::GetNameForExcessCapacityTerminationPolicy(m_excessCapacityTerminationPolicy)) << "&";
  }
  if(m_fulfilledCapacityHasBeenSet)
  {
      oStream << location << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }
  if(m_onDemandFulfilledCapacityHasBeenSet)
  {
      oStream << location << ".OnDemandFulfilledCapacity=" << StringUtils::URLEncode(m_onDemandFulfilledCapacity) << "&";
  }
  if(m_iamFleetRoleHasBeenSet)
  {
      oStream << location << ".IamFleetRole=" << StringUtils::URLEncode(m_iamFleetRole.c_str()) << "&";
  }
  if(m_launchSpecificationsHasBeenSet)
  {
      unsigned launchSpecificationsIdx = 1;
      for(auto& item : m_launchSpecifications)
      {
        Aws::StringStream launchSpecificationsSs;
        launchSpecificationsSs << location << ".LaunchSpecifications." << launchSpecificationsIdx++;
        item.OutputToStream(oStream, launchSpecificationsSs.str().c_str());
      }
  }
  if(m_launchTemplateConfigsHasBeenSet)
  {
      unsigned launchTemplateConfigsIdx = 1;
      for(auto& item : m_launchTemplateConfigs)
      {
        Aws::StringStream launchTemplateConfigsSs;
        launchTemplateConfigsSs << location << ".LaunchTemplateConfigs." << launchTemplateConfigsIdx++;
        item.OutputToStream(oStream, launchTemplateConfigsSs.str().c_str());
      }
  }
  if(m_spotPriceHasBeenSet)
  {
      oStream << location << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }
  if(m_targetCapacityHasBeenSet)
  {
      oStream << location << ".TargetCapacity=" << m_targetCapacity << "&";
  }
  if(m_onDemandTargetCapacityHasBeenSet)
  {
      oStream << location << ".OnDemandTargetCapacity=" << m_onDemandTargetCapacity << "&";
  }
  if(m_onDemandMaxTotalPriceHasBeenSet)
  {
      oStream << location << ".OnDemandMaxTotalPrice=" << StringUtils::URLEncode(m_onDemandMaxTotalPrice.c_str()) << "&";
  }
  if(m_spotMaxTotalPriceHasBeenSet)
  {
      oStream << location << ".SpotMaxTotalPrice=" << StringUtils::URLEncode(m_spotMaxTotalPrice.c_str()) << "&";
  }
  if(m_terminateInstancesWithExpirationHasBeenSet)
  {
      oStream << location << ".TerminateInstancesWithExpiration=" << std::boolalpha << m_terminateInstancesWithExpiration << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(FleetTypeMapper::GetNameForFleetType(m_type)) << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_validUntilHasBeenSet)
  {
      oStream << location << ".ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_replaceUnhealthyInstancesHasBeenSet)
  {
      oStream << location << ".ReplaceUnhealthyInstances=" << std::boolalpha << m_replaceUnhealthyInstances << "&";
  }
  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInterruptionBehavior=" << StringUtils::URLEncode(InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior)) << "&";
  }
  if(m_loadBalancersConfigHasBeenSet)
  {
      Aws::String loadBalancersConfigLocationAndMember(location);
      loadBalancersConfigLocationAndMember += ".LoadBalancersConfig";
      m_loadBalancersConfig.OutputToStream(oStream, loadBalancersConfigLocationAndMember.c_str());
  }
  if(m_instancePoolsToUseCountHasBeenSet)
  {
      oStream << location << ".InstancePoolsToUseCount=" << m_instancePoolsToUseCount << "&";
  }
  if(m_contextHasBeenSet)
  {
      oStream << location << ".Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }
  if(m_targetCapacityUnitTypeHasBeenSet)
  {
      oStream << location << ".TargetCapacityUnitType=" << StringUtils::URLEncode(TargetCapacityUnitTypeMapper::GetNameForTargetCapacityUnitType(m_targetCapacityUnitType)) << "&";
  }
  if(m_tagSpecificationsHasBeenSet)
  {
      unsigned tagSpecificationsIdx = 1;
      for(auto& item : m_tagSpecifications)
      {
        Aws::StringStream tagSpecificationsSs;
        tagSpecificationsSs << location << ".TagSpecification." << tagSpecificationsIdx++;
        item.OutputToStream(oStream, tagSpecificationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
