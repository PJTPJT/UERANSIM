//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <octet_buffer.hpp>
#include <octet_string.hpp>
#include <optional>
#include <utility>

#include "nas_enums.hpp"

namespace nas
{

struct VAmfSetId
{
    int value : 10;

    explicit VAmfSetId(int value) : value(value)
    {
    }

    static void Encode(const VAmfSetId &value, OctetString &stream);
    static VAmfSetId Decode(OctetBuffer &stream);
};

struct VPlmn
{
    int mcc;
    int mnc;
    bool isLongMnc;

    VPlmn(int mcc, int mnc, bool isLongMnc) : mcc(mcc), mnc(mnc), isLongMnc(isLongMnc)
    {
    }

    static void Encode(const VPlmn &value, OctetString &stream);
    static VPlmn Decode(OctetBuffer &stream);
};

struct VQoSFlowParameter
{
    uint8_t identifier;
    OctetString content;

    VQoSFlowParameter(uint8_t identifier, OctetString content) : identifier(identifier), content(std::move(content))
    {
    }

    static void Encode(const VQoSFlowParameter &value, OctetString &stream);
    static VQoSFlowParameter Decode(OctetBuffer &stream);
};

struct VQoSFlowDescription
{
    int qfi : 6;
    EQoSOperationCode opCode;
    int numOfParameters : 6;
    bool eBit;
    std::vector<std::unique_ptr<VQoSFlowParameter>> parameterList;

    VQoSFlowDescription(int qfi, EQoSOperationCode opCode, int numOfParameters, bool eBit,
                        std::vector<std::unique_ptr<VQoSFlowParameter>> parameterList)
        : qfi(qfi), opCode(opCode), numOfParameters(numOfParameters), eBit(eBit),
          parameterList(std::move(parameterList))
    {
    }

    static void Encode(const VQoSFlowDescription &value, OctetString &stream);
    static VQoSFlowDescription Decode(OctetBuffer &stream);
};

struct VTrackingAreaIdentity
{
    VPlmn plmn;
    octet3 tac;

    VTrackingAreaIdentity(const VPlmn &plmn, const octet3 &tac) : plmn(plmn), tac(tac)
    {
    }

    static void Encode(const VTrackingAreaIdentity &value, OctetString &stream);
    static VTrackingAreaIdentity Decode(OctetBuffer &stream);
};

struct VTime
{
    octet year;
    octet month;
    octet day;
    octet hour;
    octet minute;
    octet second;

    VTime() = default;

    VTime(const octet &year, const octet &month, const octet &day, const octet &hour, const octet &minute,
          const octet &second)
        : year(year), month(month), day(day), hour(hour), minute(minute), second(second)
    {
    }

    static void Encode(const VTime &value, OctetString &stream);
    static VTime Decode(OctetBuffer &stream);
};

struct VRejectedSNssai
{
    ERejectedSNssaiCause cause{};
    std::optional<octet> sst{};
    std::optional<octet3> sd{};

    VRejectedSNssai() = default;

    VRejectedSNssai(ERejectedSNssaiCause cause, const std::optional<octet> &sst, const std::optional<octet3> &sd)
        : cause(cause), sst(sst), sd(sd)
    {
    }

    static void Encode(const VRejectedSNssai &value, OctetString &stream);
    static VRejectedSNssai Decode(OctetBuffer &stream);
};

struct VPartialServiceAreaList00
{
    EAllowedType allowedType;
    VPlmn plmn;
    std::vector<octet3> tacs;

    VPartialServiceAreaList00(EAllowedType allowedType, const VPlmn &plmn, std::vector<octet3> &&tacs)
        : allowedType(allowedType), plmn(plmn), tacs(std::move(tacs))
    {
    }

    static void Encode(const VPartialServiceAreaList00 &value, OctetString &stream);
    static VPartialServiceAreaList00 Decode(OctetBuffer &stream);
};

struct VPartialServiceAreaList01
{
    EAllowedType allowedType;
    VPlmn plmn;
    octet3 tac;

