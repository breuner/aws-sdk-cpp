/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValue;
import lombok.Data;

import java.util.List;
import java.util.Map;

@Data
public class Operation {
    private String name;
    private Http http;
    private ShapeMember request;
    private ShapeMember result;
    private List<Error> errors;
    private String documentation;
    private boolean supportsPresigning;
    private boolean virtualAddressAllowed;
    private String virtualAddressMemberName;
    private String authtype;
    // Non-empty, priority-ordered list of string auth types.
    // This trait should only be present if its value differs from the service-level trait
    private List<String> auth; // aws.auth#sigv4 | aws.auth#sigv4a | smithy.api#httpBearerAuth | smithy.api#noAuth
    private String signerName;
    private String authorizer;
    private boolean eventStream;
    private boolean supportsChunkedEncoding;

    // Endpoint Rule static context parameters
    private Map<String, Map<String, EndpointParameterValue>> staticContextParams;

    //operation context params
    private Map<String, List<String>> operationContextParamsCode;

    // ARN supports.
    private boolean arnEndpointAllowed;
    private String arnLocation; // uri | querystring | body
    private String arnEndpointMemberName;

    // For S3 Control.
    private boolean hasAccountIdMember;
    private String accountIdMemberName;
    private boolean hasAccountIdInArn;

    // For S3 Outposts.
    private boolean hasOutpostIdMember;
    private String outpostIdMemberName;
    private boolean outpostUseNonArnEndpoint;
    private boolean hasOutpostIdInArn;

    // For S3 Object Lambda.
    private boolean requiresServiceNameOverride;
    private String serviceNameOverride;

    // For S3 Express
    private boolean shouldUsePropertyBag;

    // For Host Prefix Injection.
    private boolean hasEndpointTrait;
    private Endpoint endpoint;

    // For Cellular Request Routing
    private boolean isEndpointOperation;
    private boolean hasEndpointDiscoveryTrait;
    private boolean requireEndpointDiscovery;

    // For pre-signed URL generation
    private boolean hasPreSignedUrl;

    // For S3 CRT
    private boolean s3CrtEnabled;

    // For flexible checksums
    private boolean requestChecksumRequired;
    private String requestAlgorithmMember;
    private String requestValidationModeMember;
    private List<String> responseAlgorithms;

    // for comporession
    private boolean requestCompressionRequired;
    private boolean requestCompressionRequiredGzip;

    // For Requestless Defaults
    private boolean requestlessDefault = false;

    public boolean hasRequest() {
        return this.request != null;
    }

    public void addRequest(final ShapeMember request) {
        this.request = request;
    }
}
