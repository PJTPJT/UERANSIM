package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_UEAssistanceInformation extends AsnSequence {
    public RRC_criticalExtensions_28 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_28 extends AsnChoice {
        public RRC_UEAssistanceInformation_IEs ueAssistanceInformation;
        public RRC_criticalExtensionsFuture_3 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_3 extends AsnSequence {
        }
    }
}

