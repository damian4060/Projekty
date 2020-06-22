#include "pch.h"
#include "Baza.h"
#include "Macierze.h"
#include <cstdlib>
#include <ctime>

#include<iostream>

Macierze m;

void Baza::slowa()
{
	for (int l = 0; l < 64; l++) {
		for (int t = 0; t < 6; t++) {
			baza[l][t] = 0;
		}
	}
	for (int i = 1; i < 64; i++) {
		
			for (int t = 0; t < 6; t++) {
				baza[i][t] = baza[i - 1][t] ;
			
		}
		baza[i][(5) % 6] = baza[i - 1][(5) % 6] + 1;
		for (int j = 5; j >= 0; j--) {
			if (baza[i][j] == 1) {

			}
			if (baza[i][(j) % 6] == 2) {
				if (j == 0) continue;
				baza[i][(j-1) % 6] = baza[i-1][(j - 1) % 6] + 1;
				baza[i][(j) % 6] = 0;


			}

		}
		

	}
	/*for (int l = 0; l < 64; l++) {
		for (int t = 0; t < 6; t++) {
			std::cout << baza[l][t];
		}
		std::cout << "\n";
	}*/
}
void Baza::Pelna_baza() {
	for (int i = 0; i < 64; i++) {
		baza[i][6] = (baza[i][0] + baza[i][1] + baza[i][2] + baza[i][4] + baza[i][5]) % 2;
		//h[6] = 0 1 2 4 5
		baza[i][7] = (baza[i][0] + baza[i][3] + baza[i][4]) % 2;
			//h[7] = 0 3 4
		baza[i][8] = (baza[i][1] + baza[i][4] + baza[i][5]) % 2;
			//h[8] = 1 4 5
		baza[i][9] = (baza[i][0]+baza[i][1]+baza[i][4]) % 2;
			//h[9] = 0 1 4
		baza[i][10] = (baza[i][1] + baza[i][2] +baza[i][5]) % 2;
			//h[10] = 1 2 5
		baza[i][11] = (baza[i][0] + baza[i][1] + /*baza[i][2]*/+baza[i][3] + baza[i][4] + baza[i][5]) % 2;
			//h[11] = 0 1 3 4 5

	}
	
	
	
	std::cout<<"\nSlowa kodowe\n";
	for (int i = 0; i < 64;i++) {
		for (int j = 0; j < 12;j++) {
			std::cout << baza[i][j];
		}
		std::cout << "\n";
	}
}



void Baza::slowo_kodowe(int t[]) {
	srand(time(NULL));
	int liczba2 = (std::rand() % 2) + 0;
	int liczba = (std::rand() % 2) + 0;
	std::cout <<"Liczba przeklaman w polu informacyjnym: " <<liczba<<" Liczba przeklaman w czesci zabezpieczjacej : " << liczba2<<"\n";
	t[6] = (t[0]+t[1] + t[2] + t[4] + t[5]) % 2;
	//h[6] = 0 1 2 4 5
	t[7] = (t[0] + t[3] + t[4]) % 2;
	//h[7] = 0 3 4
	t[8] = (t[1] + t[4] + t[5]) % 2;
	//h[8] = 1 4 5
	t[9] = ((t[0]+t[1] + t[4] + liczba) % 2) ;
	//h[9] = 0 1 4
	t[10] = (t[1] + t[2] + t[5]) % 2;
	//h[10] = 1 2 5
	t[11] = (t[0] + t[1] /*+ t[2]*/ + t[3] + t[4] + t[5]) % 2;
	//h[11] = 0 1 3 4 5
	t[3] = (t[3] + liczba2) % 2;
}
	

Baza::Baza()
{
}




Baza::~Baza()
{
}
