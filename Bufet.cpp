#include "Bufet.h"

#include <iostream>


using namespace std;

Bufet::Bufet() : max_osob(10)
{

}


void Bufet::DodajGrupeKlientowDoBufetu(KolejkaBufet &kolejka_b)
{
	zajete_miejsca = 0;
	do
	{
		if (miejsca_przy_bufecie.empty())
		{
			miejsca_przy_bufecie.push_back(kolejka_b.kolejka_bufet.front());
			kolejka_b.kolejka_bufet.pop();
			zajete_miejsca = zajete_miejsca + miejsca_przy_bufecie.front().liczebnosc_grupy;
		}
		else if (max_osob - miejsca_przy_bufecie.front().liczebnosc_grupy >= kolejka_b.kolejka_bufet.front().liczebnosc_grupy)
		{
			miejsca_przy_bufecie.push_back(kolejka_b.kolejka_bufet.front());
			kolejka_b.kolejka_bufet.pop();
			zajete_miejsca = zajete_miejsca + miejsca_przy_bufecie.front().liczebnosc_grupy;
		}
		if (kolejka_b.kolejka_bufet.empty())
		{
			break;
		}
	} while (zajete_miejsca < max_osob);
}

void Bufet::Pokaz()
{
	cout << "Ilosc grup w bufecie: " << size(miejsca_przy_bufecie) << endl;
	
	for (int i = 0; i < size(miejsca_przy_bufecie); i++)
	{
		cout << "ID grupy w bufecie: "<< miejsca_przy_bufecie[i].id_grupy << " oraz liczebnosc grupy: "<< miejsca_przy_bufecie[i].liczebnosc_grupy <<endl;
	}

	cout << "W sumie zajetych miejsc przy bufecie jest: " << zajete_miejsca << endl;
}


Bufet::~Bufet()
{

}
