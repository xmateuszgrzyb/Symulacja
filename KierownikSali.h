#pragma once
#ifndef ZADANIE_2_KIEROWNIKSALI_H_
#define ZADANIE_2_KIEROWNIKSALI_H_

#include "GrupaKlientow.h"

#include <iostream>
#include <vector>


using namespace std;

class KierownikSali
{
public:
	GrupaKlientow* aktualny_klient;			//wskaznik na aktualnie obslugiwan¹ grupê klientow

	KierownikSali();						//konstruktor
	~KierownikSali();						//destruktor
};

#endif  // ZADANIE_2_KIEROWNIKSALI_H_