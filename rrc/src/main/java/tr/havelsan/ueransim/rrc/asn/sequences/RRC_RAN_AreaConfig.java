package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.asn.core.AsnSequenceOf;
import tr.havelsan.ueransim.rrc.asn.bit_strings.RRC_TrackingAreaCode;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RAN_AreaCode;

public class RRC_RAN_AreaConfig extends AsnSequence {
    public RRC_TrackingAreaCode trackingAreaCode; // mandatory
    public RRC_ran_AreaCodeList ran_AreaCodeList; // optional, SIZE(1..32)

    // SIZE(1..32)
    public static class RRC_ran_AreaCodeList extends AsnSequenceOf<RRC_RAN_AreaCode> {
    }
}

