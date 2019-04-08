#pragma once
#ifndef ZADANIE_2_KOLEJKAKIEROWNIK_H_
#define ZADANIE_2_KOLEJKAKIEROWNIK_H_

#include "GrupaKlientow.h"

#include <iostream>
#include <queue>


using namespace std;

class KolejkaKierownik
{
public:
	queue<GrupaKlientow> kolejka_kierownik;			//kolejka przechowujaca wskazniki na klientow oczekujacych w kolejce do kierownika sali
	int liczba_osob_kolejka_kierownik;				//liczba osob w kolejce do kierownika sali


	KolejkaKierownik();								//konstuktor
	~KolejkaKierownik();							//destruktor
	void UmiescWKolejce(GrupaKlientow);				//funkcja umieszajaca klientow w kolejke na sale
	void PokazRozmiarKolejki();						//funkcja pokazujaca rozmiar kolejki
	void PokazIdGrupy();							//funkcja pokazujaca id grup czekajacych w kolejce
};

#endif  // ZADANIE_2_KOLEJKAKIEROWNIK_H_