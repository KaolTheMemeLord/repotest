#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Hello.py
#  



def main(args):
    imie = input("Imię?") 
    print ("elo ", imie)
    wiek = int input("Ile masz lat?")
    print ("Masz", 2017-wiek)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
