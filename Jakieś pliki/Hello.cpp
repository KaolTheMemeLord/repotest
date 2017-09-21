


#include <iostream>

using namespace std;

int przyste(int n)
{
    int i = 0;
    for( i=0; i<=n; i+=2)
        cout << i << " " << endl;
        return i / 2;
}

#define ROK_CPP 1983

int main(int argc, char **argv)
{   
    cout << "Jak Ci na imię piekny?" << endl;
    string imie;
    cin >> imie;
    
    cout << "elo " << imie << endl;

    int wiek = 0;
        cout << "Jaki jesteś stary?" << endl;
        cin >> wiek;
    
    int rok_urodzenia = 2017-wiek;
        cout << "Urodziłeś się w " << rok_urodzenia  << "roku. To słuszny wiek." << endl;
    
    if (ROK_CPP < rok_urodzenia)
        cout << "Jesteś młodszy od cpp" << endl;
    
    else
        cout << "Jesteś starszy od cpp" << endl;
        
    int n = 0;
    cout << "Podaj liczbę naturalną: ";
    cin >> n;
    cout << "Ilość parzystych " << parzyste(n);
    
	
	
    
    return 0;
}

