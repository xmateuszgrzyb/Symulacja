#pragma once
#ifndef ZADANIE_2_KASJER_H_
#define ZADANIE_2_KASJER_H_

#include "GrupaKlientow.h"

#include <iostream>

using namespace std;

class Kasjer
{
public:
	GrupaKlientow* aktualny_klient;			//wskaznik na aktualnie obslugiwan¹ grupe klientow

	Kasjer();								//konstruktor
	~Kasjer();								//destruktor
};

#endif  // ZADANIE_2_KASJER_H_