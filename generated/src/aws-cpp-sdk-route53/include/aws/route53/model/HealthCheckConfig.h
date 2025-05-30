﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HealthCheckType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/AlarmIdentifier.h>
#include <aws/route53/model/InsufficientDataHealthStatus.h>
#include <aws/route53/model/HealthCheckRegion.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the health
   * check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HealthCheckConfig">AWS
   * API Reference</a></p>
   */
  class HealthCheckConfig
  {
  public:
    AWS_ROUTE53_API HealthCheckConfig() = default;
    AWS_ROUTE53_API HealthCheckConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HealthCheckConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The IPv4 or IPv6 IP address of the endpoint that you want Amazon Route 53 to
     * perform health checks on. If you don't specify a value for
     * <code>IPAddress</code>, Route 53 sends a DNS request to resolve the domain name
     * that you specify in <code>FullyQualifiedDomainName</code> at the interval that
     * you specify in <code>RequestInterval</code>. Using an IP address returned by
     * DNS, Route 53 then checks the health of the endpoint.</p> <p>Use one of the
     * following formats for the value of <code>IPAddress</code>: </p> <ul> <li> <p>
     * <b>IPv4 address</b>: four values between 0 and 255, separated by periods (.),
     * for example, <code>192.0.2.44</code>.</p> </li> <li> <p> <b>IPv6 address</b>:
     * eight groups of four hexadecimal values, separated by colons (:), for example,
     * <code>2001:0db8:85a3:0000:0000:abcd:0001:2345</code>. You can also shorten IPv6
     * addresses as described in RFC 5952, for example,
     * <code>2001:db8:85a3::abcd:1:2345</code>.</p> </li> </ul> <p>If the endpoint is
     * an EC2 instance, we recommend that you create an Elastic IP address, associate
     * it with your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance will
     * never change.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_UpdateHealthCheck.html#Route53-UpdateHealthCheck-request-FullyQualifiedDomainName">FullyQualifiedDomainName</a>.
     * </p> <p>Constraints: Route 53 can't check the health of endpoints for which the
     * IP address is in local, private, non-routable, or multicast ranges. For more
     * information about IP addresses for which you can't create health checks, see the
     * following documents:</p> <ul> <li> <p> <a
     * href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> </p> </li> <li> <p> <a
     * href="https://tools.ietf.org/html/rfc6598">RFC 6598, IANA-Reserved IPv4 Prefix
     * for Shared Address Space</a> </p> </li> <li> <p> <a
     * href="https://tools.ietf.org/html/rfc5156">RFC 5156, Special-Use IPv6
     * Addresses</a> </p> </li> </ul> <p>When the value of <code>Type</code> is
     * <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * <code>IPAddress</code>.</p>
     */
    inline const Aws::String& GetIPAddress() const { return m_iPAddress; }
    inline bool IPAddressHasBeenSet() const { return m_iPAddressHasBeenSet; }
    template<typename IPAddressT = Aws::String>
    void SetIPAddress(IPAddressT&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::forward<IPAddressT>(value); }
    template<typename IPAddressT = Aws::String>
    HealthCheckConfig& WithIPAddress(IPAddressT&& value) { SetIPAddress(std::forward<IPAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on the endpoint that you want Amazon Route 53 to perform health
     * checks on.</p>  <p>Don't specify a value for <code>Port</code> when you
     * specify a value for <code>Type</code> of <code>CLOUDWATCH_METRIC</code> or
     * <code>CALCULATED</code>.</p> 
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline HealthCheckConfig& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p>  <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     *  <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Route 53 tries to establish a TCP connection. If
     * successful, Route 53 submits an HTTP request and waits for an HTTP status code
     * of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an HTTPS
     * request and waits for an HTTP status code of 200 or greater and less than
     * 400.</p>  <p>If you specify <code>HTTPS</code> for the value of
     * <code>Type</code>, the endpoint must support TLS v1.0, v1.1, or v1.2.</p>
     *  </li> <li> <p> <b>HTTP_STR_MATCH</b>: Route 53 tries to establish a
     * TCP connection. If successful, Route 53 submits an HTTP request and searches the
     * first 5,120 bytes of the response body for the string that you specify in
     * <code>SearchString</code>.</p> </li> <li> <p> <b>HTTPS_STR_MATCH</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an
     * <code>HTTPS</code> request and searches the first 5,120 bytes of the response
     * body for the string that you specify in <code>SearchString</code>.</p> </li>
     * <li> <p> <b>TCP</b>: Route 53 tries to establish a TCP connection.</p> </li>
     * <li> <p> <b>CLOUDWATCH_METRIC</b>: The health check is associated with a
     * CloudWatch alarm. If the state of the alarm is <code>OK</code>, the health check
     * is considered healthy. If the state is <code>ALARM</code>, the health check is
     * considered unhealthy. If CloudWatch doesn't have sufficient data to determine
     * whether the state is <code>OK</code> or <code>ALARM</code>, the health check
     * status depends on the setting for <code>InsufficientDataHealthStatus</code>:
     * <code>Healthy</code>, <code>Unhealthy</code>, or <code>LastKnownStatus</code>.
     * </p> </li> <li> <p> <b>CALCULATED</b>: For health checks that monitor the status
     * of other health checks, Route 53 adds up the number of health checks that Route
     * 53 health checkers consider to be healthy and compares that number with the
     * value of <code>HealthThreshold</code>. </p> </li> <li> <p>
     * <b>RECOVERY_CONTROL</b>: The health check is associated with a Route53
     * Application Recovery Controller routing control. If the routing control state is
     * <code>ON</code>, the health check is considered healthy. If the state is
     * <code>OFF</code>, the health check is considered unhealthy. </p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline HealthCheckType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HealthCheckType value) { m_typeHasBeenSet = true; m_type = value; }
    inline HealthCheckConfig& WithType(HealthCheckType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. You can also include query string
     * parameters, for example, <code>/welcome.html?language=jp&amp;login=y</code>.
     * </p>
     */
    inline const Aws::String& GetResourcePath() const { return m_resourcePath; }
    inline bool ResourcePathHasBeenSet() const { return m_resourcePathHasBeenSet; }
    template<typename ResourcePathT = Aws::String>
    void SetResourcePath(ResourcePathT&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = std::forward<ResourcePathT>(value); }
    template<typename ResourcePathT = Aws::String>
    HealthCheckConfig& WithResourcePath(ResourcePathT&& value) { SetResourcePath(std::forward<ResourcePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <p> <b>If you specify a value for</b>
     * <code>IPAddress</code>:</p> <p>Amazon Route 53 sends health check requests to
     * the specified IPv4 or IPv6 address and passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header for all
     * health checks except TCP health checks. This is typically the fully qualified
     * DNS name of the endpoint on which you want Route 53 to perform health
     * checks.</p> <p>When Route 53 checks the health of an endpoint, here is how it
     * constructs the <code>Host</code> header:</p> <ul> <li> <p>If you specify a value
     * of <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the Host header. </p>
     * </li> <li> <p>If you specify a value of <code>443</code> for <code>Port</code>
     * and <code>HTTPS</code> or <code>HTTPS_STR_MATCH</code> for <code>Type</code>,
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> <li> <p>If you specify
     * another value for <code>Port</code> and any value except <code>TCP</code> for
     * <code>Type</code>, Route 53 passes <code>FullyQualifiedDomainName:Port</code> to
     * the endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Route 53 substitutes
     * the value of <code>IPAddress</code> in the <code>Host</code> header in each of
     * the preceding cases.</p> <p> <b>If you don't specify a value for</b>
     * <code>IPAddress</code>:</p> <p>Route 53 sends a DNS request to the domain that
     * you specify for <code>FullyQualifiedDomainName</code> at the interval that you
     * specify for <code>RequestInterval</code>. Using an IPv4 address that DNS
     * returns, Route 53 then checks the health of the endpoint.</p>  <p>If you
     * don't specify a value for <code>IPAddress</code>, Route 53 uses only IPv4 to
     * send health checks to the endpoint. If there's no resource record set with a
     * type of A for the name that you specify for
     * <code>FullyQualifiedDomainName</code>, the health check fails with a "DNS
     * resolution failed" error.</p>  <p>If you want to check the health of
     * weighted, latency, or failover resource record sets and you choose to specify
     * the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend that
     * you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-2-www.example.com), not the name of the resource
     * record sets (www.example.com).</p>  <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p>  <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Route 53 doesn't pass a <code>Host</code>
     * header.</p>
     */
    inline const Aws::String& GetFullyQualifiedDomainName() const { return m_fullyQualifiedDomainName; }
    inline bool FullyQualifiedDomainNameHasBeenSet() const { return m_fullyQualifiedDomainNameHasBeenSet; }
    template<typename FullyQualifiedDomainNameT = Aws::String>
    void SetFullyQualifiedDomainName(FullyQualifiedDomainNameT&& value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName = std::forward<FullyQualifiedDomainNameT>(value); }
    template<typename FullyQualifiedDomainNameT = Aws::String>
    HealthCheckConfig& WithFullyQualifiedDomainName(FullyQualifiedDomainNameT&& value) { SetFullyQualifiedDomainName(std::forward<FullyQualifiedDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTPS_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Route 53 considers the resource healthy.</p> <p>Route 53
     * considers case when searching for <code>SearchString</code> in the response
     * body. </p>
     */
    inline const Aws::String& GetSearchString() const { return m_searchString; }
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }
    template<typename SearchStringT = Aws::String>
    void SetSearchString(SearchStringT&& value) { m_searchStringHasBeenSet = true; m_searchString = std::forward<SearchStringT>(value); }
    template<typename SearchStringT = Aws::String>
    HealthCheckConfig& WithSearchString(SearchStringT&& value) { SetSearchString(std::forward<SearchStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds between the time that Amazon Route 53 gets a response
     * from your endpoint and the time that it sends the next health check request.
     * Each Route 53 health checker makes requests at this interval.</p> 
     * <p>You can't change the value of <code>RequestInterval</code> after you create a
     * health check.</p>  <p>If you don't specify a value for
     * <code>RequestInterval</code>, the default value is <code>30</code> seconds.</p>
     */
    inline int GetRequestInterval() const { return m_requestInterval; }
    inline bool RequestIntervalHasBeenSet() const { return m_requestIntervalHasBeenSet; }
    inline void SetRequestInterval(int value) { m_requestIntervalHasBeenSet = true; m_requestInterval = value; }
    inline HealthCheckConfig& WithRequestInterval(int value) { SetRequestInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p> <p>If you don't specify a value for
     * <code>FailureThreshold</code>, the default value is three health checks.</p>
     */
    inline int GetFailureThreshold() const { return m_failureThreshold; }
    inline bool FailureThresholdHasBeenSet() const { return m_failureThresholdHasBeenSet; }
    inline void SetFailureThreshold(int value) { m_failureThresholdHasBeenSet = true; m_failureThreshold = value; }
    inline HealthCheckConfig& WithFailureThreshold(int value) { SetFailureThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether you want Amazon Route 53 to measure the latency between
     * health checkers in multiple Amazon Web Services regions and your endpoint, and
     * to display CloudWatch latency graphs on the <b>Health Checks</b> page in the
     * Route 53 console.</p>  <p>You can't change the value of
     * <code>MeasureLatency</code> after you create a health check.</p> 
     */
    inline bool GetMeasureLatency() const { return m_measureLatency; }
    inline bool MeasureLatencyHasBeenSet() const { return m_measureLatencyHasBeenSet; }
    inline void SetMeasureLatency(bool value) { m_measureLatencyHasBeenSet = true; m_measureLatency = value; }
    inline HealthCheckConfig& WithMeasureLatency(bool value) { SetMeasureLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether you want Amazon Route 53 to invert the status of a health
     * check, for example, to consider a health check unhealthy when it otherwise would
     * be considered healthy.</p>
     */
    inline bool GetInverted() const { return m_inverted; }
    inline bool InvertedHasBeenSet() const { return m_invertedHasBeenSet; }
    inline void SetInverted(bool value) { m_invertedHasBeenSet = true; m_inverted = value; }
    inline HealthCheckConfig& WithInverted(bool value) { SetInverted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stops Route 53 from performing health checks. When you disable a health
     * check, here's what happens:</p> <ul> <li> <p> <b>Health checks that check the
     * health of endpoints:</b> Route 53 stops submitting requests to your application,
     * server, or other resource.</p> </li> <li> <p> <b>Calculated health checks:</b>
     * Route 53 stops aggregating the status of the referenced health checks.</p> </li>
     * <li> <p> <b>Health checks that monitor CloudWatch alarms:</b> Route 53 stops
     * monitoring the corresponding CloudWatch metrics.</p> </li> </ul> <p>After you
     * disable a health check, Route 53 considers the status of the health check to
     * always be healthy. If you configured DNS failover, Route 53 continues to route
     * traffic to the corresponding resources. If you want to stop routing traffic to a
     * resource, change the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_UpdateHealthCheck.html#Route53-UpdateHealthCheck-request-Inverted">Inverted</a>.
     * </p> <p>Charges for a health check still apply when the health check is
     * disabled. For more information, see <a
     * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline HealthCheckConfig& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of child health checks that are associated with a
     * <code>CALCULATED</code> health check that Amazon Route 53 must consider healthy
     * for the <code>CALCULATED</code> health check to be considered healthy. To
     * specify the child health checks that you want to associate with a
     * <code>CALCULATED</code> health check, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_UpdateHealthCheck.html#Route53-UpdateHealthCheck-request-ChildHealthChecks">ChildHealthChecks</a>
     * element.</p> <p>Note the following:</p> <ul> <li> <p>If you specify a number
     * greater than the number of child health checks, Route 53 always considers this
     * health check to be unhealthy.</p> </li> <li> <p>If you specify <code>0</code>,
     * Route 53 always considers this health check to be healthy.</p> </li> </ul>
     */
    inline int GetHealthThreshold() const { return m_healthThreshold; }
    inline bool HealthThresholdHasBeenSet() const { return m_healthThresholdHasBeenSet; }
    inline void SetHealthThreshold(int value) { m_healthThresholdHasBeenSet = true; m_healthThreshold = value; }
    inline HealthCheckConfig& WithHealthThreshold(int value) { SetHealthThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChildHealthChecks() const { return m_childHealthChecks; }
    inline bool ChildHealthChecksHasBeenSet() const { return m_childHealthChecksHasBeenSet; }
    template<typename ChildHealthChecksT = Aws::Vector<Aws::String>>
    void SetChildHealthChecks(ChildHealthChecksT&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = std::forward<ChildHealthChecksT>(value); }
    template<typename ChildHealthChecksT = Aws::Vector<Aws::String>>
    HealthCheckConfig& WithChildHealthChecks(ChildHealthChecksT&& value) { SetChildHealthChecks(std::forward<ChildHealthChecksT>(value)); return *this;}
    template<typename ChildHealthChecksT = Aws::String>
    HealthCheckConfig& AddChildHealthChecks(ChildHealthChecksT&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.emplace_back(std::forward<ChildHealthChecksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during TLS negotiation. This allows the
     * endpoint to respond to <code>HTTPS</code> health check requests with the
     * applicable SSL/TLS certificate.</p> <p>Some endpoints require that
     * <code>HTTPS</code> requests include the host name in the
     * <code>client_hello</code> message. If you don't enable SNI, the status of the
     * health check will be <code>SSL alert handshake_failure</code>. A health check
     * can also have that status for other reasons. If SNI is enabled and you're still
     * getting the error, check the SSL/TLS configuration on your endpoint and confirm
     * that your certificate is valid.</p> <p>The SSL/TLS certificate on your endpoint
     * includes a domain name in the <code>Common Name</code> field and possibly
     * several more in the <code>Subject Alternative Names</code> field. One of the
     * domain names in the certificate should match the value that you specify for
     * <code>FullyQualifiedDomainName</code>. If the endpoint responds to the
     * <code>client_hello</code> message with a certificate that does not include the
     * domain name that you specified in <code>FullyQualifiedDomainName</code>, a
     * health checker will retry the handshake. In the second attempt, the health
     * checker will omit <code>FullyQualifiedDomainName</code> from the
     * <code>client_hello</code> message.</p>
     */
    inline bool GetEnableSNI() const { return m_enableSNI; }
    inline bool EnableSNIHasBeenSet() const { return m_enableSNIHasBeenSet; }
    inline void SetEnableSNI(bool value) { m_enableSNIHasBeenSet = true; m_enableSNI = value; }
    inline HealthCheckConfig& WithEnableSNI(bool value) { SetEnableSNI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains one <code>Region</code> element for each region
     * from which you want Amazon Route 53 health checkers to check the specified
     * endpoint.</p> <p>If you don't specify any regions, Route 53 health checkers
     * automatically performs checks from all of the regions that are listed under
     * <b>Valid Values</b>.</p> <p>If you update a health check to remove a region that
     * has been performing health checks, Route 53 will briefly continue to perform
     * checks from that region to ensure that some health checkers are always checking
     * the endpoint (for example, if you replace three regions with four different
     * regions). </p>
     */
    inline const Aws::Vector<HealthCheckRegion>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<HealthCheckRegion>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<HealthCheckRegion>>
    HealthCheckConfig& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    inline HealthCheckConfig& AddRegions(HealthCheckRegion value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether the specified health check
     * is healthy.</p>
     */
    inline const AlarmIdentifier& GetAlarmIdentifier() const { return m_alarmIdentifier; }
    inline bool AlarmIdentifierHasBeenSet() const { return m_alarmIdentifierHasBeenSet; }
    template<typename AlarmIdentifierT = AlarmIdentifier>
    void SetAlarmIdentifier(AlarmIdentifierT&& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = std::forward<AlarmIdentifierT>(value); }
    template<typename AlarmIdentifierT = AlarmIdentifier>
    HealthCheckConfig& WithAlarmIdentifier(AlarmIdentifierT&& value) { SetAlarmIdentifier(std::forward<AlarmIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Route 53 considers the health
     * check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Route 53
     * considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Route 53 uses the status of the health check from
     * the last time that CloudWatch had sufficient data to determine the alarm state.
     * For new health checks that have no last known status, the default status for the
     * health check is healthy.</p> </li> </ul>
     */
    inline InsufficientDataHealthStatus GetInsufficientDataHealthStatus() const { return m_insufficientDataHealthStatus; }
    inline bool InsufficientDataHealthStatusHasBeenSet() const { return m_insufficientDataHealthStatusHasBeenSet; }
    inline void SetInsufficientDataHealthStatus(InsufficientDataHealthStatus value) { m_insufficientDataHealthStatusHasBeenSet = true; m_insufficientDataHealthStatus = value; }
    inline HealthCheckConfig& WithInsufficientDataHealthStatus(InsufficientDataHealthStatus value) { SetInsufficientDataHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Route 53 Application Recovery
     * Controller routing control.</p> <p>For more information about Route 53
     * Application Recovery Controller, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/what-is-route-53-recovery.html">Route
     * 53 Application Recovery Controller Developer Guide.</a>.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const { return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    template<typename RoutingControlArnT = Aws::String>
    void SetRoutingControlArn(RoutingControlArnT&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::forward<RoutingControlArnT>(value); }
    template<typename RoutingControlArnT = Aws::String>
    HealthCheckConfig& WithRoutingControlArn(RoutingControlArnT&& value) { SetRoutingControlArn(std::forward<RoutingControlArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    HealthCheckType m_type{HealthCheckType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet = false;

    Aws::String m_fullyQualifiedDomainName;
    bool m_fullyQualifiedDomainNameHasBeenSet = false;

    Aws::String m_searchString;
    bool m_searchStringHasBeenSet = false;

    int m_requestInterval{0};
    bool m_requestIntervalHasBeenSet = false;

    int m_failureThreshold{0};
    bool m_failureThresholdHasBeenSet = false;

    bool m_measureLatency{false};
    bool m_measureLatencyHasBeenSet = false;

    bool m_inverted{false};
    bool m_invertedHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    int m_healthThreshold{0};
    bool m_healthThresholdHasBeenSet = false;

    Aws::Vector<Aws::String> m_childHealthChecks;
    bool m_childHealthChecksHasBeenSet = false;

    bool m_enableSNI{false};
    bool m_enableSNIHasBeenSet = false;

    Aws::Vector<HealthCheckRegion> m_regions;
    bool m_regionsHasBeenSet = false;

    AlarmIdentifier m_alarmIdentifier;
    bool m_alarmIdentifierHasBeenSet = false;

    InsufficientDataHealthStatus m_insufficientDataHealthStatus{InsufficientDataHealthStatus::NOT_SET};
    bool m_insufficientDataHealthStatusHasBeenSet = false;

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
