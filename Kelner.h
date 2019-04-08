#pragma once
#ifndef ZADANIE_2_KELNER_H_
#define ZADANIE_2_KELNER_H_

#include "GrupaKlientow.h"

#include <iostream>
#include <vector>

using namespace std;

class Kelner
{
public:
	GrupaKlientow* aktualny_stolik;		//wskaznik na aktualnie obslugiwany stolik

	Kelner();							//konstuktor
	~Kelner();							//destruktor
};

#endif  // ZADANIE_2_KELNER_H_