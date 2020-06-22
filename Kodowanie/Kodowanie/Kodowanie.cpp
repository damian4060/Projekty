// Kodowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "Main.h"
#include "Macierze.h"
#include "Baza.h"
#include "Dekodowanie.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	Main a;
	Macierze d;
	Baza b;
	Dekodowanie dek;
	d.utworzenie_macierzy_generujacej();
	d.utworzenie_macierzy_kontrolnej();
	b.slowa();
	while (1)
	{


		cout << "1.Informacje o wielomianie generujacym.\n2.Baza slow\n3.Nadaj slowo\n4.Wyswietlenie macierzy generujacej\n5.Wyswietlenie macierzy kontrolnej\nCo chcesz wybrac?\n";
		int wybor;

		cin >> wybor;
		switch (wybor) {
		case 1:
			a.wypisanie_wielomianu_generujacego();
			a.sprawdzenie(a.tab,a.tab2);
			d.zdolnosc_korekcyjna();
			d.odleglosc_min();
			break;
		case 2:
			b.Pelna_baza();
			break;
		case 4: //macierz generujaca
			d.wyswietlenie_macierzy_generujacej();
			break;
		case 5://macierz kontrolna
			d.wyswietlenie_macierzy_kontrolnej();
			break;
		case 3:
			dek.nadaj();
			dek.dekodowanie_macierz(dek.slowo, d.macierz_kontrolna);
			break;
		default:
			cout << "Nic nie wybrano";
			break;
		}
		cout << "\n";
		system("pause");
	}
	}
