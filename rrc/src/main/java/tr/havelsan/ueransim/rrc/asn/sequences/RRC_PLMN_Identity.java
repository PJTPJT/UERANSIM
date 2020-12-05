package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_MCC;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_MNC;

public class RRC_PLMN_Identity extends AsnSequence {
    public RRC_MCC mcc; // optional
    public RRC_MNC mnc; // mandatory
}

