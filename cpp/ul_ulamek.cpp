#include <iostream>
#include "ul_ulamek.h"

using namespace std;

void Ulamek::zapisz(int l, int m) {
    licznik=l;
    if(m !=0) mianownik = m;
    else {
        cout << "No z czym do ludzi panie gdzie mi tu 0 do mianownika pchasz w łeb się palnij baranie ty" << endl;
        exit(1);
    }
    
}

Ulamek::Ulamek(int l, int m) {
    licznik=l;
    if(m !=0) mianownik = m;
    else {
        cout << "No z czym do ludzi panie gdzie mi tu 0 do mianownika pchasz w łeb się palnij baranie ty" << endl;
        exit(1);
    }
    
}

void Ulamek::wypisz() {
        cout << licznik << "/" << mianownik;
}
int Ulamek::get_l() {
    return licznik;
}
int Ulamek::get_m() {
    return mianownik;
}
void Ulamek::skracaj() {
}
