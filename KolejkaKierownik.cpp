#include "KolejkaKierownik.h"

#include <iostream>

using namespace std;

KolejkaKierownik::KolejkaKierownik()											//konstuktor
{

}

KolejkaKierownik::~KolejkaKierownik()											//destruktor
{

}

void KolejkaKierownik::UmiescWKolejce(GrupaKlientow k)							//funkcja umieszczajaca klientow do kolejki na sale						
{
	kolejka_kierownik.push(k);
}

void KolejkaKierownik::PokazRozmiarKolejki()									//funkcja pokazujaca ilosc grup w kolejce na sale
{
	cout << "Rozmiar kolejki do kierownika: " << size(kolejka_kierownik) << endl;
}


void KolejkaKierownik::PokazIdGrupy()											//funkcja pokazujaca id grup czekajacych w kolejce na sale
{
	while (!kolejka_kierownik.empty()) 
	{
		cout << "ID grupy czekajacej w kolejce do kierownika: " << kolejka_kierownik.front().id_grupy << endl;
		kolejka_kierownik.pop();
	}
}