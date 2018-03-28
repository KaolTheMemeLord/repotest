#include <iostream>
#include "drzewo.hpp"


WEZEL* stworzWezel(int wartosc) {
    WEZEL *nowyWezel = new WEZEL;
    nowyWezel->wartosc = wartosc;
    nowyWezel->lewy = NULL;
    nowyWezel->prawy = NULL;
    
    return nowyWezel;
}

void Drzewo::dodajWezel(WEZEL *wezel, int wartosc) {
    if (korzen == NULL) { // drzewo jest puste
        korzen = stworzWezel(wartosc);
    } else { // drzewo nie jest puste!
        if (wartosc < wezel->wartosc) { // wstawiamy do lewego poddrzewa
            if (wezel->lewy != NULL) {
                dodajWezel(wezel->lewy, wartosc); // wywołanie rekurencyjne
            } else { // lewy potomek nie istnieje
                wezel->lewy = stworzWezel(wartosc); // tworzymy nowy wezel
            }
        } else { // wstawiamy do prawego poddrzewa
            if (wezel->prawy != NULL) {
                dodajWezel(wezel->prawy, wartosc); // wywołanie rekurencyjne
            } else { // prawy potomek nie istnieje
                wezel->prawy = stworzWezel(wartosc); // tworzymy nowy wezel
            }
        }
    }
}

void Drzewo::wyswietlRosnaco(WEZEL *wezel){
    if (wezel != NULL) {
        wyswietlRosnaco(wezel->lewy);
        cout << wezel->wartosc << ", ";
        wyswietlRosnaco(wezel->prawy);
    }
}

void Drzewo::wyswietlMalejaco(WEZEL *wezel){
    if (wezel != NULL) {
        wyswietlMalejaco(wezel->prawy);
        cout << wezel->wartosc << ", ";
        wyswietlMalejaco(wezel->lewy);
    }
}
