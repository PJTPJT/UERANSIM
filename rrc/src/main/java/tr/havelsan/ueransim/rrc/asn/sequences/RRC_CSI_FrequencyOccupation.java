package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnInteger;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_CSI_FrequencyOccupation extends AsnSequence {
    public AsnInteger startingRB; // mandatory, VALUE(0..274)
    public AsnInteger nrofRBs; // mandatory, VALUE(24..276)
}

