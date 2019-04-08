#include <iostream>
#include "KolejkaBufet.h"
using namespace std;

KolejkaBufet::KolejkaBufet()																							//konstuktor
{

}

KolejkaBufet::~KolejkaBufet()																							//destruktor
{

}

void KolejkaBufet::UmiescWKolejce(GrupaKlientow k)																		//funkcja wkladajaca klientow do kolejki do bufetu
{
	kolejka_bufet.push(k);
}


void KolejkaBufet::PokazRozmiarKolejki()																				//funkcja pokazujaca ile grup czeka w kolejce
{
	cout << "Rozmiar kolejki do bufetu: " << size(kolejka_bufet) << " grup/y"<< endl;
}


void KolejkaBufet::PokazIdGrupy(KolejkaBufet k)																			//funkcja pokazujaca id grup czekajacych w kolejce
{
	while (!k.kolejka_bufet.empty())
	{
		cout<<"ID grupy czekajacej w kolejce do bufetu: " << k.kolejka_bufet.front().id_grupy << endl;
		k.kolejka_bufet.pop();
	}
}