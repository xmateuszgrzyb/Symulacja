#pragma once
#ifndef ZADANIE_2_KOLEJKAKASY_H_
#define ZADANIE_2_KOLEJKAKASY_H_


#include <iostream>
#include <queue>
#include "GrupaKlientow.h"
#include"Bufet.h"

using namespace std;

class KolejkaKasy
{
private:
	queue<GrupaKlientow> kolejka_kasy;		//kolejka przechowujaca wskazniki na klientow oczekujacych w kolejce do bufetu 
	int liczba_osob_kolejka_kasy;			// liczba osob w kolejce do kas

public:

	KolejkaKasy();
	~KolejkaKasy();
	void UmiescWKolejce(Bufet &, GrupaKlientow);
	void PokazRozmiarKolejki();
	void PokazIdGrupy(KolejkaKasy);
};

#endif  // ZADANIE_2_KOLEJKAKASY_H_