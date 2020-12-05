package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_BWP_Id;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_PUCCH_ResourceId;

public class RRC_PUCCH_CSI_Resource extends AsnSequence {
    public RRC_BWP_Id uplinkBandwidthPartId; // mandatory
    public RRC_PUCCH_ResourceId pucch_Resource; // mandatory
}

