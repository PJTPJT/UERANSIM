package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.asn.core.AsnBitString;
import tr.havelsan.ueransim.asn.core.AsnChoice;

public class RRC_InitialUE_Identity extends AsnChoice {
    public AsnBitString ng_5G_S_TMSI_Part1; // SIZE(39)
    public AsnBitString randomValue; // SIZE(39)
}

