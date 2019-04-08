#pragma once
#ifndef ZADANIE_2_STOLIKCZTEROOSOBOWY_H_
#define ZADANIE_2_STOLIKCZTEROOSOBOWY_H_

#include "GrupaKlientow.h"

#include <iostream>

using namespace std;

class StolikCzteroosobowy
{
public:
	GrupaKlientow* aktualny_klient;				// wskaznik na grupe klientow aktualnie zajmujaccyh stolik czteroosbowy


	StolikCzteroosobowy();						//konstruktor
	~StolikCzteroosobowy();						//destruktor
};

#endif  // ZADANIE_2_STOLIKCZTEROOSOBOWY_H_