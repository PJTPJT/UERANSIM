package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_SystemInformation extends AsnSequence {
    public RRC_criticalExtensions_29 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_29 extends AsnChoice {
        public RRC_SystemInformation_IEs systemInformation;
        public RRC_criticalExtensionsFuture_26 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_26 extends AsnSequence {
        }
    }
}

