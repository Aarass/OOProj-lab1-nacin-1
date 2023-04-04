#include "Board.h"

Board::Board()
	: obod(76)
	, doleLevo(14)
	, goreDesno(13)
{

	obod.prethodniPut = &obod;
	obod.pocetniIndexPrethodnogPuta = 75;

	obod.sledeciPut = &obod;
	obod.pocetniIndexSledecegPuta = 0;

	Raskrsnica* raskrsnica;

	raskrsnica = new Raskrsnica(&doleLevo, 0);
	obod.polja[11] = (Polje*)raskrsnica;

	doleLevo.prethodniPut = &obod;
	doleLevo.pocetniIndexPrethodnogPuta = 11;

	//-----------------------------------------

	raskrsnica = new Raskrsnica(&doleLevo, 0);
	obod.polja[26] = (Polje*)raskrsnica;

	doleLevo.sledeciPut = &obod;
	doleLevo.pocetniIndexSledecegPuta = 26;

	//-----------------------------------------

	raskrsnica = new Raskrsnica(&goreDesno, 0);
	obod.polja[50] = (Polje*)raskrsnica;

	goreDesno.prethodniPut = &obod;
	goreDesno.pocetniIndexPrethodnogPuta = 50;

	//-----------------------------------------

	raskrsnica = new Raskrsnica(&goreDesno, 0);
	obod.polja[64] = (Polje*)raskrsnica;

	goreDesno.sledeciPut = &obod;
	goreDesno.pocetniIndexSledecegPuta = 64;

	//---------------------------------------



}
