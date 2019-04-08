#include "ChinskaRestauracja.h"

#include <iostream>


using namespace std;

ChinskaRestauracja::ChinskaRestauracja() : stoliki_dwuosobowe(5), stoliki_trzyosobowe(5), stoliki_czteroosobowe(5),			//konstruktor ustalajacy wartosci const
                                           liczba_kelnerow(4), liczba_kasjerow(2)
{

}

void ChinskaRestauracja::wyswietl()																							//funkcja pokazujaca wartosc zmiennych const 
{
	cout << "Stolikow dwuosobowych jest: " << stoliki_dwuosobowe << endl;
	cout << "Stolikow trzyosobowych jest: " << stoliki_trzyosobowe << endl;
	cout << "Stolikow czteroosobowych jest: " << stoliki_czteroosobowe << endl;
	cout << "Kelnerow jest: " << liczba_kelnerow << endl;
	cout << "Kasjerow jest: " << liczba_kasjerow << endl;

}

ChinskaRestauracja::~ChinskaRestauracja()																					//destruktor
{

}