#include "pch.h"
#include "Macierze.h"
#include<iostream>

Macierze::Macierze()
{
}




void Macierze::utworzenie_macierzy_generujacej()
{

	int c;
	int l = 0;
	for (int i = 1; i < 12; i++) {

		for (int j = 0; j < 12; j++) {
			c = przesuwna[i - 1][0];
			if (j == 11) {
				przesuwna[i][j] = c;
				break;
			}
			przesuwna[i][j] = przesuwna[i - 1][j + 1];

		}

	}
	//wypisanie wyrazow po cyklicznym przesunieciu
	/*for (int i = 0; i < 12; i++) {
		std::cout << "wyraz_" << i << ": ";
		for (int j = 0; j < 12; j++) {
			std::cout << przesuwna[i][j];
		}
		std::cout << "\n";
	}*/
	
	int k = 0;
	for (int k = 0; k < 6; k++)
	{
		for (int g = 0; g < 12; g++)
		{


			int i = 0;
			for (int d = 0; d < 12; d++)
			{

				if (g == i) i++;
				for (int j = 0; j < 12; j++)
				{

					macierz_generujaca1[k][j] = (przesuwna[g][j] + przesuwna[i][j]) % 2;

				}
				if (macierz_generujaca1[k][l] == 1 && macierz_generujaca1[k][(l + 1) % 6] == 0 && macierz_generujaca1[k][(l + 2) % 6] == 0 && macierz_generujaca1[k][(l + 3) % 6] == 0 && macierz_generujaca1[k][(l + 4) % 6] == 0 && macierz_generujaca1[k][(l + 5) % 6] == 0) {

					/*std::cout << "\n";
					for (int j = 0; j < 12; j++)
					{
						std::cout << macierz_generujaca1[k][j];

					}*/
					break;
				}
				i++;
							/*for (int g = 0; g < 12; g++) {
								std ::cout << macierz_generujaca1[k][g];
							}
							std::cout << "\n";*/
			}
			if (macierz_generujaca1[k][l] == 1 && macierz_generujaca1[k][(l + 1) % 6] == 0 && macierz_generujaca1[k][(l + 2) % 6] == 0 && macierz_generujaca1[k][(l + 3) % 6] == 0 && macierz_generujaca1[k][(l + 4) % 6] == 0 && macierz_generujaca1[k][(l + 5) % 6] == 0) break;

		}
		l++;

	}

	

	//	}
	//	}
	l = 0;
	//std::cout << "Druga kolejka\n";
	for (int k = 0; k < 6; k++)
	{
		for (int g = 0; g < 12; g++)
		{


			for (int d = 0; d < 11; d++)
			{
				int i = 0;
				for (int p = 0; p < 12; p++) {

					if (g == p) p++;

					for (int j = 0; j < 12; j++)
					{
						if (g == i % 12) i++;
						if (i % 12 == p) i++;

						macierz_generujaca2[k][j] = (przesuwna[g][j] + przesuwna[p][j] + przesuwna[(i) % 12][j]) % 2;

					}
					if (macierz_generujaca2[k][l] == 1 && macierz_generujaca2[k][(l + 1) % 6] == 0 && macierz_generujaca2[k][(l + 2) % 6] == 0 && macierz_generujaca2[k][(l + 3) % 6] == 0 && macierz_generujaca2[k][(l + 4) % 6] == 0 && macierz_generujaca2[k][(l + 5) % 6] == 0) {
						
						break;
						
						i++;
					}

				}
				if (macierz_generujaca2[k][l] == 1 && macierz_generujaca2[k][(l + 1) % 6] == 0 && macierz_generujaca2[k][(l + 2) % 6] == 0 && macierz_generujaca2[k][(l + 3) % 6] == 0 && macierz_generujaca2[k][(l + 4) % 6] == 0 && macierz_generujaca2[k][(l + 5) % 6] == 0) {
					break;
				}

			}
			if (macierz_generujaca2[k][l] == 1 && macierz_generujaca2[k][(l + 1) % 6] == 0 && macierz_generujaca2[k][(l + 2) % 6] == 0 && macierz_generujaca2[k][(l + 3) % 6] == 0 && macierz_generujaca2[k][(l + 4) % 6] == 0 && macierz_generujaca2[k][(l + 5) % 6] == 0) {
				break;
			}
		}
		/*for (int i = 0; i < 6; i++) {
			std::cout << "\n";
			for (int j = 0; j < 12; j++)
			{
				std::cout << macierz_generujaca2[k][j];

			}
		}*/
		l++;
	}
	k = 0;
	l = 0;
	for(int c = 0; c< 6;c++){
		for (int i = 0; i < 6; i++) {

			if (macierz_generujaca1[i][l] == 1 && macierz_generujaca1[i][(l + 1) % 6] == 0 && macierz_generujaca1[i][(l + 2) % 6] == 0 && macierz_generujaca1[i][(l + 3) % 6] == 0 && macierz_generujaca1[i][(l + 4) % 6] == 0 && macierz_generujaca1[i][(l + 5) % 6] == 0) {
				for (int j = 0; j < 12; j++)
				{
					macierz_generujaca[k][j] = macierz_generujaca1[i][j];
				}
				k++;
				l++;
				break;
			}
			if (macierz_generujaca2[i][l] == 1 && macierz_generujaca2[i][(l + 1) % 6] == 0 && macierz_generujaca2[i][(l + 2) % 6] == 0 && macierz_generujaca2[i][(l + 3) % 6] == 0 && macierz_generujaca2[i][(l + 4) % 6] == 0 && macierz_generujaca2[i][(l + 5) % 6] == 0) {
				for (int j = 0; j < 12; j++)
				{
					macierz_generujaca[k][j] = macierz_generujaca2[i][j];
				}
				k++;
				l++;
				break;
			}
		}

	}
	
}

