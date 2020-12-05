package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_MeasId;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_MeasObjectId;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_ReportConfigId;

public class RRC_MeasIdToAddMod extends AsnSequence {
    public RRC_MeasId measId; // mandatory
    public RRC_MeasObjectId measObjectId; // mandatory
    public RRC_ReportConfigId reportConfigId; // mandatory
}

