#include "GrupaKlientow.h"

#include <iostream>

using namespace std;

GrupaKlientow::GrupaKlientow(int id, int liczebnosc, int czas_prowadzenia,														//konstruktor dla grupy idacej na sale
							int czas_napoje, int czas_danie, int czas_kons, int czas_kasy )
{
	id_grupy = id;
	liczebnosc_grupy = liczebnosc;
	czas_prowadzenia_przez_kierownika = czas_prowadzenia;
	czas_obslugi_napojow = czas_napoje;
	czas_obslugi_dan = czas_danie;
	czas_konsumpcji = czas_kons;
	czas_obslugi_kasjer = czas_kasy;
}

GrupaKlientow::GrupaKlientow(int id, int liczebnosc,  int czas_bufet, int czas_kasy)											//konstruktor dla grupy idacej do bufetu
{
	id_grupy = id;
	liczebnosc_grupy = liczebnosc;
	czas_przy_bufecie = czas_bufet;
	czas_obslugi_kasjer = czas_kasy;
}

void GrupaKlientow::wyswietl()																									//funkcja pokazujaca parametr danej grupy
{
	cout << "Id obecnej grupy: " << id_grupy << endl;
	cout << "Liczebnosc obecnej grupy: " << liczebnosc_grupy << endl;
	cout << "Czas prowadzenia przez kierownika: " << czas_prowadzenia_przez_kierownika<< " s" << endl;
	cout << "Czas spedzony przy bufecie: " << czas_przy_bufecie << " s" << endl;
	cout << "Czas obslugi napojow: " << czas_obslugi_napojow << " s" << endl;
	cout << "Czas obslugi dan glownych: " << czas_obslugi_dan << " s" << endl;
	cout << "Czas konsumpcji: " << czas_konsumpcji << " s" << endl;
}

GrupaKlientow::~GrupaKlientow()																									//destruktor
{

}
