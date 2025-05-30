﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/ByteMatchTuple.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>In a
   * <a>GetByteMatchSet</a> request, <code>ByteMatchSet</code> is a complex type that
   * contains the <code>ByteMatchSetId</code> and <code>Name</code> of a
   * <code>ByteMatchSet</code>, and the values that you specified when you updated
   * the <code>ByteMatchSet</code>. </p> <p>A complex type that contains
   * <code>ByteMatchTuple</code> objects, which specify the parts of web requests
   * that you want AWS WAF to inspect and the values that you want AWS WAF to search
   * for. If a <code>ByteMatchSet</code> contains more than one
   * <code>ByteMatchTuple</code> object, a request needs to match the settings in
   * only one <code>ByteMatchTuple</code> to be considered a match.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ByteMatchSet">AWS
   * API Reference</a></p>
   */
  class ByteMatchSet
  {
  public:
    AWS_WAFREGIONAL_API ByteMatchSet() = default;
    AWS_WAFREGIONAL_API ByteMatchSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API ByteMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a <code>ByteMatchSet</code>
     * (see <a>GetByteMatchSet</a>), update a <code>ByteMatchSet</code> (see
     * <a>UpdateByteMatchSet</a>), insert a <code>ByteMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>ByteMatchSet</code> from AWS WAF (see
     * <a>DeleteByteMatchSet</a>).</p> <p> <code>ByteMatchSetId</code> is returned by
     * <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline const Aws::String& GetByteMatchSetId() const { return m_byteMatchSetId; }
    inline bool ByteMatchSetIdHasBeenSet() const { return m_byteMatchSetIdHasBeenSet; }
    template<typename ByteMatchSetIdT = Aws::String>
    void SetByteMatchSetId(ByteMatchSetIdT&& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = std::forward<ByteMatchSetIdT>(value); }
    template<typename ByteMatchSetIdT = Aws::String>
    ByteMatchSet& WithByteMatchSetId(ByteMatchSetIdT&& value) { SetByteMatchSetId(std::forward<ByteMatchSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ByteMatchSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the bytes (typically a string that corresponds with ASCII
     * characters) that you want AWS WAF to search for in web requests, the location in
     * requests that you want AWS WAF to search, and other settings.</p>
     */
    inline const Aws::Vector<ByteMatchTuple>& GetByteMatchTuples() const { return m_byteMatchTuples; }
    inline bool ByteMatchTuplesHasBeenSet() const { return m_byteMatchTuplesHasBeenSet; }
    template<typename ByteMatchTuplesT = Aws::Vector<ByteMatchTuple>>
    void SetByteMatchTuples(ByteMatchTuplesT&& value) { m_byteMatchTuplesHasBeenSet = true; m_byteMatchTuples = std::forward<ByteMatchTuplesT>(value); }
    template<typename ByteMatchTuplesT = Aws::Vector<ByteMatchTuple>>
    ByteMatchSet& WithByteMatchTuples(ByteMatchTuplesT&& value) { SetByteMatchTuples(std::forward<ByteMatchTuplesT>(value)); return *this;}
    template<typename ByteMatchTuplesT = ByteMatchTuple>
    ByteMatchSet& AddByteMatchTuples(ByteMatchTuplesT&& value) { m_byteMatchTuplesHasBeenSet = true; m_byteMatchTuples.emplace_back(std::forward<ByteMatchTuplesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_byteMatchSetId;
    bool m_byteMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ByteMatchTuple> m_byteMatchTuples;
    bool m_byteMatchTuplesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
