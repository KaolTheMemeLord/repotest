/*
 * wskazniki.cpp
 * 
 * Copyright 2018  <>
 */ 



#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int x = 11;
    cout << x << endl;
    cout << &x << endl; //adres zmiennej w pamięci
	cout << *&x << endl; //wartość zmiennej pod adresem
    
    int *px; //deklaracja wskaźnika do liczby calkowitej
    px = &x; // instalacja wskaznika
    cout << px << endl; // adres przypisany do wskaznika
    cout<< *px << endl; // wartosc wskaznika
    
    int y = 100;
    px = &y;
    cout << px << endl; // adres przypisany do wskaznika
    cout<< *px << endl; // wartosc wskaznika
	return 0;
}

