package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RSRP_Range;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RSRQ_Range;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_SINR_Range;

public class RRC_MeasTriggerQuantity extends AsnChoice {
    public RRC_RSRP_Range rsrp;
    public RRC_RSRQ_Range rsrq;
    public RRC_SINR_Range sinr;
}

