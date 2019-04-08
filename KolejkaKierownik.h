#pragma once
#ifndef ZADANIE_2_KOLEJKAKIEROWNIK_H_
#define ZADANIE_2_KOLEJKAKIEROWNIK_H_


#include <iostream>
#include <queue>
#include "GrupaKlientow.h"

using namespace std;

class KolejkaKierownik
{
private:
	queue<GrupaKlientow> kolejka_kierownik;		//kolejka przechowujaca wskazniki na klientow oczekujacych w kolejce do kierownika sali
	int liczba_osob_kolejka_kierownik;			// liczba osob w kolejce do kierownika sali

public:
	
	KolejkaKierownik();
	~KolejkaKierownik();
	void UmiescWKolejce(GrupaKlientow);
	void PokazRozmiarKolejki();
	void PokazIdGrupy();
};

#endif  // ZADANIE_2_KOLEJKAKIEROWNIK_H_