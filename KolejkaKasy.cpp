#include <iostream>
#include "KolejkaKasy.h"
using namespace std;

KolejkaKasy::KolejkaKasy()
{

}

KolejkaKasy::~KolejkaKasy()
{

}

void KolejkaKasy::UmiescWKolejce(Bufet &b, GrupaKlientow k)
{
	while(!b.miejsca_przy_bufecie.empty())
	{
		if (b.miejsca_przy_bufecie.front().czas_przy_bufecie)
		{
			kolejka_kasy.push(b.miejsca_przy_bufecie.front());
			b.miejsca_przy_bufecie.pop_back();
			b.zajete_miejsca = b.zajete_miejsca - kolejka_kasy.front().liczebnosc_grupy;
		}

		if (b.miejsca_przy_bufecie.empty())
		{
			break;
		}
	}
}

void KolejkaKasy::PokazRozmiarKolejki()
{
	cout << "Rozmiar kolejki do kas: " << size(kolejka_kasy) << " grup/y" << endl;
}

void KolejkaKasy::PokazIdGrupy(KolejkaKasy k)
{
	while (!k.kolejka_kasy.empty())
	{
		cout << "ID grupy czekajacej w kolejce do kas: " << k.kolejka_kasy.front().id_grupy << endl;
		k.kolejka_kasy.pop();
	}
}