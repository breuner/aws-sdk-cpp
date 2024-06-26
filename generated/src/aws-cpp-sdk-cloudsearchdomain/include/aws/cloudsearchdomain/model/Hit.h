﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Information about a document that matches the search request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Hit">AWS
   * API Reference</a></p>
   */
  class Hit
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API Hit();
    AWS_CLOUDSEARCHDOMAIN_API Hit(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Hit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Hit& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Hit& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Hit& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline Hit& WithFields(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetFields(value); return *this;}
    inline Hit& WithFields(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetFields(std::move(value)); return *this;}
    inline Hit& AddFields(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    inline Hit& AddFields(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }
    inline Hit& AddFields(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline Hit& AddFields(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }
    inline Hit& AddFields(const char* key, Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline Hit& AddFields(const char* key, const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExprs() const{ return m_exprs; }
    inline bool ExprsHasBeenSet() const { return m_exprsHasBeenSet; }
    inline void SetExprs(const Aws::Map<Aws::String, Aws::String>& value) { m_exprsHasBeenSet = true; m_exprs = value; }
    inline void SetExprs(Aws::Map<Aws::String, Aws::String>&& value) { m_exprsHasBeenSet = true; m_exprs = std::move(value); }
    inline Hit& WithExprs(const Aws::Map<Aws::String, Aws::String>& value) { SetExprs(value); return *this;}
    inline Hit& WithExprs(Aws::Map<Aws::String, Aws::String>&& value) { SetExprs(std::move(value)); return *this;}
    inline Hit& AddExprs(const Aws::String& key, const Aws::String& value) { m_exprsHasBeenSet = true; m_exprs.emplace(key, value); return *this; }
    inline Hit& AddExprs(Aws::String&& key, const Aws::String& value) { m_exprsHasBeenSet = true; m_exprs.emplace(std::move(key), value); return *this; }
    inline Hit& AddExprs(const Aws::String& key, Aws::String&& value) { m_exprsHasBeenSet = true; m_exprs.emplace(key, std::move(value)); return *this; }
    inline Hit& AddExprs(Aws::String&& key, Aws::String&& value) { m_exprsHasBeenSet = true; m_exprs.emplace(std::move(key), std::move(value)); return *this; }
    inline Hit& AddExprs(const char* key, Aws::String&& value) { m_exprsHasBeenSet = true; m_exprs.emplace(key, std::move(value)); return *this; }
    inline Hit& AddExprs(Aws::String&& key, const char* value) { m_exprsHasBeenSet = true; m_exprs.emplace(std::move(key), value); return *this; }
    inline Hit& AddExprs(const char* key, const char* value) { m_exprsHasBeenSet = true; m_exprs.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHighlights() const{ return m_highlights; }
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }
    inline void SetHighlights(const Aws::Map<Aws::String, Aws::String>& value) { m_highlightsHasBeenSet = true; m_highlights = value; }
    inline void SetHighlights(Aws::Map<Aws::String, Aws::String>&& value) { m_highlightsHasBeenSet = true; m_highlights = std::move(value); }
    inline Hit& WithHighlights(const Aws::Map<Aws::String, Aws::String>& value) { SetHighlights(value); return *this;}
    inline Hit& WithHighlights(Aws::Map<Aws::String, Aws::String>&& value) { SetHighlights(std::move(value)); return *this;}
    inline Hit& AddHighlights(const Aws::String& key, const Aws::String& value) { m_highlightsHasBeenSet = true; m_highlights.emplace(key, value); return *this; }
    inline Hit& AddHighlights(Aws::String&& key, const Aws::String& value) { m_highlightsHasBeenSet = true; m_highlights.emplace(std::move(key), value); return *this; }
    inline Hit& AddHighlights(const Aws::String& key, Aws::String&& value) { m_highlightsHasBeenSet = true; m_highlights.emplace(key, std::move(value)); return *this; }
    inline Hit& AddHighlights(Aws::String&& key, Aws::String&& value) { m_highlightsHasBeenSet = true; m_highlights.emplace(std::move(key), std::move(value)); return *this; }
    inline Hit& AddHighlights(const char* key, Aws::String&& value) { m_highlightsHasBeenSet = true; m_highlights.emplace(key, std::move(value)); return *this; }
    inline Hit& AddHighlights(Aws::String&& key, const char* value) { m_highlightsHasBeenSet = true; m_highlights.emplace(std::move(key), value); return *this; }
    inline Hit& AddHighlights(const char* key, const char* value) { m_highlightsHasBeenSet = true; m_highlights.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_exprs;
    bool m_exprsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_highlights;
    bool m_highlightsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
