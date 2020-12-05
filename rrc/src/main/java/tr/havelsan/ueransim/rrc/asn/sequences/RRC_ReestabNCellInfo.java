package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnBitString;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.bit_strings.RRC_CellIdentity;
import tr.havelsan.ueransim.rrc.asn.bit_strings.RRC_ShortMAC_I;

public class RRC_ReestabNCellInfo extends AsnSequence {
    public RRC_CellIdentity cellIdentity; // mandatory
    public AsnBitString key_gNodeB_Star; // mandatory, SIZE(256)
    public RRC_ShortMAC_I shortMAC_I; // mandatory
}

