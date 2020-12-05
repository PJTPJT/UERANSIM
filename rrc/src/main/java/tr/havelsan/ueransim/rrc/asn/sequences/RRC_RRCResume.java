package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RRC_TransactionIdentifier;

public class RRC_RRCResume extends AsnSequence {
    public RRC_RRC_TransactionIdentifier rrc_TransactionIdentifier; // mandatory
    public RRC_criticalExtensions_27 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_27 extends AsnChoice {
        public RRC_RRCResume_IEs rrcResume;
        public RRC_criticalExtensionsFuture_34 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_34 extends AsnSequence {
        }
    }
}

