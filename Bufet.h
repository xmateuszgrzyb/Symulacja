#pragma once
#ifndef ZADANIE_2_BUFET_H_
#define ZADANIE_2_BUFET_H_

#include <iostream>
#include <vector>
#include "KolejkaBufet.h"
#include "GrupaKlientow.h"
using namespace std;

class Bufet
{
public:
	const int max_osob;									//maksymalna liczba osob przy bufecie
	int zajete_miejsca;									//aktualna liczba zajetych miejsc przy bufecie
	vector <GrupaKlientow> miejsca_przy_bufecie;		//wektor miejsc przy bufecie

	Bufet();											//konstruktor klasy
	~Bufet();											//destruktor
	void DodajGrupeKlientowDoBufetu(KolejkaBufet &);	//funkcja wyciagajaca ludzi z kolejki i wprowadzajaca do bufetu
	void Pokaz();										/*funkcja pokazujaca id grup przy bufecie,
														ich liczebnosc oraz sume zajetych miejsc przy bufecie*/
};

#endif  // ZADANIE_2_BUFET_H_