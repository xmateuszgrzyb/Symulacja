#pragma once
#ifndef ZADANIE_2_KOLEJKABUFET_H_
#define ZADANIE_2_KOLEJKABUFET_H_


#include <iostream>
#include <queue>
#include "GrupaKlientow.h"
using namespace std;

class KolejkaBufet
{
public:
	queue<GrupaKlientow> kolejka_bufet;		//kolejka przechowujaca klientow oczekujacych w kolejce do bufetu 

	KolejkaBufet();
	~KolejkaBufet();
	void UmiescWKolejce(GrupaKlientow);
	void PokazRozmiarKolejki();
	void PokazIdGrupy(KolejkaBufet);
};

#endif  // ZADANIE_2_KOLEJKABUFET_H_