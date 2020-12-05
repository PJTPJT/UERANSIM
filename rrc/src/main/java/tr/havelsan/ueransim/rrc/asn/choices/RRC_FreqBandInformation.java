package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_FreqBandInformationEUTRA;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_FreqBandInformationNR;

public class RRC_FreqBandInformation extends AsnChoice {
    public RRC_FreqBandInformationEUTRA bandInformationEUTRA;
    public RRC_FreqBandInformationNR bandInformationNR;
}

