package tr.havelsan.ueransim.rrc.asn.integers;

import tr.havelsan.ueransim.asn.core.AsnInteger;

// VALUE(0..65535)
public class RRC_RNTI_Value extends AsnInteger {
    public RRC_RNTI_Value() {
    }
    
    public RRC_RNTI_Value(long value) {
        super(value);
    }
}

