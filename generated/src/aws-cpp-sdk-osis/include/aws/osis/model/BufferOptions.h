﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>

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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Options that specify the configuration of a persistent buffer. To configure
   * how OpenSearch Ingestion encrypts this data, set the
   * <code>EncryptionAtRestOptions</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/osis-features-overview.html#persistent-buffering">Persistent
   * buffering</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/BufferOptions">AWS
   * API Reference</a></p>
   */
  class BufferOptions
  {
  public:
    AWS_OSIS_API BufferOptions() = default;
    AWS_OSIS_API BufferOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API BufferOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether persistent buffering should be enabled.</p>
     */
    inline bool GetPersistentBufferEnabled() const { return m_persistentBufferEnabled; }
    inline bool PersistentBufferEnabledHasBeenSet() const { return m_persistentBufferEnabledHasBeenSet; }
    inline void SetPersistentBufferEnabled(bool value) { m_persistentBufferEnabledHasBeenSet = true; m_persistentBufferEnabled = value; }
    inline BufferOptions& WithPersistentBufferEnabled(bool value) { SetPersistentBufferEnabled(value); return *this;}
    ///@}
  private:

    bool m_persistentBufferEnabled{false};
    bool m_persistentBufferEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
