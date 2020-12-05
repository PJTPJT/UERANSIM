package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnBitString;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.choices.RRC_InitialUE_Identity;
import tr.havelsan.ueransim.rrc.asn.enums.RRC_EstablishmentCause;

public class RRC_RRCSetupRequest_IEs extends AsnSequence {
    public RRC_InitialUE_Identity ue_Identity; // mandatory
    public RRC_EstablishmentCause establishmentCause; // mandatory
    public AsnBitString spare; // mandatory, SIZE(1)
}

