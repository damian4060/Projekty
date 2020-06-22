#include "pch.h"
#include "Deszyfracja.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <fstream>
#include <limits>
using namespace std;



Deszyfracja::Deszyfracja()
{
	fstream plik;
	plik.open("../Szyfr.txt", std::ios::in);
	int p = 0;
	int b = 0;
	int c=0;
	int podstawa=0;
	std::string wyraz;
	while (!plik.eof()) {
		getline(plik, wyraz);
		//cout << wyraz << endl;
		//getline(plik,wyraz);
	}
	//cout << c;
	//plik >> wyraz;
	string zdeszyfrowany[100];
	//wyraz = "k:rp60t94Ug~&3rmlE1y5TsC<lHfpVZp4wS?$~A~t0floHs~*jO qke?6s";
	//wyraz = "dsED6ax)ktaz;$;bW;AQEZ'I5'iUgV9iN+:}bamlFrdqO*:rYD(eE<W0K`V6$k";
	//cout << wyraz;
	while( b < wyraz.length() ) {
		
		zdeszyfrowany[p] = wyraz[b];
		podstawa = wyraz[b+1] % 20 ;
		if (podstawa == 0) {
			p++;
			b++;
			continue;
		}
		p++;
		b = b + podstawa+1;
	}
	//for (int i = 0; i < wyraz.length(); i++)
	//{


	//	//cout << "\n" << wyraz[i];
	//}
	for (int i = 0; i < p; i++)
	{
	cout << zdeszyfrowany[i];
	}
	plik.close();
	cout << "\n";
}


Deszyfracja::~Deszyfracja()
{
}
