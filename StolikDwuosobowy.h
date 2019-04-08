#pragma once
#ifndef ZADANIE_2_STOLIKDWUOSOBOWY_H_
#define ZADANIE_2_STOLIKDWUOSOBOWY_H_

#include "GrupaKlientow.h"

#include <iostream>


using namespace std;

class StolikDwuosobowy
{
private:
	GrupaKlientow* aktualny_klient;			// wskaznik na grupe klientow aktualnie zajmujaccyh stolik dwuosobowy

public:

	StolikDwuosobowy();						//konstruktor
	~StolikDwuosobowy();					//destruktor
};

#endif  // ZADANIE_2_STOLIKDWUOSOBOWY_H_