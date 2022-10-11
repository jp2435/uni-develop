//
// Created by jorge on 03/10/2022.
//
#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Number:";
    cin >> a;

    (a%2 == 0) ? cout << "Par" : cout << "Impar";
    return 0;
}