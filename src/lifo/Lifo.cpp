//
// Created by Familiar on 30/04/2020.
//
#include "Lifo.h"
#include "../tipos.h"
void agregarPila(Lifo *&pila, int n){
    Lifo *nuevo_pila = new Lifo();
    nuevo_pila ->dato = n;
    nuevo_pila ->agregar = pila;
    pila = nuevo_pila;
    cout << n << " agregado"<< endl;
}


void sacarPila(Lifo *&pila, int &n){
    Lifo *aux = pila;
    n = aux ->dato;
    pila = aux -> agregar;
    delete aux;
}