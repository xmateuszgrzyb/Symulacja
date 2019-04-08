#pragma once
#ifndef ZADANIE_2_STOLIKDWUOSOBOWY_H_
#define ZADANIE_2_STOLIKDWUOSOBOWY_H_


#include <iostream>
#include <vector>
#include "GrupaKlientow.h"
using namespace std;

class StolikDwuosobowy
{
private:
	GrupaKlientow* aktualny_klient;

public:

	StolikDwuosobowy();
	~StolikDwuosobowy();
};

#endif  // ZADANIE_2_STOLIKDWUOSOBOWY_H_