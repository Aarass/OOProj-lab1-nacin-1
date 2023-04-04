#include "Polje.h"

Polje::Polje(TipPolja tipPolja)
	: tipPolja(tipPolja)
	, efekatPolja(EfekatPolja::NONE)
{
}

void Polje::dodajEfekat(EfekatPolja efekat)
{
	efekatPolja = efekat;
}

EfekatPolja Polje::uzmiEfekat()
{
	return efekatPolja;
}
