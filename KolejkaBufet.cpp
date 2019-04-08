#include <iostream>
#include "KolejkaBufet.h"
using namespace std;

KolejkaBufet::KolejkaBufet()
{

}

KolejkaBufet::~KolejkaBufet()
{

}

void KolejkaBufet::UmiescWKolejce(GrupaKlientow k)
{
	kolejka_bufet.push(k);
}


void KolejkaBufet::PokazRozmiarKolejki()
{
	cout << "Rozmiar kolejki do bufetu: " << size(kolejka_bufet) << " grup/y"<< endl;
}


void KolejkaBufet::PokazIdGrupy(KolejkaBufet k)
{
	while (!k.kolejka_bufet.empty())
	{
		cout<<"ID grupy czekajacej w kolejce do bufetu: " << k.kolejka_bufet.front().id_grupy << endl;
		k.kolejka_bufet.pop();
	}
}