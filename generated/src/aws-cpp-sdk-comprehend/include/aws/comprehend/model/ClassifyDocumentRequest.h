﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/comprehend/model/DocumentReaderConfig.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class ClassifyDocumentRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API ClassifyDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClassifyDocument"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The document text to be analyzed. If you enter text using this parameter, do
     * not use the <code>Bytes</code> parameter.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline ClassifyDocumentRequest& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline ClassifyDocumentRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline ClassifyDocumentRequest& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint. </p> <p>For prompt safety
     * classification, Amazon Comprehend provides the endpoint ARN. For more
     * information about prompt safety classifiers, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/trust-safety.html#prompt-classification">Prompt
     * safety classification</a> in the <i>Amazon Comprehend Developer Guide</i> </p>
     * <p>For custom classification, you create an endpoint for your custom model. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/using-endpoints.html">Using
     * Amazon Comprehend endpoints</a>.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }
    inline ClassifyDocumentRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline ClassifyDocumentRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline ClassifyDocumentRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>Bytes</code> parameter to input a text, PDF, Word or image
     * file.</p> <p>When you classify a document using a custom model, you can also use
     * the <code>Bytes</code> parameter to input an Amazon Textract
     * <code>DetectDocumentText</code> or <code>AnalyzeDocument</code> output file.</p>
     * <p>To classify a document using the prompt safety classifier, use the
     * <code>Text</code> parameter for input.</p> <p>Provide the input document as a
     * sequence of base64-encoded bytes. If your code uses an Amazon Web Services SDK
     * to classify documents, the SDK may encode the document file bytes for you. </p>
     * <p>The maximum length of this field depends on the input document type. For
     * details, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/idp-inputs-sync.html">
     * Inputs for real-time custom analysis</a> in the Comprehend Developer Guide. </p>
     * <p>If you use the <code>Bytes</code> parameter, do not use the <code>Text</code>
     * parameter.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }
    inline ClassifyDocumentRequest& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}
    inline ClassifyDocumentRequest& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline const DocumentReaderConfig& GetDocumentReaderConfig() const{ return m_documentReaderConfig; }
    inline bool DocumentReaderConfigHasBeenSet() const { return m_documentReaderConfigHasBeenSet; }
    inline void SetDocumentReaderConfig(const DocumentReaderConfig& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = value; }
    inline void SetDocumentReaderConfig(DocumentReaderConfig&& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = std::move(value); }
    inline ClassifyDocumentRequest& WithDocumentReaderConfig(const DocumentReaderConfig& value) { SetDocumentReaderConfig(value); return *this;}
    inline ClassifyDocumentRequest& WithDocumentReaderConfig(DocumentReaderConfig&& value) { SetDocumentReaderConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    DocumentReaderConfig m_documentReaderConfig;
    bool m_documentReaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
