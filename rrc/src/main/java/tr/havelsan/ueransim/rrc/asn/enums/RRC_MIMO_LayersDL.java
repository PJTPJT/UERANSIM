package tr.havelsan.ueransim.rrc.asn.enums;

import tr.havelsan.ueransim.asn.core.AsnEnumerated;

public class RRC_MIMO_LayersDL extends AsnEnumerated {
    public static final RRC_MIMO_LayersDL TWOLAYERS = new RRC_MIMO_LayersDL(0);
    public static final RRC_MIMO_LayersDL FOURLAYERS = new RRC_MIMO_LayersDL(1);
    public static final RRC_MIMO_LayersDL EIGHTLAYERS = new RRC_MIMO_LayersDL(2);

    private RRC_MIMO_LayersDL(long value) {
        super(value);
    }
}

