#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  ONP.py
#  
#  Copyright 2018  <>
 


def main(args):
    stos = [] 
    onp = input("Podaj wyrażenie ONP oddzielając każdy element spacją:\n")
    print(onp)
    onp = onp.split(" ")
    
    for element in onp:
        if element.isdigit():
            stos.append(element)
        else:
            a= stos.pop()
            b = stos.pop()
            stos.append(str(eval(b + element + a)))
            
    print ("Wynik: ", stos.pop())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
