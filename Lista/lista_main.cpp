/*
 * lista_main.cpp
 * 
 * Copyright 2018  <> 
 */


#include <iostream>
#include "lista.hpp"

using namespace std;

int main(int argc, char **argv)
{   
    
	Lista lista;
    lista.Dodaj(2);
    lista.Dodaj(1);
    lista.Dodaj(3);
    lista.Dodaj(7);
    lista.Dodaj(0);
    
	return 0;
}
