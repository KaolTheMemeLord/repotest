#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  SzyfrCezara.py

def szyfruj(tekst, klucz):
    szyfrogram = ""
    for i in range(len(tekst)):
        if ord(tekst[i]) + klucz > 122:
            szyfrogram += chr(ord(tekst[i]) + klucz - 26)
        else:
            szyfrogram += chr(ord(tekst[i]) + klucz)
    print szyfrogram

def main(args):
    tekst = raw_input("Podaj tekst: ")
    klucz = int(raw_input("Podaj klucz"))
    szyfruj(tekst, klucz)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
