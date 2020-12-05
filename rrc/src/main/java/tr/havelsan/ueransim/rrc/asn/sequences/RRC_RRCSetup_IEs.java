package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnOctetString;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_RRCSetup_IEs extends AsnSequence {
    public RRC_RadioBearerConfig radioBearerConfig; // mandatory
    public AsnOctetString masterCellGroup; // mandatory, SIZE(0..MAX)
    public AsnOctetString lateNonCriticalExtension; // optional
    public RRC_nonCriticalExtension_23 nonCriticalExtension; // optional

    public static class RRC_nonCriticalExtension_23 extends AsnSequence {
    }
}

