#pragma once
#ifndef ZADANIE_2_CHINSKARESTAURACJA_H_
#define ZADANIE_2_CHINSKARESTAURACJA_H_

#include <iostream>
#include <vector>

#include "StolikDwuosobowy.h"
#include "StolikTrzyosobowy.h"
#include "StolikCzteroosobowy.h"
#include "KolejkaKierownik.h"
#include "KolejkaBufet.h"
#include "KolejkaKasy.h"
#include "Kelner.h"
#include "Bufet.h"
#include "Kasjer.h"
#include "KierownikSali.h"

using namespace std;

	class ChinskaRestauracja
	{
	public:
		const int stoliki_dwuosobowe;								//liczba stolikow dwuosobowych
		const int stoliki_trzyosobowe;								//liczba stolikow trzyosobowych
		const int stoliki_czteroosobowe;							//liczba stolikow czteroosobowych
		vector<StolikDwuosobowy*> wektor_dwuosobowy;				//wektor wskazników na stoliki dwuosobowe
		vector<StolikTrzyosobowy*> wektor_trzyosobowy;				//wektor wskazników na stoliki trzyosobowe
		vector<StolikCzteroosobowy*> wektor_czteroosobowy;			//wektor wskazników na stoliki czteroosobowe
		KolejkaKierownik kolejka_kierownik;							//kolejka klientow do kierownika (obiekt kolejki do kierownika)
		KolejkaBufet kolejka_bufet;									//kolejka klientow do bufetu (obiekt kolejki do bufetu)
		KolejkaKasy kolejka_kasy;									//kolejka klientow do kas (obiekt kolejki do kas)
		KierownikSali kierownik_sali;								//obiekt klasy kierownik sali
		const int liczba_kelnerow;									//liczba kelnerow na sali
		vector <Kelner*> wektor_kelner;								// wektor wskaznikow na kelnerow
		Bufet bufet_samoobs³ugowy;									//obiekt klasy bufet
		const int liczba_kasjerow;									//liczba kasjerow
		vector <Kasjer*> wektor_kasjer;								//wektor wskazników na kasjerow

		ChinskaRestauracja();						//konstruktor klasy
		void wyswietl();							//funkcja wyswietlajaca ustawione w konstruktorze wartosci stale				
		~ChinskaRestauracja();						//destruktor klasy

	};

#endif  // ZADANIE_2_CHINSKARESTAURACJA_H_