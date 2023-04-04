#pragma once
#include "Polje.h"
class Put
{
public:
	Polje** polja;
	int duzina;

	Put* prethodniPut;
	int pocetniIndexPrethodnogPuta;
	Put* sledeciPut;
	int pocetniIndexSledecegPuta;

	Put(int duzina);
};

