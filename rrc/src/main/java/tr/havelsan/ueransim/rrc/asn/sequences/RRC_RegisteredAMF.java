package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.bit_strings.RRC_AMF_Identifier;

public class RRC_RegisteredAMF extends AsnSequence {
    public RRC_PLMN_Identity plmn_Identity; // optional
    public RRC_AMF_Identifier amf_Identifier; // mandatory
}

