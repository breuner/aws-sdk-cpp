﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksMetadata.h>
#include <aws/batch/model/ImagePullSecret.h>
#include <aws/batch/model/EksContainerDetail.h>
#include <aws/batch/model/EksVolume.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The details for the pod.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksPodPropertiesDetail">AWS
   * API Reference</a></p>
   */
  class EksPodPropertiesDetail
  {
  public:
    AWS_BATCH_API EksPodPropertiesDetail() = default;
    AWS_BATCH_API EksPodPropertiesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksPodPropertiesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service account that's used to run the pod. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service-accounts.html">Kubernetes
     * service accounts</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/associate-service-account-role.html">Configure
     * a Kubernetes service account to assume an IAM role</a> in the <i>Amazon EKS User
     * Guide</i> and <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/configure-service-account/">Configure
     * service accounts for pods</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetServiceAccountName() const { return m_serviceAccountName; }
    inline bool ServiceAccountNameHasBeenSet() const { return m_serviceAccountNameHasBeenSet; }
    template<typename ServiceAccountNameT = Aws::String>
    void SetServiceAccountName(ServiceAccountNameT&& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = std::forward<ServiceAccountNameT>(value); }
    template<typename ServiceAccountNameT = Aws::String>
    EksPodPropertiesDetail& WithServiceAccountName(ServiceAccountNameT&& value) { SetServiceAccountName(std::forward<ServiceAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the pod uses the hosts' network IP address. The default value is
     * <code>true</code>. Setting this to <code>false</code> enables the Kubernetes pod
     * networking model. Most Batch workloads are egress-only and don't require the
     * overhead of IP allocation for each pod for incoming connections. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#host-namespaces">Host
     * namespaces</a> and <a
     * href="https://kubernetes.io/docs/concepts/workloads/pods/#pod-networking">Pod
     * networking</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool GetHostNetwork() const { return m_hostNetwork; }
    inline bool HostNetworkHasBeenSet() const { return m_hostNetworkHasBeenSet; }
    inline void SetHostNetwork(bool value) { m_hostNetworkHasBeenSet = true; m_hostNetwork = value; }
    inline EksPodPropertiesDetail& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS policy for the pod. The default value is <code>ClusterFirst</code>.
     * If the <code>hostNetwork</code> parameter is not specified, the default is
     * <code>ClusterFirstWithHostNet</code>. <code>ClusterFirst</code> indicates that
     * any DNS query that does not match the configured cluster domain suffix is
     * forwarded to the upstream nameserver inherited from the node. If no value was
     * specified for <code>dnsPolicy</code> in the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_RegisterJobDefinition.html">RegisterJobDefinition</a>
     * API operation, then no value will be returned for <code>dnsPolicy</code> by
     * either of <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_DescribeJobDefinitions.html">DescribeJobDefinitions</a>
     * or <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_DescribeJobs.html">DescribeJobs</a>
     * API operations. The pod spec setting will contain either
     * <code>ClusterFirst</code> or <code>ClusterFirstWithHostNet</code>, depending on
     * the value of the <code>hostNetwork</code> parameter. For more information, see
     * <a
     * href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/#pod-s-dns-policy">Pod's
     * DNS policy</a> in the <i>Kubernetes documentation</i>.</p> <p>Valid values:
     * <code>Default</code> | <code>ClusterFirst</code> |
     * <code>ClusterFirstWithHostNet</code> </p>
     */
    inline const Aws::String& GetDnsPolicy() const { return m_dnsPolicy; }
    inline bool DnsPolicyHasBeenSet() const { return m_dnsPolicyHasBeenSet; }
    template<typename DnsPolicyT = Aws::String>
    void SetDnsPolicy(DnsPolicyT&& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = std::forward<DnsPolicyT>(value); }
    template<typename DnsPolicyT = Aws::String>
    EksPodPropertiesDetail& WithDnsPolicy(DnsPolicyT&& value) { SetDnsPolicy(std::forward<DnsPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the reference pointer to the Kubernetes secret resource. These
     * secrets help to gain access to pull an images from a private registry.</p>
     */
    inline const Aws::Vector<ImagePullSecret>& GetImagePullSecrets() const { return m_imagePullSecrets; }
    inline bool ImagePullSecretsHasBeenSet() const { return m_imagePullSecretsHasBeenSet; }
    template<typename ImagePullSecretsT = Aws::Vector<ImagePullSecret>>
    void SetImagePullSecrets(ImagePullSecretsT&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets = std::forward<ImagePullSecretsT>(value); }
    template<typename ImagePullSecretsT = Aws::Vector<ImagePullSecret>>
    EksPodPropertiesDetail& WithImagePullSecrets(ImagePullSecretsT&& value) { SetImagePullSecrets(std::forward<ImagePullSecretsT>(value)); return *this;}
    template<typename ImagePullSecretsT = ImagePullSecret>
    EksPodPropertiesDetail& AddImagePullSecrets(ImagePullSecretsT&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets.emplace_back(std::forward<ImagePullSecretsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainerDetail>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<EksContainerDetail>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<EksContainerDetail>>
    EksPodPropertiesDetail& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = EksContainerDetail>
    EksPodPropertiesDetail& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The container registered with the Amazon EKS Connector agent and persists the
     * registration information in the Kubernetes backend data store.</p>
     */
    inline const Aws::Vector<EksContainerDetail>& GetInitContainers() const { return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    template<typename InitContainersT = Aws::Vector<EksContainerDetail>>
    void SetInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::forward<InitContainersT>(value); }
    template<typename InitContainersT = Aws::Vector<EksContainerDetail>>
    EksPodPropertiesDetail& WithInitContainers(InitContainersT&& value) { SetInitContainers(std::forward<InitContainersT>(value)); return *this;}
    template<typename InitContainersT = EksContainerDetail>
    EksPodPropertiesDetail& AddInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers.emplace_back(std::forward<InitContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline const Aws::Vector<EksVolume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<EksVolume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<EksVolume>>
    EksPodPropertiesDetail& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = EksVolume>
    EksPodPropertiesDetail& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the pod for this job.</p>
     */
    inline const Aws::String& GetPodName() const { return m_podName; }
    inline bool PodNameHasBeenSet() const { return m_podNameHasBeenSet; }
    template<typename PodNameT = Aws::String>
    void SetPodName(PodNameT&& value) { m_podNameHasBeenSet = true; m_podName = std::forward<PodNameT>(value); }
    template<typename PodNameT = Aws::String>
    EksPodPropertiesDetail& WithPodName(PodNameT&& value) { SetPodName(std::forward<PodNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node for this job.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    EksPodPropertiesDetail& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes and uniquely identifies Kubernetes resources. For example, the
     * compute environment that a pod runs in or the <code>jobID</code> for a job
     * running in the pod. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/kubernetes-objects/">Understanding
     * Kubernetes Objects</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = EksMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = EksMetadata>
    EksPodPropertiesDetail& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the processes in a container are shared, or visible, to other
     * containers in the same pod. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/share-process-namespace/">Share
     * Process Namespace between Containers in a Pod</a>.</p>
     */
    inline bool GetShareProcessNamespace() const { return m_shareProcessNamespace; }
    inline bool ShareProcessNamespaceHasBeenSet() const { return m_shareProcessNamespaceHasBeenSet; }
    inline void SetShareProcessNamespace(bool value) { m_shareProcessNamespaceHasBeenSet = true; m_shareProcessNamespace = value; }
    inline EksPodPropertiesDetail& WithShareProcessNamespace(bool value) { SetShareProcessNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccountName;
    bool m_serviceAccountNameHasBeenSet = false;

    bool m_hostNetwork{false};
    bool m_hostNetworkHasBeenSet = false;

    Aws::String m_dnsPolicy;
    bool m_dnsPolicyHasBeenSet = false;

    Aws::Vector<ImagePullSecret> m_imagePullSecrets;
    bool m_imagePullSecretsHasBeenSet = false;

    Aws::Vector<EksContainerDetail> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<EksContainerDetail> m_initContainers;
    bool m_initContainersHasBeenSet = false;

    Aws::Vector<EksVolume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_podName;
    bool m_podNameHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    EksMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    bool m_shareProcessNamespace{false};
    bool m_shareProcessNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
