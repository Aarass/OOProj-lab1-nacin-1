#include "Board.h"
#include <iostream>
int main()
{
	Board board;
	int trenutniIndex = 0;
	Put* trenutniPut = &board.obod;
	std::cout << trenutniPut << std::endl;

	int roll;
	std::cin >> roll;
	while (roll != -1)
	{
		for (int i = 0; i < roll; i++)
		{
			++trenutniIndex;

			if (trenutniIndex >= trenutniPut->duzina)
			{
				trenutniIndex = trenutniPut->pocetniIndexSledecegPuta;
				trenutniPut = trenutniPut->sledeciPut;
			}
			else if (trenutniIndex < 0)
			{

			}
			else
			{
				Polje* trenutnoPolje = trenutniPut->polja[trenutniIndex];
				if (trenutnoPolje->tipPolja == TipPolja::RASKSRNICA)
				{
					std::cout << "Raskrsnica -> ";
					Raskrsnica* raskrsnica = (Raskrsnica*)trenutnoPolje;
					trenutniPut = raskrsnica->skretanje;
					trenutniIndex = raskrsnica->pocetniIndex;

					std::cout << trenutniPut << std::endl;

				}
			}
			std::cout << trenutniIndex << std::endl;
		}
		std::cin >> roll;
	}
	return 0;
}