    VPartialServiceAreaList01(EAllowedType allowedType, const VPlmn &plmn, const octet3 &tac)
        : allowedType(allowedType), plmn(plmn), tac(tac)
    {
    }

    static void Encode(const VPartialServiceAreaList01 &value, OctetString &stream);
    static VPartialServiceAreaList01 Decode(OctetBuffer &stream);
};

struct VPartialServiceAreaList10
{
    EAllowedType allowedType;
    std::vector<VTrackingAreaIdentity> tais;

    VPartialServiceAreaList10(EAllowedType allowedType, std::vector<VTrackingAreaIdentity> &&tais)
        : allowedType(allowedType), tais(std::move(tais))
    {
    }

    static void Encode(const VPartialServiceAreaList10 &value, OctetString &stream);
    static VPartialServiceAreaList10 Decode(OctetBuffer &stream);
};

struct VPartialServiceAreaList11
{
    EAllowedType allowedType;
    VPlmn plmn;

    VPartialServiceAreaList11(EAllowedType allowedType, const VPlmn &plmn) : allowedType(allowedType), plmn(plmn)
    {
    }

    static void Encode(const VPartialServiceAreaList11 &value, OctetString &stream);
    static VPartialServiceAreaList11 Decode(OctetBuffer &stream);
};

struct VPartialServiceAreaList
{
    uint8_t present : 2;
    std::optional<VPartialServiceAreaList00> list00{};
    std::optional<VPartialServiceAreaList01> list01{};
    std::optional<VPartialServiceAreaList10> list10{};
    std::optional<VPartialServiceAreaList11> list11{};

    VPartialServiceAreaList() : present(0b00)
    {
    }

    static void Encode(const VPartialServiceAreaList &value, OctetString &stream);
    static VPartialServiceAreaList Decode(OctetBuffer &stream);
};

struct VPartialTrackingAreaIdentityList00
{
    VPlmn plmn;
    std::vector<octet3> tacs;

    VPartialTrackingAreaIdentityList00(const VPlmn &plmn, std::vector<octet3> &&tacs)
        : plmn(plmn), tacs(std::move(tacs))
    {
    }

    static void Encode(const VPartialTrackingAreaIdentityList00 &value, OctetString &stream);
    static VPartialTrackingAreaIdentityList00 Decode(OctetBuffer &stream);
};

struct VPartialTrackingAreaIdentityList01
{
    VPlmn plmn;
    octet3 tac;

    VPartialTrackingAreaIdentityList01(const VPlmn &plmn, octet3 tac) : plmn(plmn), tac(tac)
    {
    }

    static void Encode(const VPartialTrackingAreaIdentityList01 &value, OctetString &stream);
    static VPartialTrackingAreaIdentityList01 Decode(OctetBuffer &stream);
};

struct VPartialTrackingAreaIdentityList10
{
    std::vector<VTrackingAreaIdentity> tais;

    explicit VPartialTrackingAreaIdentityList10(std::vector<VTrackingAreaIdentity> &&tais) : tais(std::move(tais))
    {
    }

    static void Encode(const VPartialTrackingAreaIdentityList10 &value, OctetString &stream);
    static VPartialTrackingAreaIdentityList10 Decode(OctetBuffer &stream);
};

struct VPartialTrackingAreaIdentityList
{
    uint8_t present : 2;
    std::optional<VPartialTrackingAreaIdentityList00> list00{};
    std::optional<VPartialTrackingAreaIdentityList01> list01{};
    std::optional<VPartialTrackingAreaIdentityList10> list10{};

    VPartialTrackingAreaIdentityList() : present(0b00)
    {
    }

    static void Encode(const VPartialTrackingAreaIdentityList &value, OctetString &stream);
    static VPartialTrackingAreaIdentityList Decode(OctetBuffer &stream);
};

} // namespace nas
