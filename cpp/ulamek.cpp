/*
 * ulamek.cpp
 * 
 * Copyright 2018  <>
 * 
*/


#include <iostream>

using namespace std;

class Ulamek {
private:
    int licznik;
    int mianownik;
public:
Ulamek (int, int);
    void zapisz(int, int);
    void wypisz() {
        cout << licznik << "/" << mianownik;
    }
    int get_l() {
        return licznik;
    }
    int get_m() {
        return mianownik;
    }
    void skracaj() {
        //użyj algorytmu euklidesa w wer opt
        ;
    }
};

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

int main(int argc, char **argv)
{
    Ulamek ul1(2, 1);
    Ulamek ul2(3, 7);
    
    cout << "1 ułamek: ";
     ul1.wypisz();
     cout << endl;
    cout << "2 ułamek: ";
    ul2.wypisz();
    cout << endl;
    cout << ul1.get_l() << endl;
    cout << ul1.get_m() << endl;
    
    
    
	return 0;
}

