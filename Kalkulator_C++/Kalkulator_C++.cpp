// Kalkulator_C++.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    char operacja;
    double liczba1, liczba2, wynik;

    cout << "Dostepne operacje: +, -, *, /" << endl;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj operacje: ";
    cin >> operacja;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    cout << fixed << setprecision(2); 

    if (operacja == '+') {
        wynik = liczba1 + liczba2;
        cout << "Wynik: " << wynik << endl;
    }
    else if (operacja == '-') {
        wynik = liczba1 - liczba2;
        cout << "Wynik: " << wynik << endl;
    }
    else if (operacja == '*') {
        wynik = liczba1 * liczba2;
        cout << "Wynik: " << wynik << endl;
    }
    else if (operacja == '/') {
        if (liczba2 == 0) {
            cout << "Blad: dzielenie przez zero!" << endl;
        }
        else {
            wynik = liczba1 / liczba2;
            cout << "Wynik: " << wynik << endl;
        }
    }
    else {
        cout << "Nieznana operacja!" << endl;
    }

    return 0;
}