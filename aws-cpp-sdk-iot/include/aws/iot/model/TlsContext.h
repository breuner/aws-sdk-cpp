﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Specifies the TLS context to use for the test authorizer
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TlsContext">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API TlsContext
  {
  public:
    TlsContext();
    TlsContext(Aws::Utils::Json::JsonView jsonValue);
    TlsContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline TlsContext& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline TlsContext& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>serverName</code> key in a TLS authorization
     * request.</p>
     */
    inline TlsContext& WithServerName(const char* value) { SetServerName(value); return *this;}

  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws