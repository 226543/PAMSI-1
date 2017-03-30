
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include "stoper.hh"
#include "zbior_danych.hh"

using namespace std;



class Tablica : public zbior_danych {

private:
	void zmniejsz_tab(int n_rozm);				    //tworzenie nowej tab, kopiowanie el.
	void powieksz_tab(int n_rozm);				    //tworzenie nowej, kopiowaniem, wypełnianie liczbami losowymi od 0 do 10


	int *tablica;
	unsigned int rozmiar = 2;


public:

	Tablica()									    //konstruktor
	{
		tablica = new int[rozmiar];
		for(int i=0;i<rozmiar;i++)
		{
			*(tablica+i)=rand() % 10;
		}
	}

	~Tablica()									    //destruktor
	{
		delete [] tablica;
	}

	virtual void wyswietl();
	virtual void zmien_rozmiar();						//zarządza zmiana rozmiaru
	void zwiekszanie_tablicy(int nowy_rozmiar,int wybrana_metoda);		//wybiera jakie ma byc zwiekszanie tablicy czy o 1, czy 2x
	void zmniejszanie_tablicy(int nowy_rozmiar);  //j.w tylko zmniejszanie
	void powieksz_operacja_pom(int nowy_rozmiar, int &temp_rozm);
	void zmniejsz_operacja_pom(int nowy_rozmiar, int &temp_rozm);
	void pomiar_szybkosci();


};
