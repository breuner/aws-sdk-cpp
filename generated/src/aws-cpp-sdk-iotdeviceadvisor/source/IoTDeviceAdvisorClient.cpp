﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClient.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorErrorMarshaller.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointProvider.h>
#include <aws/iotdeviceadvisor/model/CreateSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/GetEndpointRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/GetSuiteRunReportRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsRequest.h>
#include <aws/iotdeviceadvisor/model/ListTagsForResourceRequest.h>
#include <aws/iotdeviceadvisor/model/StartSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/StopSuiteRunRequest.h>
#include <aws/iotdeviceadvisor/model/TagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/UntagResourceRequest.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTDeviceAdvisor;
using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace IoTDeviceAdvisor
  {
    const char ALLOCATION_TAG[] = "IoTDeviceAdvisorClient";
    const char SERVICE_NAME[] = "iotdeviceadvisor";
  }
}
const char* IoTDeviceAdvisorClient::GetServiceName() {return SERVICE_NAME;}
const char* IoTDeviceAdvisorClient::GetAllocationTag() {return ALLOCATION_TAG;}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration,
                           std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IotDeviceAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const AWSCredentials& credentials,
                           std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider,
                           const IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IotDeviceAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase> endpointProvider,
                           const IoTDeviceAdvisor::IoTDeviceAdvisorClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IotDeviceAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "IotDeviceAdvisor",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IotDeviceAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IotDeviceAdvisor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTDeviceAdvisorErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<IoTDeviceAdvisorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

IoTDeviceAdvisorClient::~IoTDeviceAdvisorClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<IoTDeviceAdvisorEndpointProviderBase>& IoTDeviceAdvisorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTDeviceAdvisorClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateSuiteDefinitionOutcome IoTDeviceAdvisorClient::CreateSuiteDefinition(const CreateSuiteDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSuiteDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSuiteDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSuiteDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSuiteDefinitionOutcome>(
    [&]()-> CreateSuiteDefinitionOutcome {
      return CreateSuiteDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSuiteDefinitionOutcome IoTDeviceAdvisorClient::DeleteSuiteDefinition(const DeleteSuiteDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSuiteDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSuiteDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return DeleteSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSuiteDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSuiteDefinitionOutcome>(
    [&]()-> DeleteSuiteDefinitionOutcome {
      return DeleteSuiteDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteDefinitionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEndpointOutcome IoTDeviceAdvisorClient::GetEndpoint(const GetEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(GetEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEndpointOutcome>(
    [&]()-> GetEndpointOutcome {
      return GetEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/endpoint");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSuiteDefinitionOutcome IoTDeviceAdvisorClient::GetSuiteDefinition(const GetSuiteDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSuiteDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSuiteDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSuiteDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSuiteDefinitionOutcome>(
    [&]()-> GetSuiteDefinitionOutcome {
      return GetSuiteDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteDefinitionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSuiteRunOutcome IoTDeviceAdvisorClient::GetSuiteRun(const GetSuiteRunRequest& request) const
{
  AWS_OPERATION_GUARD(GetSuiteRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSuiteRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRun", "Required field: SuiteRunId, is not set");
    return GetSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSuiteRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSuiteRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSuiteRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSuiteRunOutcome>(
    [&]()-> GetSuiteRunOutcome {
      return GetSuiteRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteDefinitionId());
      resolvedEndpoint.AddPathSegments("/suiteRuns/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteRunId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSuiteRunReportOutcome IoTDeviceAdvisorClient::GetSuiteRunReport(const GetSuiteRunReportRequest& request) const
{
  AWS_OPERATION_GUARD(GetSuiteRunReport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSuiteRunReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRunReport", "Required field: SuiteDefinitionId, is not set");
    return GetSuiteRunReportOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuiteRunReport", "Required field: SuiteRunId, is not set");
    return GetSuiteRunReportOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSuiteRunReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSuiteRunReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSuiteRunReport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSuiteRunReportOutcome>(
    [&]()-> GetSuiteRunReportOutcome {
      return GetSuiteRunReportOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteDefinitionId());
      resolvedEndpoint.AddPathSegments("/suiteRuns/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteRunId());
      resolvedEndpoint.AddPathSegments("/report");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSuiteDefinitionsOutcome IoTDeviceAdvisorClient::ListSuiteDefinitions(const ListSuiteDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSuiteDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSuiteDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSuiteDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSuiteDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSuiteDefinitions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSuiteDefinitionsOutcome>(
    [&]()-> ListSuiteDefinitionsOutcome {
      return ListSuiteDefinitionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSuiteRunsOutcome IoTDeviceAdvisorClient::ListSuiteRuns(const ListSuiteRunsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSuiteRuns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSuiteRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSuiteRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSuiteRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSuiteRuns",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSuiteRunsOutcome>(
    [&]()-> ListSuiteRunsOutcome {
      return ListSuiteRunsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteRuns");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome IoTDeviceAdvisorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartSuiteRunOutcome IoTDeviceAdvisorClient::StartSuiteRun(const StartSuiteRunRequest& request) const
{
  AWS_OPERATION_GUARD(StartSuiteRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSuiteRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return StartSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartSuiteRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartSuiteRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartSuiteRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartSuiteRunOutcome>(
    [&]()-> StartSuiteRunOutcome {
      return StartSuiteRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteDefinitionId());
      resolvedEndpoint.AddPathSegments("/suiteRuns");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopSuiteRunOutcome IoTDeviceAdvisorClient::StopSuiteRun(const StopSuiteRunRequest& request) const
{
  AWS_OPERATION_GUARD(StopSuiteRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopSuiteRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSuiteRun", "Required field: SuiteDefinitionId, is not set");
    return StopSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  if (!request.SuiteRunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopSuiteRun", "Required field: SuiteRunId, is not set");
    return StopSuiteRunOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopSuiteRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopSuiteRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopSuiteRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopSuiteRunOutcome>(
    [&]()-> StopSuiteRunOutcome {
      return StopSuiteRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteDefinitionId());
      resolvedEndpoint.AddPathSegments("/suiteRuns/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteRunId());
      resolvedEndpoint.AddPathSegments("/stop");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome IoTDeviceAdvisorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome IoTDeviceAdvisorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSuiteDefinitionOutcome IoTDeviceAdvisorClient::UpdateSuiteDefinition(const UpdateSuiteDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSuiteDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSuiteDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SuiteDefinitionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSuiteDefinition", "Required field: SuiteDefinitionId, is not set");
    return UpdateSuiteDefinitionOutcome(Aws::Client::AWSError<IoTDeviceAdvisorErrors>(IoTDeviceAdvisorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SuiteDefinitionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSuiteDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSuiteDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSuiteDefinitionOutcome>(
    [&]()-> UpdateSuiteDefinitionOutcome {
      return UpdateSuiteDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/suiteDefinitions/");
      resolvedEndpoint.AddPathSegment(request.GetSuiteDefinitionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


