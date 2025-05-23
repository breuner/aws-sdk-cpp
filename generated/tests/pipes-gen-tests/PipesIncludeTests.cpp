/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/pipes/PipesClient.h>
#include <aws/pipes/PipesEndpointProvider.h>
#include <aws/pipes/PipesEndpointRules.h>
#include <aws/pipes/PipesErrorMarshaller.h>
#include <aws/pipes/PipesErrors.h>
#include <aws/pipes/PipesRequest.h>
#include <aws/pipes/PipesServiceClientModel.h>
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/AssignPublicIp.h>
#include <aws/pipes/model/AwsVpcConfiguration.h>
#include <aws/pipes/model/BatchArrayProperties.h>
#include <aws/pipes/model/BatchContainerOverrides.h>
#include <aws/pipes/model/BatchEnvironmentVariable.h>
#include <aws/pipes/model/BatchJobDependency.h>
#include <aws/pipes/model/BatchJobDependencyType.h>
#include <aws/pipes/model/BatchResourceRequirement.h>
#include <aws/pipes/model/BatchResourceRequirementType.h>
#include <aws/pipes/model/BatchRetryStrategy.h>
#include <aws/pipes/model/CapacityProviderStrategyItem.h>
#include <aws/pipes/model/CloudwatchLogsLogDestination.h>
#include <aws/pipes/model/CloudwatchLogsLogDestinationParameters.h>
#include <aws/pipes/model/ConflictException.h>
#include <aws/pipes/model/CreatePipeRequest.h>
#include <aws/pipes/model/CreatePipeResult.h>
#include <aws/pipes/model/DeadLetterConfig.h>
#include <aws/pipes/model/DeletePipeRequest.h>
#include <aws/pipes/model/DeletePipeResult.h>
#include <aws/pipes/model/DescribePipeRequest.h>
#include <aws/pipes/model/DescribePipeResult.h>
#include <aws/pipes/model/DimensionMapping.h>
#include <aws/pipes/model/DimensionValueType.h>
#include <aws/pipes/model/DynamoDBStreamStartPosition.h>
#include <aws/pipes/model/EcsContainerOverride.h>
#include <aws/pipes/model/EcsEnvironmentFile.h>
#include <aws/pipes/model/EcsEnvironmentFileType.h>
#include <aws/pipes/model/EcsEnvironmentVariable.h>
#include <aws/pipes/model/EcsEphemeralStorage.h>
#include <aws/pipes/model/EcsInferenceAcceleratorOverride.h>
#include <aws/pipes/model/EcsResourceRequirement.h>
#include <aws/pipes/model/EcsResourceRequirementType.h>
#include <aws/pipes/model/EcsTaskOverride.h>
#include <aws/pipes/model/EpochTimeUnit.h>
#include <aws/pipes/model/Filter.h>
#include <aws/pipes/model/FilterCriteria.h>
#include <aws/pipes/model/FirehoseLogDestination.h>
#include <aws/pipes/model/FirehoseLogDestinationParameters.h>
#include <aws/pipes/model/IncludeExecutionDataOption.h>
#include <aws/pipes/model/InternalException.h>
#include <aws/pipes/model/KinesisStreamStartPosition.h>
#include <aws/pipes/model/LaunchType.h>
#include <aws/pipes/model/ListPipesRequest.h>
#include <aws/pipes/model/ListPipesResult.h>
#include <aws/pipes/model/ListTagsForResourceRequest.h>
#include <aws/pipes/model/ListTagsForResourceResult.h>
#include <aws/pipes/model/LogLevel.h>
#include <aws/pipes/model/MQBrokerAccessCredentials.h>
#include <aws/pipes/model/MSKAccessCredentials.h>
#include <aws/pipes/model/MSKStartPosition.h>
#include <aws/pipes/model/MeasureValueType.h>
#include <aws/pipes/model/MultiMeasureAttributeMapping.h>
#include <aws/pipes/model/MultiMeasureMapping.h>
#include <aws/pipes/model/NetworkConfiguration.h>
#include <aws/pipes/model/OnPartialBatchItemFailureStreams.h>
#include <aws/pipes/model/Pipe.h>
#include <aws/pipes/model/PipeEnrichmentHttpParameters.h>
#include <aws/pipes/model/PipeEnrichmentParameters.h>
#include <aws/pipes/model/PipeLogConfiguration.h>
#include <aws/pipes/model/PipeLogConfigurationParameters.h>
#include <aws/pipes/model/PipeSourceActiveMQBrokerParameters.h>
#include <aws/pipes/model/PipeSourceDynamoDBStreamParameters.h>
#include <aws/pipes/model/PipeSourceKinesisStreamParameters.h>
#include <aws/pipes/model/PipeSourceManagedStreamingKafkaParameters.h>
#include <aws/pipes/model/PipeSourceParameters.h>
#include <aws/pipes/model/PipeSourceRabbitMQBrokerParameters.h>
#include <aws/pipes/model/PipeSourceSelfManagedKafkaParameters.h>
#include <aws/pipes/model/PipeSourceSqsQueueParameters.h>
#include <aws/pipes/model/PipeState.h>
#include <aws/pipes/model/PipeTargetBatchJobParameters.h>
#include <aws/pipes/model/PipeTargetCloudWatchLogsParameters.h>
#include <aws/pipes/model/PipeTargetEcsTaskParameters.h>
#include <aws/pipes/model/PipeTargetEventBridgeEventBusParameters.h>
#include <aws/pipes/model/PipeTargetHttpParameters.h>
#include <aws/pipes/model/PipeTargetInvocationType.h>
#include <aws/pipes/model/PipeTargetKinesisStreamParameters.h>
#include <aws/pipes/model/PipeTargetLambdaFunctionParameters.h>
#include <aws/pipes/model/PipeTargetParameters.h>
#include <aws/pipes/model/PipeTargetRedshiftDataParameters.h>
#include <aws/pipes/model/PipeTargetSageMakerPipelineParameters.h>
#include <aws/pipes/model/PipeTargetSqsQueueParameters.h>
#include <aws/pipes/model/PipeTargetStateMachineParameters.h>
#include <aws/pipes/model/PipeTargetTimestreamParameters.h>
#include <aws/pipes/model/PlacementConstraint.h>
#include <aws/pipes/model/PlacementConstraintType.h>
#include <aws/pipes/model/PlacementStrategy.h>
#include <aws/pipes/model/PlacementStrategyType.h>
#include <aws/pipes/model/PropagateTags.h>
#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/pipes/model/RequestedPipeStateDescribeResponse.h>
#include <aws/pipes/model/S3LogDestination.h>
#include <aws/pipes/model/S3LogDestinationParameters.h>
#include <aws/pipes/model/S3OutputFormat.h>
#include <aws/pipes/model/SageMakerPipelineParameter.h>
#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationCredentials.h>
#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationVpc.h>
#include <aws/pipes/model/SelfManagedKafkaStartPosition.h>
#include <aws/pipes/model/ServiceQuotaExceededException.h>
#include <aws/pipes/model/SingleMeasureMapping.h>
#include <aws/pipes/model/StartPipeRequest.h>
#include <aws/pipes/model/StartPipeResult.h>
#include <aws/pipes/model/StopPipeRequest.h>
#include <aws/pipes/model/StopPipeResult.h>
#include <aws/pipes/model/Tag.h>
#include <aws/pipes/model/TagResourceRequest.h>
#include <aws/pipes/model/TagResourceResult.h>
#include <aws/pipes/model/ThrottlingException.h>
#include <aws/pipes/model/TimeFieldType.h>
#include <aws/pipes/model/UntagResourceRequest.h>
#include <aws/pipes/model/UntagResourceResult.h>
#include <aws/pipes/model/UpdatePipeRequest.h>
#include <aws/pipes/model/UpdatePipeResult.h>
#include <aws/pipes/model/UpdatePipeSourceActiveMQBrokerParameters.h>
#include <aws/pipes/model/UpdatePipeSourceDynamoDBStreamParameters.h>
#include <aws/pipes/model/UpdatePipeSourceKinesisStreamParameters.h>
#include <aws/pipes/model/UpdatePipeSourceManagedStreamingKafkaParameters.h>
#include <aws/pipes/model/UpdatePipeSourceParameters.h>
#include <aws/pipes/model/UpdatePipeSourceRabbitMQBrokerParameters.h>
#include <aws/pipes/model/UpdatePipeSourceSelfManagedKafkaParameters.h>
#include <aws/pipes/model/UpdatePipeSourceSqsQueueParameters.h>
#include <aws/pipes/model/ValidationException.h>
#include <aws/pipes/model/ValidationExceptionField.h>

using PipesIncludeTest = ::testing::Test;

TEST_F(PipesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Pipes::PipesClient>("PipesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
