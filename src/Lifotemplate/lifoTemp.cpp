//
// Created by Familiar on 30/04/2020.
//
#include "lifoTemp.h"
#include "../tipos.h"
template <typename U>
void agregarPilaTemp(lifoTemp<U> *&pila, U n){
    lifoTemp<U> *nuevo_pila = new lifoTemp<U>();
    nuevo_pila ->dato = n;
    nuevo_pila ->agregar = pila;
    pila = nuevo_pila;
    cout << n << " agregado"<< endl;
}

template <typename U>
void sacarPilaTemp(lifoTemp<U> *&pila, U &n){
    lifoTemp<U> *aux = pila;
    n = aux ->dato;
    pila = aux -> agregar;
    delete aux;
}