﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/ScriptType.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the script.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/Script">AWS API
   * Reference</a></p>
   */
  class Script
  {
  public:
    AWS_APPTEST_API Script() = default;
    AWS_APPTEST_API Script(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Script& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The script location of the scripts.</p>
     */
    inline const Aws::String& GetScriptLocation() const { return m_scriptLocation; }
    inline bool ScriptLocationHasBeenSet() const { return m_scriptLocationHasBeenSet; }
    template<typename ScriptLocationT = Aws::String>
    void SetScriptLocation(ScriptLocationT&& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = std::forward<ScriptLocationT>(value); }
    template<typename ScriptLocationT = Aws::String>
    Script& WithScriptLocation(ScriptLocationT&& value) { SetScriptLocation(std::forward<ScriptLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the scripts.</p>
     */
    inline ScriptType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ScriptType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Script& WithType(ScriptType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_scriptLocation;
    bool m_scriptLocationHasBeenSet = false;

    ScriptType m_type{ScriptType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
