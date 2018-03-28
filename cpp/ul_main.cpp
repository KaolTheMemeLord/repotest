/*
 * ul_main.cpp
 * 
 * Copyright 2018  <>
 */



#include <iostream>
#include "ul_ulamek.h"

using namespace std;

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

