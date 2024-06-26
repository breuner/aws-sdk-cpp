﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Information about an application version deployment.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_ELASTICBEANSTALK_API Deployment();
    AWS_ELASTICBEANSTALK_API Deployment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API Deployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The version label of the application version in the deployment.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }
    inline Deployment& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline Deployment& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline Deployment& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment. This number increases by one each time that you
     * deploy source code or change instance configuration settings.</p>
     */
    inline long long GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(long long value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline Deployment& WithDeploymentId(long long value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment:</p> <ul> <li> <p> <code>In Progress</code> :
     * The deployment is in progress.</p> </li> <li> <p> <code>Deployed</code> : The
     * deployment succeeded.</p> </li> <li> <p> <code>Failed</code> : The deployment
     * failed.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Deployment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Deployment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Deployment& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For in-progress deployments, the time that the deployment started.</p> <p>For
     * completed deployments, the time that the deployment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentTime() const{ return m_deploymentTime; }
    inline bool DeploymentTimeHasBeenSet() const { return m_deploymentTimeHasBeenSet; }
    inline void SetDeploymentTime(const Aws::Utils::DateTime& value) { m_deploymentTimeHasBeenSet = true; m_deploymentTime = value; }
    inline void SetDeploymentTime(Aws::Utils::DateTime&& value) { m_deploymentTimeHasBeenSet = true; m_deploymentTime = std::move(value); }
    inline Deployment& WithDeploymentTime(const Aws::Utils::DateTime& value) { SetDeploymentTime(value); return *this;}
    inline Deployment& WithDeploymentTime(Aws::Utils::DateTime&& value) { SetDeploymentTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    long long m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_deploymentTime;
    bool m_deploymentTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
