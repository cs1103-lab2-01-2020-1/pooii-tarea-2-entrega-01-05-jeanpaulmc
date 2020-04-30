//
// Created by Familiar on 29/04/2020.
//

#include "funciones.h"


void print_arr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void print_list(list<int> l){
    for (auto x:l){
        cout << x << " ";
    }
    cout << endl;
}