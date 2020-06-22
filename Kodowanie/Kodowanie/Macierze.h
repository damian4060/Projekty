#pragma once
class Macierze
{
public:
	Macierze();
	int pierwszy[12] = { 0,0,0,0,0,1,1,0,1,0,1,1 };
	int przesuwna[12][12] = { {0,0,0,0,0,1,1,0,1,0,1,1} };
	int macierz_generujaca[6][12];
	int macierz_generujaca2[6][12];
	int macierz_generujaca1[6][12];
	int macierz_kontrolna[12][6];
	int haming[1][12];
	int gamma;
	int h[6];
	void kolumny();
	void utworzenie_macierzy_kontrolnej();
	void wyswietlenie_macierzy_kontrolnej();
	void utworzenie_macierzy_generujacej();
	void wyswietlenie_macierzy_generujacej();
	void odleglosc_min();
	void zdolnosc_korekcyjna();
	~Macierze();
};

