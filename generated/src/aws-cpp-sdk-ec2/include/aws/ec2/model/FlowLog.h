﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrafficType.h>
#include <aws/ec2/model/LogDestinationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/DestinationOptionsResponse.h>
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
   * <p>Describes a flow log.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FlowLog">AWS API
   * Reference</a></p>
   */
  class FlowLog
  {
  public:
    AWS_EC2_API FlowLog();
    AWS_EC2_API FlowLog(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FlowLog& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time the flow log was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FlowLog& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FlowLog& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the error that occurred. <code>Rate limited</code>
     * indicates that CloudWatch Logs throttling has been applied for one or more
     * network interfaces, or that you've reached the limit on the number of log groups
     * that you can create. <code>Access error</code> indicates that the IAM role
     * associated with the flow log does not have sufficient permissions to publish to
     * CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
     */
    inline const Aws::String& GetDeliverLogsErrorMessage() const{ return m_deliverLogsErrorMessage; }
    inline bool DeliverLogsErrorMessageHasBeenSet() const { return m_deliverLogsErrorMessageHasBeenSet; }
    inline void SetDeliverLogsErrorMessage(const Aws::String& value) { m_deliverLogsErrorMessageHasBeenSet = true; m_deliverLogsErrorMessage = value; }
    inline void SetDeliverLogsErrorMessage(Aws::String&& value) { m_deliverLogsErrorMessageHasBeenSet = true; m_deliverLogsErrorMessage = std::move(value); }
    inline void SetDeliverLogsErrorMessage(const char* value) { m_deliverLogsErrorMessageHasBeenSet = true; m_deliverLogsErrorMessage.assign(value); }
    inline FlowLog& WithDeliverLogsErrorMessage(const Aws::String& value) { SetDeliverLogsErrorMessage(value); return *this;}
    inline FlowLog& WithDeliverLogsErrorMessage(Aws::String&& value) { SetDeliverLogsErrorMessage(std::move(value)); return *this;}
    inline FlowLog& WithDeliverLogsErrorMessage(const char* value) { SetDeliverLogsErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role allows the service to publish logs to CloudWatch
     * Logs.</p>
     */
    inline const Aws::String& GetDeliverLogsPermissionArn() const{ return m_deliverLogsPermissionArn; }
    inline bool DeliverLogsPermissionArnHasBeenSet() const { return m_deliverLogsPermissionArnHasBeenSet; }
    inline void SetDeliverLogsPermissionArn(const Aws::String& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = value; }
    inline void SetDeliverLogsPermissionArn(Aws::String&& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = std::move(value); }
    inline void SetDeliverLogsPermissionArn(const char* value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn.assign(value); }
    inline FlowLog& WithDeliverLogsPermissionArn(const Aws::String& value) { SetDeliverLogsPermissionArn(value); return *this;}
    inline FlowLog& WithDeliverLogsPermissionArn(Aws::String&& value) { SetDeliverLogsPermissionArn(std::move(value)); return *this;}
    inline FlowLog& WithDeliverLogsPermissionArn(const char* value) { SetDeliverLogsPermissionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that allows the service to publish flow logs across
     * accounts.</p>
     */
    inline const Aws::String& GetDeliverCrossAccountRole() const{ return m_deliverCrossAccountRole; }
    inline bool DeliverCrossAccountRoleHasBeenSet() const { return m_deliverCrossAccountRoleHasBeenSet; }
    inline void SetDeliverCrossAccountRole(const Aws::String& value) { m_deliverCrossAccountRoleHasBeenSet = true; m_deliverCrossAccountRole = value; }
    inline void SetDeliverCrossAccountRole(Aws::String&& value) { m_deliverCrossAccountRoleHasBeenSet = true; m_deliverCrossAccountRole = std::move(value); }
    inline void SetDeliverCrossAccountRole(const char* value) { m_deliverCrossAccountRoleHasBeenSet = true; m_deliverCrossAccountRole.assign(value); }
    inline FlowLog& WithDeliverCrossAccountRole(const Aws::String& value) { SetDeliverCrossAccountRole(value); return *this;}
    inline FlowLog& WithDeliverCrossAccountRole(Aws::String&& value) { SetDeliverCrossAccountRole(std::move(value)); return *this;}
    inline FlowLog& WithDeliverCrossAccountRole(const char* value) { SetDeliverCrossAccountRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the logs delivery (<code>SUCCESS</code> |
     * <code>FAILED</code>).</p>
     */
    inline const Aws::String& GetDeliverLogsStatus() const{ return m_deliverLogsStatus; }
    inline bool DeliverLogsStatusHasBeenSet() const { return m_deliverLogsStatusHasBeenSet; }
    inline void SetDeliverLogsStatus(const Aws::String& value) { m_deliverLogsStatusHasBeenSet = true; m_deliverLogsStatus = value; }
    inline void SetDeliverLogsStatus(Aws::String&& value) { m_deliverLogsStatusHasBeenSet = true; m_deliverLogsStatus = std::move(value); }
    inline void SetDeliverLogsStatus(const char* value) { m_deliverLogsStatusHasBeenSet = true; m_deliverLogsStatus.assign(value); }
    inline FlowLog& WithDeliverLogsStatus(const Aws::String& value) { SetDeliverLogsStatus(value); return *this;}
    inline FlowLog& WithDeliverLogsStatus(Aws::String&& value) { SetDeliverLogsStatus(std::move(value)); return *this;}
    inline FlowLog& WithDeliverLogsStatus(const char* value) { SetDeliverLogsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the flow log.</p>
     */
    inline const Aws::String& GetFlowLogId() const{ return m_flowLogId; }
    inline bool FlowLogIdHasBeenSet() const { return m_flowLogIdHasBeenSet; }
    inline void SetFlowLogId(const Aws::String& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = value; }
    inline void SetFlowLogId(Aws::String&& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = std::move(value); }
    inline void SetFlowLogId(const char* value) { m_flowLogIdHasBeenSet = true; m_flowLogId.assign(value); }
    inline FlowLog& WithFlowLogId(const Aws::String& value) { SetFlowLogId(value); return *this;}
    inline FlowLog& WithFlowLogId(Aws::String&& value) { SetFlowLogId(std::move(value)); return *this;}
    inline FlowLog& WithFlowLogId(const char* value) { SetFlowLogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow log (<code>ACTIVE</code>).</p>
     */
    inline const Aws::String& GetFlowLogStatus() const{ return m_flowLogStatus; }
    inline bool FlowLogStatusHasBeenSet() const { return m_flowLogStatusHasBeenSet; }
    inline void SetFlowLogStatus(const Aws::String& value) { m_flowLogStatusHasBeenSet = true; m_flowLogStatus = value; }
    inline void SetFlowLogStatus(Aws::String&& value) { m_flowLogStatusHasBeenSet = true; m_flowLogStatus = std::move(value); }
    inline void SetFlowLogStatus(const char* value) { m_flowLogStatusHasBeenSet = true; m_flowLogStatus.assign(value); }
    inline FlowLog& WithFlowLogStatus(const Aws::String& value) { SetFlowLogStatus(value); return *this;}
    inline FlowLog& WithFlowLogStatus(Aws::String&& value) { SetFlowLogStatus(std::move(value)); return *this;}
    inline FlowLog& WithFlowLogStatus(const char* value) { SetFlowLogStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline FlowLog& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline FlowLog& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline FlowLog& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource being monitored.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline FlowLog& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline FlowLog& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline FlowLog& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic captured for the flow log.</p>
     */
    inline const TrafficType& GetTrafficType() const{ return m_trafficType; }
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }
    inline void SetTrafficType(const TrafficType& value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }
    inline void SetTrafficType(TrafficType&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::move(value); }
    inline FlowLog& WithTrafficType(const TrafficType& value) { SetTrafficType(value); return *this;}
    inline FlowLog& WithTrafficType(TrafficType&& value) { SetTrafficType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of destination for the flow log data.</p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = std::move(value); }
    inline FlowLog& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}
    inline FlowLog& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination for the flow log data.</p>
     */
    inline const Aws::String& GetLogDestination() const{ return m_logDestination; }
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }
    inline void SetLogDestination(const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }
    inline void SetLogDestination(Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::move(value); }
    inline void SetLogDestination(const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.assign(value); }
    inline FlowLog& WithLogDestination(const Aws::String& value) { SetLogDestination(value); return *this;}
    inline FlowLog& WithLogDestination(Aws::String&& value) { SetLogDestination(std::move(value)); return *this;}
    inline FlowLog& WithLogDestination(const char* value) { SetLogDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the flow log record.</p>
     */
    inline const Aws::String& GetLogFormat() const{ return m_logFormat; }
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }
    inline void SetLogFormat(const Aws::String& value) { m_logFormatHasBeenSet = true; m_logFormat = value; }
    inline void SetLogFormat(Aws::String&& value) { m_logFormatHasBeenSet = true; m_logFormat = std::move(value); }
    inline void SetLogFormat(const char* value) { m_logFormatHasBeenSet = true; m_logFormat.assign(value); }
    inline FlowLog& WithLogFormat(const Aws::String& value) { SetLogFormat(value); return *this;}
    inline FlowLog& WithLogFormat(Aws::String&& value) { SetLogFormat(std::move(value)); return *this;}
    inline FlowLog& WithLogFormat(const char* value) { SetLogFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the flow log.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline FlowLog& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline FlowLog& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline FlowLog& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline FlowLog& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum interval of time, in seconds, during which a flow of packets is
     * captured and aggregated into a flow log record.</p> <p>When a network interface
     * is attached to a <a
     * href="https://docs.aws.amazon.com/ec2/latest/instancetypes/ec2-nitro-instances.html">Nitro-based
     * instance</a>, the aggregation interval is always 60 seconds (1 minute) or less,
     * regardless of the specified value.</p> <p>Valid Values: <code>60</code> |
     * <code>600</code> </p>
     */
    inline int GetMaxAggregationInterval() const{ return m_maxAggregationInterval; }
    inline bool MaxAggregationIntervalHasBeenSet() const { return m_maxAggregationIntervalHasBeenSet; }
    inline void SetMaxAggregationInterval(int value) { m_maxAggregationIntervalHasBeenSet = true; m_maxAggregationInterval = value; }
    inline FlowLog& WithMaxAggregationInterval(int value) { SetMaxAggregationInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination options.</p>
     */
    inline const DestinationOptionsResponse& GetDestinationOptions() const{ return m_destinationOptions; }
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }
    inline void SetDestinationOptions(const DestinationOptionsResponse& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = value; }
    inline void SetDestinationOptions(DestinationOptionsResponse&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::move(value); }
    inline FlowLog& WithDestinationOptions(const DestinationOptionsResponse& value) { SetDestinationOptions(value); return *this;}
    inline FlowLog& WithDestinationOptions(DestinationOptionsResponse&& value) { SetDestinationOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_deliverLogsErrorMessage;
    bool m_deliverLogsErrorMessageHasBeenSet = false;

    Aws::String m_deliverLogsPermissionArn;
    bool m_deliverLogsPermissionArnHasBeenSet = false;

    Aws::String m_deliverCrossAccountRole;
    bool m_deliverCrossAccountRoleHasBeenSet = false;

    Aws::String m_deliverLogsStatus;
    bool m_deliverLogsStatusHasBeenSet = false;

    Aws::String m_flowLogId;
    bool m_flowLogIdHasBeenSet = false;

    Aws::String m_flowLogStatus;
    bool m_flowLogStatusHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TrafficType m_trafficType;
    bool m_trafficTypeHasBeenSet = false;

    LogDestinationType m_logDestinationType;
    bool m_logDestinationTypeHasBeenSet = false;

    Aws::String m_logDestination;
    bool m_logDestinationHasBeenSet = false;

    Aws::String m_logFormat;
    bool m_logFormatHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_maxAggregationInterval;
    bool m_maxAggregationIntervalHasBeenSet = false;

    DestinationOptionsResponse m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
