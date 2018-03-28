#ifndef DRZEWO_HPP
#define DRZEWO_HPP

struct WEZEL {
    int wartosc;
        WEZEL *prawy;
        WEZEL *lewy;
};      *korzen = NULL;

class Drzewo {
    private:
        WEZEL *prawy;
        WEZEL *lewy;
    public:
        Drzewo();
        ~Drzewo();
        void dodajWezel(WEZEL *wezel, int);
        void wyswietlRosnaco(WEZEL *wezel);
        void wyswietlMalejaco(WEZEL *wezel);
        WEZEL* stworzWezel(int wartosc);
};

#endif
