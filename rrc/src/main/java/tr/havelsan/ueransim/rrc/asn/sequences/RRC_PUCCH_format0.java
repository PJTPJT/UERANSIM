package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnInteger;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_PUCCH_format0 extends AsnSequence {
    public AsnInteger initialCyclicShift; // mandatory, VALUE(0..11)
    public AsnInteger nrofSymbols; // mandatory, VALUE(1..2)
    public AsnInteger startingSymbolIndex; // mandatory, VALUE(0..13)
}

