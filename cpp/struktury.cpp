/*
 * struktury.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>
#include <iomanip>
#include <cstdio>
#include <fstream>
using namespace std;

struct osoba {
    char imie[20];
    char nazwisko[20];
    int wiek;
};

osoba pobierzInf() {
    osoba u;
    cout << "Podaj imię: ";
    cin.getline(u.imie, 20);
    cout << "Podaj nazwisko: ";
    cin.getline(u.nazwisko, 20);
    cout << "Podaj wiek: ";
    cin >> u.wiek;
    return u;
}

void wyswietlInf(osoba u) {
    cout << "Imię: "<< setw(10) << setfill('_') << u.imie << endl;
    cout << "Nazwisko: " << setw(10)<< setfill('_') << u.nazwisko << endl;
    cout << "Wiek: " << setw(10) << setfill('_') << u.wiek << endl;
}


void pobierzDane(osoba t[], int n) {
    for(int i = 0; i < n; i++) {
        cin.ignore(1);
        cout << "Podaj imię: ";
        cin.getline(t[i].imie, 20);
        cout << "Podaj nazwisko: ";
        cin.getline(t[i].nazwisko, 20);
        cout << "Podaj wiek: ";
        cin >> t[i].wiek;
    }
}

void zapiszDane(osoba t[], int n){
    ofstream plik("osoby.txt", ios::app);
    if (!plik.is_open()){
        cout << "Błąd otwarcia pliku.";
    } else {
        for (int i = 0; i < n; i++) {
            cout << t[i].imie << "," << t[i].nazwisko << "," << t[1].wiek << endl;
            plik << t[i].imie << "," << t[i].nazwisko << "," << t[1].wiek << endl;
        }
    }
}

void wyswietlDane(osoba t[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Imię: "<< setw(10) << setfill('_') << t[i].imie << endl;
        cout << "Nazwisko: " << setw(10)<< setfill('_') << t[i].nazwisko << endl;
        cout << "Wiek: " << setw(10) << setfill('_') << t[i].wiek << endl;
        }
}

void czytajDane(osoba t[]){
    ifstream plik("osoby.txt");
    
    if (plik.is_open()) {
        string linia;
        
        int i = 0;
        while(getline(plik, linia)){
            cout << linia << endl;
            i++;
        }
        plik.close();
    }  
    else {
        cout << "Błąd, cholercia...";

}


int main(int argc, char **argv)
{
    int ile;
    cout << "Ile osób chcesz wprowadzić: "; cin >> ile;
    // osoba uczen;
	osoba uczniowie[ile];
    
    pobierzDane(uczniowie, ile);
    //uczen = pobierzInf();
    wyswietlDane(uczniowie, ile);
    //wyswietlInf(uczen);
    zapiszDane(uczniowie, ile);
	
    osoba dane[ile];
    czytajDane(dane);
    
    return 0;
}

