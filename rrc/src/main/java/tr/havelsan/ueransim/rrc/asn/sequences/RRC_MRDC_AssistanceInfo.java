package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.asn.core.AsnSequenceOf;

public class RRC_MRDC_AssistanceInfo extends AsnSequence {
    public RRC_affectedCarrierFreqCombInfoListMRDC affectedCarrierFreqCombInfoListMRDC; // mandatory, SIZE(1..128)

    // SIZE(1..128)
    public static class RRC_affectedCarrierFreqCombInfoListMRDC extends AsnSequenceOf<RRC_AffectedCarrierFreqCombInfoMRDC> {
    }
}

