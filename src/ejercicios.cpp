//
// Created by Familiar on 29/04/2020.
//
#include "ejercicios.h"
#include "funciones.h"

void ejercicio1(){

}

void ejercicio2(){

}

void ejercicio3(){
    cout << "Vector" << endl;
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    int arr2[] = {6, 7, 8, 9, 10};
    int n2 = 5;
    print_arr(arr1, n1);
    print_arr(arr2, n2);
    cout << "Lista" << endl;
    list<int> l1(begin(arr1), end(arr1));
    for(auto x:l1){
        cout << x << " ";
    }
    cout << endl;
    list<int> l2(begin(arr2), end(arr2));
    for(auto x:l2){
        cout << x << " ";
    }
    cout << endl;
}

void ejercicio4(){

}
