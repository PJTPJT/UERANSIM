package tr.havelsan.ueransim.rrc.asn.integers;

import tr.havelsan.ueransim.asn.core.AsnInteger;

// VALUE(0..63)
public class RRC_SRS_ResourceId extends AsnInteger {
    public RRC_SRS_ResourceId() {
    }
    
    public RRC_SRS_ResourceId(long value) {
        super(value);
    }
}

