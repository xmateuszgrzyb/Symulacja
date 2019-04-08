#pragma once
#ifndef ZADANIE_2_STOLIKTRZYOSOBOWY_H_
#define ZADANIE_2_STOLIKTRZYOSOBOWY_H_

#include "GrupaKlientow.h"

#include <iostream>

using namespace std;

class StolikTrzyosobowy
{
private:
	GrupaKlientow* aktualny_klient;				// wskaznik na grupe klientow aktualnie zajmujaccyh stolik trzyosobowy

public:

	StolikTrzyosobowy();						//konstuktor
	~StolikTrzyosobowy();						//destruktor
};

#endif  // ZADANIE_2_STOLIKTRZYOSOBOWY_H_