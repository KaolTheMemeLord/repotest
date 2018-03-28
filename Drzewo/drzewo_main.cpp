
#include <iostream>
#include "drzewo.hpp"

using namespace std;

int main(int argc, char **argv)
{   
    dodajWezel(korzen, 8);
	dodajWezel(korzen, 3);
	dodajWezel(korzen, 10);
	dodajWezel(korzen, 1);
	dodajWezel(korzen, 6);
	dodajWezel(korzen, 4);
	dodajWezel(korzen, 7);
	dodajWezel(korzen, 14);
	dodajWezel(korzen, 13);
    
    cout << "Drzewo posortowane niemalejąco: " << endl;
    wyswietlRosnaco(korzen);
    cout << "Drzewo posortowane malejąco: " << endl;
    wyswietlMalejaco(korzen);
	
	return 0;
}

