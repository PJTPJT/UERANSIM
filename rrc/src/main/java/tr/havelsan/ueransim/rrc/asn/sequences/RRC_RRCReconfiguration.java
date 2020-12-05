package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RRC_TransactionIdentifier;

public class RRC_RRCReconfiguration extends AsnSequence {
    public RRC_RRC_TransactionIdentifier rrc_TransactionIdentifier; // mandatory
    public RRC_criticalExtensions_25 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_25 extends AsnChoice {
        public RRC_RRCReconfiguration_IEs rrcReconfiguration;
        public RRC_criticalExtensionsFuture_15 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_15 extends AsnSequence {
        }
    }
}

