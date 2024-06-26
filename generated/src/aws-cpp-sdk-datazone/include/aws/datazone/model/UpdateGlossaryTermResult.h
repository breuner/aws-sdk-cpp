﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryTermStatus.h>
#include <aws/datazone/model/TermRelations.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class UpdateGlossaryTermResult
  {
  public:
    AWS_DATAZONE_API UpdateGlossaryTermResult();
    AWS_DATAZONE_API UpdateGlossaryTermResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateGlossaryTermResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline UpdateGlossaryTermResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UpdateGlossaryTermResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UpdateGlossaryTermResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline const Aws::String& GetGlossaryId() const{ return m_glossaryId; }
    inline void SetGlossaryId(const Aws::String& value) { m_glossaryId = value; }
    inline void SetGlossaryId(Aws::String&& value) { m_glossaryId = std::move(value); }
    inline void SetGlossaryId(const char* value) { m_glossaryId.assign(value); }
    inline UpdateGlossaryTermResult& WithGlossaryId(const Aws::String& value) { SetGlossaryId(value); return *this;}
    inline UpdateGlossaryTermResult& WithGlossaryId(Aws::String&& value) { SetGlossaryId(std::move(value)); return *this;}
    inline UpdateGlossaryTermResult& WithGlossaryId(const char* value) { SetGlossaryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateGlossaryTermResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateGlossaryTermResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateGlossaryTermResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }
    inline void SetLongDescription(const Aws::String& value) { m_longDescription = value; }
    inline void SetLongDescription(Aws::String&& value) { m_longDescription = std::move(value); }
    inline void SetLongDescription(const char* value) { m_longDescription.assign(value); }
    inline UpdateGlossaryTermResult& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}
    inline UpdateGlossaryTermResult& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}
    inline UpdateGlossaryTermResult& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateGlossaryTermResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateGlossaryTermResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateGlossaryTermResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }
    inline void SetShortDescription(const Aws::String& value) { m_shortDescription = value; }
    inline void SetShortDescription(Aws::String&& value) { m_shortDescription = std::move(value); }
    inline void SetShortDescription(const char* value) { m_shortDescription.assign(value); }
    inline UpdateGlossaryTermResult& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}
    inline UpdateGlossaryTermResult& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}
    inline UpdateGlossaryTermResult& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline const GlossaryTermStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const GlossaryTermStatus& value) { m_status = value; }
    inline void SetStatus(GlossaryTermStatus&& value) { m_status = std::move(value); }
    inline UpdateGlossaryTermResult& WithStatus(const GlossaryTermStatus& value) { SetStatus(value); return *this;}
    inline UpdateGlossaryTermResult& WithStatus(GlossaryTermStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term relations to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline const TermRelations& GetTermRelations() const{ return m_termRelations; }
    inline void SetTermRelations(const TermRelations& value) { m_termRelations = value; }
    inline void SetTermRelations(TermRelations&& value) { m_termRelations = std::move(value); }
    inline UpdateGlossaryTermResult& WithTermRelations(const TermRelations& value) { SetTermRelations(value); return *this;}
    inline UpdateGlossaryTermResult& WithTermRelations(TermRelations&& value) { SetTermRelations(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGlossaryTermResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGlossaryTermResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGlossaryTermResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainId;

    Aws::String m_glossaryId;

    Aws::String m_id;

    Aws::String m_longDescription;

    Aws::String m_name;

    Aws::String m_shortDescription;

    GlossaryTermStatus m_status;

    TermRelations m_termRelations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
