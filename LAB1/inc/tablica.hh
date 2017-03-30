
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>

using namespace std;



class Tablica {

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

	void wyswietl();
	void zmien_rozmiar();							//zarządza zmiana rozmiaru
	void zwiekszanie_tablicy(int nowy_rozmiar);		//wybiera jakie ma byc zwiekszanie tablicy czy o 1, czy 2x
	void zmniejszanie_tablicy(int nowy_rozmiar);  //j.w tylko zmniejszanie
	void powieksz_operacja_pom(int nowy_rozmiar, int &temp_rozm);
	void zmniejsz_operacja_pom(int nowy_rozmiar, int &temp_rozm);

	void dziala();

};
