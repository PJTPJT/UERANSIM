package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RSRP_Range;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RSRQ_Range;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_SINR_Range;

public class RRC_ThresholdNR extends AsnSequence {
    public RRC_RSRP_Range thresholdRSRP; // optional
    public RRC_RSRQ_Range thresholdRSRQ; // optional
    public RRC_SINR_Range thresholdSINR; // optional
}

