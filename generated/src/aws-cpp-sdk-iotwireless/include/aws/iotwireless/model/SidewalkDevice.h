﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessDeviceSidewalkStatus.h>
#include <aws/iotwireless/model/CertificateList.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Sidewalk device object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkDevice">AWS
   * API Reference</a></p>
   */
  class SidewalkDevice
  {
  public:
    AWS_IOTWIRELESS_API SidewalkDevice();
    AWS_IOTWIRELESS_API SidewalkDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetAmazonId() const{ return m_amazonId; }
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }
    inline void SetAmazonId(const Aws::String& value) { m_amazonIdHasBeenSet = true; m_amazonId = value; }
    inline void SetAmazonId(Aws::String&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::move(value); }
    inline void SetAmazonId(const char* value) { m_amazonIdHasBeenSet = true; m_amazonId.assign(value); }
    inline SidewalkDevice& WithAmazonId(const Aws::String& value) { SetAmazonId(value); return *this;}
    inline SidewalkDevice& WithAmazonId(Aws::String&& value) { SetAmazonId(std::move(value)); return *this;}
    inline SidewalkDevice& WithAmazonId(const char* value) { SetAmazonId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sidewalk device identification.</p>
     */
    inline const Aws::String& GetSidewalkId() const{ return m_sidewalkId; }
    inline bool SidewalkIdHasBeenSet() const { return m_sidewalkIdHasBeenSet; }
    inline void SetSidewalkId(const Aws::String& value) { m_sidewalkIdHasBeenSet = true; m_sidewalkId = value; }
    inline void SetSidewalkId(Aws::String&& value) { m_sidewalkIdHasBeenSet = true; m_sidewalkId = std::move(value); }
    inline void SetSidewalkId(const char* value) { m_sidewalkIdHasBeenSet = true; m_sidewalkId.assign(value); }
    inline SidewalkDevice& WithSidewalkId(const Aws::String& value) { SetSidewalkId(value); return *this;}
    inline SidewalkDevice& WithSidewalkId(Aws::String&& value) { SetSidewalkId(std::move(value)); return *this;}
    inline SidewalkDevice& WithSidewalkId(const char* value) { SetSidewalkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk manufacturing series number.</p>
     */
    inline const Aws::String& GetSidewalkManufacturingSn() const{ return m_sidewalkManufacturingSn; }
    inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }
    inline void SetSidewalkManufacturingSn(const Aws::String& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = value; }
    inline void SetSidewalkManufacturingSn(Aws::String&& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = std::move(value); }
    inline void SetSidewalkManufacturingSn(const char* value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn.assign(value); }
    inline SidewalkDevice& WithSidewalkManufacturingSn(const Aws::String& value) { SetSidewalkManufacturingSn(value); return *this;}
    inline SidewalkDevice& WithSidewalkManufacturingSn(Aws::String&& value) { SetSidewalkManufacturingSn(std::move(value)); return *this;}
    inline SidewalkDevice& WithSidewalkManufacturingSn(const char* value) { SetSidewalkManufacturingSn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sidewalk device certificates for Ed25519 and P256r1.</p>
     */
    inline const Aws::Vector<CertificateList>& GetDeviceCertificates() const{ return m_deviceCertificates; }
    inline bool DeviceCertificatesHasBeenSet() const { return m_deviceCertificatesHasBeenSet; }
    inline void SetDeviceCertificates(const Aws::Vector<CertificateList>& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates = value; }
    inline void SetDeviceCertificates(Aws::Vector<CertificateList>&& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates = std::move(value); }
    inline SidewalkDevice& WithDeviceCertificates(const Aws::Vector<CertificateList>& value) { SetDeviceCertificates(value); return *this;}
    inline SidewalkDevice& WithDeviceCertificates(Aws::Vector<CertificateList>&& value) { SetDeviceCertificates(std::move(value)); return *this;}
    inline SidewalkDevice& AddDeviceCertificates(const CertificateList& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates.push_back(value); return *this; }
    inline SidewalkDevice& AddDeviceCertificates(CertificateList&& value) { m_deviceCertificatesHasBeenSet = true; m_deviceCertificates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Sidewalk device private keys that will be used for onboarding the
     * device.</p>
     */
    inline const Aws::Vector<CertificateList>& GetPrivateKeys() const{ return m_privateKeys; }
    inline bool PrivateKeysHasBeenSet() const { return m_privateKeysHasBeenSet; }
    inline void SetPrivateKeys(const Aws::Vector<CertificateList>& value) { m_privateKeysHasBeenSet = true; m_privateKeys = value; }
    inline void SetPrivateKeys(Aws::Vector<CertificateList>&& value) { m_privateKeysHasBeenSet = true; m_privateKeys = std::move(value); }
    inline SidewalkDevice& WithPrivateKeys(const Aws::Vector<CertificateList>& value) { SetPrivateKeys(value); return *this;}
    inline SidewalkDevice& WithPrivateKeys(Aws::Vector<CertificateList>&& value) { SetPrivateKeys(std::move(value)); return *this;}
    inline SidewalkDevice& AddPrivateKeys(const CertificateList& value) { m_privateKeysHasBeenSet = true; m_privateKeys.push_back(value); return *this; }
    inline SidewalkDevice& AddPrivateKeys(CertificateList&& value) { m_privateKeysHasBeenSet = true; m_privateKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const{ return m_deviceProfileId; }
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
    inline void SetDeviceProfileId(const Aws::String& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = value; }
    inline void SetDeviceProfileId(Aws::String&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::move(value); }
    inline void SetDeviceProfileId(const char* value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId.assign(value); }
    inline SidewalkDevice& WithDeviceProfileId(const Aws::String& value) { SetDeviceProfileId(value); return *this;}
    inline SidewalkDevice& WithDeviceProfileId(Aws::String&& value) { SetDeviceProfileId(std::move(value)); return *this;}
    inline SidewalkDevice& WithDeviceProfileId(const char* value) { SetDeviceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Sidewalk device profile.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }
    inline SidewalkDevice& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}
    inline SidewalkDevice& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}
    inline SidewalkDevice& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk device status, such as provisioned or registered.</p>
     */
    inline const WirelessDeviceSidewalkStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WirelessDeviceSidewalkStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WirelessDeviceSidewalkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SidewalkDevice& WithStatus(const WirelessDeviceSidewalkStatus& value) { SetStatus(value); return *this;}
    inline SidewalkDevice& WithStatus(WirelessDeviceSidewalkStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet = false;

    Aws::String m_sidewalkId;
    bool m_sidewalkIdHasBeenSet = false;

    Aws::String m_sidewalkManufacturingSn;
    bool m_sidewalkManufacturingSnHasBeenSet = false;

    Aws::Vector<CertificateList> m_deviceCertificates;
    bool m_deviceCertificatesHasBeenSet = false;

    Aws::Vector<CertificateList> m_privateKeys;
    bool m_privateKeysHasBeenSet = false;

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    WirelessDeviceSidewalkStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
