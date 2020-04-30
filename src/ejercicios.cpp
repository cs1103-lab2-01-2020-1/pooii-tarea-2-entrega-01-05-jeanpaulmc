//
// Created by Familiar on 29/04/2020.
//
#include "ejercicios.h"
#include "funciones.h"
#include "lifo/Lifo.h"
#include "lifo/Lifo.cpp"
#include "Lifotemplate/lifoTemp.h"
#include "Lifotemplate/lifoTemp.cpp"

void ejercicio1(){

}

void ejercicio2(){
    Lifo *pila = NULL;
    int dato;
    char rpt;
    do{
        cout << "agregar: ";
        cin >> dato;
        agregarPila(pila, dato);
        cout << "agregar(y/n)";
        cin >> rpt;
    }while (rpt == 'y');
    cout << "Sacando:";
    while (pila != NULL){
        sacarPila(pila, dato);
        if(pila != NULL){
            cout << dato << " , ";
        }else{
            cout << dato << ".";
        }
    }
    cout << endl;
}

void ejercicio3(){
    cout << "Vector" << endl;
    int arr1[] = {1, 5, 2, 4, 5};
    int n1 = 5;
    int arr2[] = {6, 10, 8, 12, 10};
    int n2 = 5;
    print_arr(arr1, n1);
    print_arr(arr2, n2);
    cout << "Lista" << endl;
    list<int> l1(begin(arr1), end(arr1));
    print_list(l1);
    list<int> l2(begin(arr2), end(arr2));
    print_list(l2);
    cout << "merge" << endl;
    l1.merge(l2);
    print_list(l1);
    cout << "sort" << endl;
    l1.sort();
    print_list(l1);

}
//Falta remplazar el Lifo por lifoTemp para que sea un template
void ejercicio4(){
    Lifo *pila = NULL;
    int dato;
    char rpt;
    do{
        cout << "agregar: ";
        cin >> dato;
        agregarPila(pila, dato);
        cout << "agregar(y/n)";
        cin >> rpt;
    }while (rpt == 'y');
    cout << "Sacando:";
    while (pila != NULL){
        sacarPila(pila, dato);
        if(pila != NULL){
            cout << dato << " , ";
        }else{
            cout << dato << ".";
        }
    }
    cout << endl;

}
