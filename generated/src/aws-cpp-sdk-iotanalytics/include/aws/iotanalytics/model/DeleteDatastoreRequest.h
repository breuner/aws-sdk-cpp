﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class DeleteDatastoreRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API DeleteDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDatastore"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the data store to delete.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }
    inline DeleteDatastoreRequest& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}
    inline DeleteDatastoreRequest& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}
    inline DeleteDatastoreRequest& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
