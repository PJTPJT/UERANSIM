package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_MeasAndMobParameters extends AsnSequence {
    public RRC_MeasAndMobParametersCommon measAndMobParametersCommon; // optional
    public RRC_MeasAndMobParametersXDD_Diff measAndMobParametersXDD_Diff; // optional
    public RRC_MeasAndMobParametersFRX_Diff measAndMobParametersFRX_Diff; // optional
}

