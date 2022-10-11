//
// Created by jorge on 01/10/2022.
//
#include <iostream>

using namespace std;

int main(void){

    double celsius, fahr;
    cout << "C:";
    cin >> celsius;

    fahr = 1.8 * celsius + 32;
    cout << celsius << " C= " << fahr << " F";

    return 0;
}
