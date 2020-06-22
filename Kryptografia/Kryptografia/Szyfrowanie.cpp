#include "pch.h"
#include "Szyfrowanie.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

void Szyfrowanie:: Szyfrowanie_danych(string wyraz)
{
	fstream plik ;
	
	plik.open("../Szyfr.txt", std::ios::out);
	srand(time_t(NULL));
	string ws;
	//string szyfr[1000];
	int len;
	int s = 0;
	unsigned char l,t;
	int k = 0;
	int f = 0;
		//cout << "Wpisz wiadomosc\n";
		//getline(cin, wyraz);
		//cin.get();
		len= wyraz.length();
		cout << len;
		string *szyfr=new string[17*len];
		//getline(std::cin >>std::ws ,wyraz);
		//std::cout <<wyraz<<" " <<wyraz.length()<<"\n" ;
		for (int i = 0; i < wyraz.length(); i++)
		{
			while (1) {
				 l = rand() % 95 + 32;
				if (l != 92) break;
			}
		
			szyfr[s] = wyraz[i];
			if (i+1 == wyraz.length()) {
				break;
			}
			s++;
			
			//cout << "przed rzutowaniem:" << l << "\n";
			while (1) {                             //To ta petla wszystko psuje !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				 k = unsigned char(l); //rzutowanie okreœlenie o ile liczb dopisaæ pomiêdzy
				k = k % 20;
				if (k == 0) {
					l = rand() % 95 + 32;
					continue;
				}
					break; 
			}
			szyfr[s] = l;
			//cout << k << "\n";
			//if (s != wyraz.length() - 1) break;
				for (int y = 0; y < k; y++)
				{
					
				
					t = rand() % 95 + 32;
					szyfr[s + 1] = t;
					s++;
				
				}
			
		}		
		//cout << "f= " << s<<"\n";
		for (int i = 0; i <= s; i++)
		{
			cout << szyfr[i];
			plik<<szyfr[i];
		}
		cout << '\n';
		//plik << szyfr;
		plik.close();
		delete [] szyfr;
}

Szyfrowanie::Szyfrowanie()
{
}

void Szyfrowanie::Pokazanie(string a)
{
	cout << a;
	
}


 
 


Szyfrowanie::~Szyfrowanie()
{
	
}
