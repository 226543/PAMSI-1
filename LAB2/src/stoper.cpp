#include "stoper.hh"

stoper::stoper()
{
	start = clock();
}

stoper::~stoper()
{
	cout.setf(ios::fixed);
	cout.precision(5);
	koniec = clock();
	cout<<"Czas wykonania: "<<(koniec-start)/(double)CLOCKS_PER_SEC<<endl;
}
