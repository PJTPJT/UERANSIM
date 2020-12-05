package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnBoolean;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_MeasurementTimingConfiguration_v1550_IEs extends AsnSequence {
    public AsnBoolean campOnFirstSSB; // mandatory
    public AsnBoolean psCellOnlyOnFirstSSB; // mandatory
    public RRC_nonCriticalExtension_33 nonCriticalExtension; // optional

    public static class RRC_nonCriticalExtension_33 extends AsnSequence {
    }
}

