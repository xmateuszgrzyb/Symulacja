#pragma once
#ifndef ZADANIE_2_KOLEJKABUFET_H_
#define ZADANIE_2_KOLEJKABUFET_H_

#include "GrupaKlientow.h"

#include <iostream>
#include <queue>

using namespace std;

class KolejkaBufet
{
public:
	queue<GrupaKlientow> kolejka_bufet;					//kolejka przechowujaca klientow oczekujacych w kolejce do bufetu 

	KolejkaBufet();										//konstruktor
	~KolejkaBufet();									//destruktor
	void UmiescWKolejce(GrupaKlientow);					//funkcja umieszczajaca klientow do kolejki do bufetu
	void PokazRozmiarKolejki();							//funkcja pokazujaca ile grup czeka w kolejce
	void PokazIdGrupy(KolejkaBufet);					//funkcja pokazuje id grup czekajacych w kolejce
};

#endif  // ZADANIE_2_KOLEJKABUFET_H_