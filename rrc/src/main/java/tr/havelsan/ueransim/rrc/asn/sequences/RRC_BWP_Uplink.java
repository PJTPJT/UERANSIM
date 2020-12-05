package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_BWP_Id;

public class RRC_BWP_Uplink extends AsnSequence {
    public RRC_BWP_Id bwp_Id; // mandatory
    public RRC_BWP_UplinkCommon bwp_Common; // optional
    public RRC_BWP_UplinkDedicated bwp_Dedicated; // optional
}

