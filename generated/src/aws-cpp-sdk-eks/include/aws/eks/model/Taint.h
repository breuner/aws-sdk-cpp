﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/TaintEffect.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>A property that allows a node to repel a <code>Pod</code>. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/node-taints-managed-node-groups.html">Node
   * taints on managed node groups</a> in the <i>Amazon EKS User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Taint">AWS API
   * Reference</a></p>
   */
  class Taint
  {
  public:
    AWS_EKS_API Taint();
    AWS_EKS_API Taint(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Taint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the taint.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Taint& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Taint& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Taint& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the taint.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Taint& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Taint& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Taint& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the taint.</p>
     */
    inline const TaintEffect& GetEffect() const{ return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(const TaintEffect& value) { m_effectHasBeenSet = true; m_effect = value; }
    inline void SetEffect(TaintEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }
    inline Taint& WithEffect(const TaintEffect& value) { SetEffect(value); return *this;}
    inline Taint& WithEffect(TaintEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    TaintEffect m_effect;
    bool m_effectHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
