package tr.havelsan.ueransim.rrc.asn.enums;

import tr.havelsan.ueransim.asn.core.AsnEnumerated;

public class RRC_SN_FieldLengthUM extends AsnEnumerated {
    public static final RRC_SN_FieldLengthUM SIZE6 = new RRC_SN_FieldLengthUM(0);
    public static final RRC_SN_FieldLengthUM SIZE12 = new RRC_SN_FieldLengthUM(1);

    private RRC_SN_FieldLengthUM(long value) {
        super(value);
    }
}

