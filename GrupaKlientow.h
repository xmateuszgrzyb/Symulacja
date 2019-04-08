#pragma once
#ifndef ZADANIE_2_GRUPAKLIENTOW_H_
#define ZADANIE_2_GRUPAKLIENTOW_H_

#include <iostream>

using namespace std;

class GrupaKlientow
{
public:
	int id_grupy;														
	int liczebnosc_grupy;														
	int czas_prowadzenia_przez_kierownika;
	int czas_przy_bufecie;
	int czas_obslugi_napojow;
	int czas_obslugi_dan;
	int czas_konsumpcji;
	int czas_obslugi_kasjer;

	GrupaKlientow(int, int, int, int, int, int, int);							//konstruktor dla klientow idacych na sale
	GrupaKlientow(int, int, int, int );											//konstruktor dla klientow idacych do bufetu
	~GrupaKlientow();															//destruktor
	void wyswietl();															//pokazuje parametry dla danej grupy 
};

#endif  // ZADANIE_2_GRUPAKLIENTOW_H_