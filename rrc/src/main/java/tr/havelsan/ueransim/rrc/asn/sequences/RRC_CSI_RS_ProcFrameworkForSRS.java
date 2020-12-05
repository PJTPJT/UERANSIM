package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnInteger;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_CSI_RS_ProcFrameworkForSRS extends AsnSequence {
    public AsnInteger maxNumberPeriodicSRS_AssocCSI_RS_PerBWP; // mandatory, VALUE(1..4)
    public AsnInteger maxNumberAperiodicSRS_AssocCSI_RS_PerBWP; // mandatory, VALUE(1..4)
    public AsnInteger maxNumberSP_SRS_AssocCSI_RS_PerBWP; // mandatory, VALUE(0..4)
    public AsnInteger simultaneousSRS_AssocCSI_RS_PerCC; // mandatory, VALUE(1..8)
}

