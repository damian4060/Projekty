// Kryptografia.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "Szyfrowanie.h"
#include"Deszyfracja.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
	Szyfrowanie sz;
	string wyrazenie;
	int wybor;
	while (1) {

		cout << "Program do szyfrowania i odszyfrowywania wiadomosci.\nCo chcesz zrobic?\n1.Zaszyfrowac wiadomosc.\n2.Odszyfrowac ostatnia wiadomosc.\n";
		cin >> wybor;
		switch (wybor) {
		case 1:
			cout << "Napisz\n";
			cin.ignore(1, '\n'); // to polecenie genialne
			getline(cin, wyrazenie);

			sz.Szyfrowanie_danych(wyrazenie);
			break;
		case 2:
			Deszyfracja();
			break;
		default:
			cout << "\nKoniec programu";
			exit(1);
			break;
		}
	}


}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