void Macierze::wyswietlenie_macierzy_generujacej()
{
	std::cout << "\nMacierz generujaca\n";
	for (int a = 0; a < 6; a++) {
		for (int b = 0; b < 12; b++)
		{


			std::cout << macierz_generujaca[a][b];

		}
		std::cout << "\n";
	}
}



void Macierze::odleglosc_min()
{
	
	for (int k = 0; k <12 ; k++) {
		int p = 0;
		if (p == k) p++;
		for (int i = 0; i < 12; i++) {
			if (p == i) i++;
			if (k == i) i++;
			for (int j = 0; j <6 ; j++) {
				haming[0][j] = (macierz_kontrolna[k][j] + macierz_kontrolna[p][j] + macierz_kontrolna[(i)][j])%2;
				
					}
			if (haming[0][0]  == 0 && haming[0][1]  == 0 && haming[0][2]  == 0 && haming[0][3]  == 0 && haming[0][4]  == 0 && haming[0][5]  == 0) {
				//std::cout << k<<" " << p<<" " << i;
				//Odelglosc minimalna: 3
				std::cout << "\nZdolnosc dedekcyjna wynosi 2";
				break;
			}


			
		}
		if (haming[0][0] % 2 == 0 && haming[0][1] % 2 == 0 && haming[0][2] % 2 == 0 && haming[0][3] % 2 == 0 && haming[0][4] % 2 == 0 && haming[0][5] % 2 == 0) break;

	}
	}
void Macierze::zdolnosc_korekcyjna()
{
	gamma = ((3 - 1) / 2);
	std::cout <<"\nZdolnosc korekcyjna wynosi: "<< gamma;
}
void Macierze::kolumny()
{
	int p = 0;
	for (int i = 6; i < 12; i++) {
		h[p] = 0;
		std::cout << "h[" << i << "]=";
		for (int j = 0; j < 6; j++) {
			if (macierz_generujaca[j][i] == 1)
			{
				h[p] = h[p] + 1;
				std::cout<< " " << j<<"";
			}
			
		}
		std::cout << "\n";
		p++;
	}
}

void Macierze::utworzenie_macierzy_kontrolnej()
{
	int l = 0;
	for (int i = 0; i < 6; i++)
	{
		
		for (int j = 6; j < 12; j++) {
			macierz_kontrolna[i][j-6] = macierz_generujaca[i][j];
		}
	}

	for (int i = 6; i < 12; i++) {
		macierz_kontrolna[i][l] = 1;
		for (int j = 0; j < 6; j++)
		{
			if (l == j) continue;
			macierz_kontrolna[i][j] = 0;

			
		}
		l++;
	}
	
	

}

void Macierze::wyswietlenie_macierzy_kontrolnej()
{
	std::cout << "Macierz kontrolna\n";
	for (int i = 0; i < 12; i++) {
		std::cout << "\n";
		for (int j = 0; j < 6; j++) {
			std::cout << macierz_kontrolna[i][j];
		}
	}
}



Macierze::~Macierze()

{
}
