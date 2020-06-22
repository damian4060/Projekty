#include "pch.h"
#include "Main.h"
#include <iostream>
#include <cmath>
using namespace std;

Main::Main()
{
}



Main::~Main()
{
}





void Main::sprawdzenie(int t[], int t2[])
{
	int wynik[13] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	wynik[0] = (t[0] + t2[0]) % 2;
	wynik[1] = (t[1] + t2[1]) % 2;
	wynik[2] = (t[2] + t2[2]) % 2;
	wynik[3] = (t[3] + t2[3]) % 2;
	wynik[4] = (t[4] + t2[4]) % 2;
	wynik[5] = (t[5] + t2[5]) % 2;
	wynik[6] = (t[6] + t2[6]) % 2;

	for (int i = 0; i <= 5;) {
			if (wynik[i] != 0) {
				wynik[i] = (wynik[i] + t2[6]) % 2;
				wynik[i + 1] = (wynik[i + 1] + t2[5]) % 2;
				wynik[i + 2] = (wynik[i + 2] + t2[4]) % 2;
				wynik[i + 3] = (wynik[i + 3] + t2[3]) % 2;
				wynik[i + 4] = (wynik[i + 4] + t2[2]) % 2;
				wynik[i + 5] = (wynik[i + 5] + t2[1]) % 2;
				wynik[i + 6] = (wynik[i + 6] + t2[0]) % 2;
			}
			else {
				wynik[i+1] = (wynik[i+1] + t2[6]) % 2;
				wynik[i + 2] = (wynik[i + 2] + t2[5]) % 2;
				wynik[i + 3] = (wynik[i + 3] + t2[4]) % 2;
				wynik[i + 4] = (wynik[i + 4] + t2[3]) % 2;
				wynik[i + 5] = (wynik[i + 5] + t2[2]) % 2;
				wynik[i + 6] = (wynik[i + 6] + t2[1]) % 2;
				wynik[i + 7] = (t[i + 7] + t2[0]) % 2;
				i++; // petla idzie dalej jak ju¿ zostanie wyzerowana pierwszy bit 
			}
	}
	int d = 0;
	for (int i = 0; i < 13; i++)
	{
		
		d = d + wynik[i];
	}
		if (d == 0) cout<<"\nPodany wielomian jest wielmianem generujacym";

		else cout << "\nNie jest wielomianem generujacym";
		
		
	
}

void Main::wypisanie_wielomianu_kodowego()
{
	cout << "Wielomian kodowy: ";
	for (int i = 0; i < 13; i++)
	{
		cout << tab[i];
	}
}

void Main::wypisanie_wielomianu_generujacego()
{
	cout << "Wielomian generujacy: ";
	for (int i = 0; i < 7; i++)
	{
		cout << tab2[i];
	}
}


