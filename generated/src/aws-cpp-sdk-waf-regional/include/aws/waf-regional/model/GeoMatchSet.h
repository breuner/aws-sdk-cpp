﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/GeoMatchConstraint.h>
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
   * endpoints for regional and global use. </p>  <p>Contains one or more
   * countries that AWS WAF will search for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GeoMatchSet">AWS
   * API Reference</a></p>
   */
  class GeoMatchSet
  {
  public:
    AWS_WAFREGIONAL_API GeoMatchSet();
    AWS_WAFREGIONAL_API GeoMatchSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API GeoMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const{ return m_geoMatchSetId; }
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }
    inline void SetGeoMatchSetId(const Aws::String& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = value; }
    inline void SetGeoMatchSetId(Aws::String&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::move(value); }
    inline void SetGeoMatchSetId(const char* value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId.assign(value); }
    inline GeoMatchSet& WithGeoMatchSetId(const Aws::String& value) { SetGeoMatchSetId(value); return *this;}
    inline GeoMatchSet& WithGeoMatchSetId(Aws::String&& value) { SetGeoMatchSetId(std::move(value)); return *this;}
    inline GeoMatchSet& WithGeoMatchSetId(const char* value) { SetGeoMatchSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GeoMatchSet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GeoMatchSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GeoMatchSet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline const Aws::Vector<GeoMatchConstraint>& GetGeoMatchConstraints() const{ return m_geoMatchConstraints; }
    inline bool GeoMatchConstraintsHasBeenSet() const { return m_geoMatchConstraintsHasBeenSet; }
    inline void SetGeoMatchConstraints(const Aws::Vector<GeoMatchConstraint>& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints = value; }
    inline void SetGeoMatchConstraints(Aws::Vector<GeoMatchConstraint>&& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints = std::move(value); }
    inline GeoMatchSet& WithGeoMatchConstraints(const Aws::Vector<GeoMatchConstraint>& value) { SetGeoMatchConstraints(value); return *this;}
    inline GeoMatchSet& WithGeoMatchConstraints(Aws::Vector<GeoMatchConstraint>&& value) { SetGeoMatchConstraints(std::move(value)); return *this;}
    inline GeoMatchSet& AddGeoMatchConstraints(const GeoMatchConstraint& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints.push_back(value); return *this; }
    inline GeoMatchSet& AddGeoMatchConstraints(GeoMatchConstraint&& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<GeoMatchConstraint> m_geoMatchConstraints;
    bool m_geoMatchConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
