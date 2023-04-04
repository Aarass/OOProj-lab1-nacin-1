#pragma once
#include "Put.h"
#include "Polje.h"
class Raskrsnica : public Polje
{
public:
	Put* skretanje;
	int pocetniIndex;
	Raskrsnica(Put* , int);
};

