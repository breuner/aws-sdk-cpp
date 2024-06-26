﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The configurations for the Hive job driver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/Hive">AWS
   * API Reference</a></p>
   */
  class Hive
  {
  public:
    AWS_EMRSERVERLESS_API Hive();
    AWS_EMRSERVERLESS_API Hive(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Hive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query for the Hive job run.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }
    inline Hive& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}
    inline Hive& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}
    inline Hive& WithQuery(const char* value) { SetQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query file for the Hive job run.</p>
     */
    inline const Aws::String& GetInitQueryFile() const{ return m_initQueryFile; }
    inline bool InitQueryFileHasBeenSet() const { return m_initQueryFileHasBeenSet; }
    inline void SetInitQueryFile(const Aws::String& value) { m_initQueryFileHasBeenSet = true; m_initQueryFile = value; }
    inline void SetInitQueryFile(Aws::String&& value) { m_initQueryFileHasBeenSet = true; m_initQueryFile = std::move(value); }
    inline void SetInitQueryFile(const char* value) { m_initQueryFileHasBeenSet = true; m_initQueryFile.assign(value); }
    inline Hive& WithInitQueryFile(const Aws::String& value) { SetInitQueryFile(value); return *this;}
    inline Hive& WithInitQueryFile(Aws::String&& value) { SetInitQueryFile(std::move(value)); return *this;}
    inline Hive& WithInitQueryFile(const char* value) { SetInitQueryFile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the Hive job run.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }
    inline Hive& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}
    inline Hive& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}
    inline Hive& WithParameters(const char* value) { SetParameters(value); return *this;}
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    Aws::String m_initQueryFile;
    bool m_initQueryFileHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
