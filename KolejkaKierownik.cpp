#include <iostream>
#include "KolejkaKierownik.h"
using namespace std;

KolejkaKierownik::KolejkaKierownik()
{

}

KolejkaKierownik::~KolejkaKierownik()
{

}

void KolejkaKierownik::UmiescWKolejce(GrupaKlientow k)
{
	kolejka_kierownik.push(k);
}

void KolejkaKierownik::PokazRozmiarKolejki()
{
	cout << "Rozmiar kolejki do kierownika: " << size(kolejka_kierownik) << endl;
}


void KolejkaKierownik::PokazIdGrupy()
{
	while (!kolejka_kierownik.empty()) 
	{
		cout << "ID grupy czekajacej w kolejce do kierownika: " << kolejka_kierownik.front().id_grupy << endl;
		kolejka_kierownik.pop();
	}
}