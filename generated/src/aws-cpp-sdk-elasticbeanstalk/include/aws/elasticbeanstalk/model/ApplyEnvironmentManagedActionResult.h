﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ActionType.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>The result message containing information about the managed
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplyEnvironmentManagedActionResult">AWS
   * API Reference</a></p>
   */
  class ApplyEnvironmentManagedActionResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ApplyEnvironmentManagedActionResult();
    AWS_ELASTICBEANSTALK_API ApplyEnvironmentManagedActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ApplyEnvironmentManagedActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The action ID of the managed action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline void SetActionId(const Aws::String& value) { m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionId.assign(value); }
    inline ApplyEnvironmentManagedActionResult& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the managed action.</p>
     */
    inline const Aws::String& GetActionDescription() const{ return m_actionDescription; }
    inline void SetActionDescription(const Aws::String& value) { m_actionDescription = value; }
    inline void SetActionDescription(Aws::String&& value) { m_actionDescription = std::move(value); }
    inline void SetActionDescription(const char* value) { m_actionDescription.assign(value); }
    inline ApplyEnvironmentManagedActionResult& WithActionDescription(const Aws::String& value) { SetActionDescription(value); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithActionDescription(Aws::String&& value) { SetActionDescription(std::move(value)); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithActionDescription(const char* value) { SetActionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of managed action.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }
    inline void SetActionType(const ActionType& value) { m_actionType = value; }
    inline void SetActionType(ActionType&& value) { m_actionType = std::move(value); }
    inline ApplyEnvironmentManagedActionResult& WithActionType(const ActionType& value) { SetActionType(value); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the managed action.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline ApplyEnvironmentManagedActionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ApplyEnvironmentManagedActionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ApplyEnvironmentManagedActionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;

    Aws::String m_actionDescription;

    ActionType m_actionType;

    Aws::String m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
