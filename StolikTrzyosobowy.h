#pragma once
#ifndef ZADANIE_2_STOLIKTRZYOSOBOWY_H_
#define ZADANIE_2_STOLIKTRZYOSOBOWY_H_


#include <iostream>
#include "GrupaKlientow.h"
using namespace std;

class StolikTrzyosobowy
{
private:
	GrupaKlientow* aktualny_klient; // wskaznik na grupe klientow aktualnie zajmujaccyh stolik trzyosobowy

public:

	StolikTrzyosobowy();
	~StolikTrzyosobowy();
};

#endif  // ZADANIE_2_STOLIKTRZYOSOBOWY_H_