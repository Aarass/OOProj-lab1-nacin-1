#pragma once
enum class TipPolja { OBICNO, RASKSRNICA };
enum class EfekatPolja { NONE, O, H, X, S, T, P};
class Polje
{
public:
	TipPolja tipPolja;
	EfekatPolja efekatPolja;
	Polje(TipPolja tipPolja = TipPolja::OBICNO);
	void dodajEfekat(EfekatPolja efekat);
	EfekatPolja uzmiEfekat();
};

