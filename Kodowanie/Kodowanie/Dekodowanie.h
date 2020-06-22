#pragma once
class Dekodowanie
{
public:
int	syndrom[6];
int slowo[12];
int slowo1[12] = { 1,0,1,1,1,0,1,0,1,1,1,0 };
int rotacja[12];
void dekodowanie_macierz(int t1[], int t2[][6]);
int nadaj();


	Dekodowanie();
	~Dekodowanie();
};

