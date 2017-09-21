
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv){

    string tekst, szyfrogram, odszyfrowany;
    cout << "Podaj teksy do zaszyfrowania: ";
    cin >> tekst;

	cout << tekst << endl << "Rozmiar: " << tekst.size() << endl;
    szyfrogram.resize(tekst.size());
	for (unsigned int i =0; i < tekst.size(); i++){
        cout << tekst[i] << " ";
        szyfrogram[i]
    }
    return 0;
}

