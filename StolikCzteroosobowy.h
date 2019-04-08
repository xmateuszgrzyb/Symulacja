#pragma once
#ifndef ZADANIE_2_STOLIKCZTEROOSOBOWY_H_
#define ZADANIE_2_STOLIKCZTEROOSOBOWY_H_


#include <iostream>
#include "GrupaKlientow.h"
using namespace std;

class StolikCzteroosobowy
{
private:
	GrupaKlientow* aktualny_klient; // wskaznik na grupe klientow aktualnie zajmujaccyh stolik czteroosbowy

public:

	StolikCzteroosobowy();
	~StolikCzteroosobowy();
};

#endif  // ZADANIE_2_STOLIKCZTEROOSOBOWY_H_