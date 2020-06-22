#pragma once
#include<iostream>

class Main
{
public:
	Main();
	~Main();
	int a = 4097;
	int b = 107;
	int  tab[13] = { 1,0,0,0,0,0,0,0,0,0,0,0,1 };
	int  tab2[7] = { 1,1,0,1,0,1,1 };
	int c;
	void sprawdzenie(int t[], int t2[]);
	void wypisanie_wielomianu_kodowego();
	void wypisanie_wielomianu_generujacego();
		
	
			
};
	



