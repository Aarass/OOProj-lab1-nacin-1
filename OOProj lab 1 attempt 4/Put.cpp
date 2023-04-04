#include "Put.h"
#include "Polje.h"

Put::Put(int duzina)
	: duzina(duzina)
{
	polja = new Polje* [duzina];
	for (int i = 0; i < duzina; i++)
		polja[i] = new Polje();
}