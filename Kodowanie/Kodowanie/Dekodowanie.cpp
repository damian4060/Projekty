#include "pch.h"
#include "Dekodowanie.h"
#include <iostream>
#include <conio.h>
#include "Baza.h"

Baza kod;

int Dekodowanie::nadaj()
{
	char get;
	int g=0;
	std::cout << "Nadaj slowo\n";
	for (int i = 0; i < 6; i++)
	{
		g++;
		get = _getch();
		//slowo[i] = (int)slowo[i];
		//std::cin >> slowo[i];
		if (get == '1') { slowo[i] = 1;
		std :: cout << slowo[i];
		}
		else if (get == '0') { slowo[i] = 0;
		std ::cout << slowo[i];
		}
		else { std::cout << "blad";
		break;
		
		}

	}
	if (g < 6) { 
		std::cout << "blad";
		
		return 1 ; }
	std::cout << "\n";
	kod.slowo_kodowe(slowo);
	std::cout << "Slowo w kanale: ";
	for (int i = 0; i < 12; i++)
	{
		std::cout << slowo[i];
	}
	std::cout << "\n";
	return 0;
}


void Dekodowanie::dekodowanie_macierz(int t1[],int t2[][6] )
{
	for (int i=0; i < 6; i++){
	   if (t1[i] != 1 && t1[i] != 0) return;
		}
	int d = 0;
	for (int k = 0; k < 11; k++) {
		
		int g = 0;

		for (int l = 0; l < 6; l++)
		{
			syndrom[l] = 0;
			for (int p = 0; p < 12; p++) {
				syndrom[l] = (syndrom[l] + (t1[p] * t2[p][l])) % 2;
				
				
			}
			if (syndrom[l] == 1) g++;
		}
		int c = t1[0];
		if (g > 1) {
			for (int i = 0; i < 11; i++) {
				t1[i] = t1[i + 1];
			
			}
			t1[11] = c;
			
			
			d++;
			
		}
	//	std::cout << "\n" << d<<" i "<<g;
		if (g == 1) {
			for (int p = 0; p < 6; p++) {
				if (syndrom[p] == 1) { t1[p + 6] = (t1[p + 6] + 1) % 2; }
			}	//std::cout << "\n";
			while (d > 0) {
				int r = t1[11];
				for (int m = 11; m > 0; m--) {
					t1[m] = t1[m - 1];

				}
				t1[0] = r;
				d--;
			}


			break;
		}
		if (d >= 11) {
			std::cout << "Wyraz bledny.Slowo kodowe zostalo przeklamane i zdolnosc korekcyjna nie moze nic zrobic\n";
			return;
		}
		}
	/*for (int s = 0; s < 6; s++) {
		if (syndrom[s] != 0) {
			std::cout << "Slowo kodowe zostalo przeklamane";
			return;
		}*/
	
	//}
	//std::cout << "\nSyndrom\n";
	//for (int i = 0; i < 6; i++) { std::cout << syndrom[i]; }
	std::cout << "Wyraz odebrano poprawnie i oto on\n";
	for (int j = 0; j < 6; j++) {
		std::cout << t1[j];
	}
}




Dekodowanie::Dekodowanie()
{
}


Dekodowanie::~Dekodowanie()
{
}
