//
// Created by jorge on 01/10/2022.
//
#include <iostream>

using namespace std;

int main(void){

    double Vel1, Vel2;
    cout << "Velocidade no 1 instante (Vel1):";
    cin >> Vel1;

    cout << "Velocidade no 2 instante (Vel2):";
    cin >> Vel2;

    double VelM = (2 * Vel1 * Vel2) / (Vel1 + Vel2);

    cout << "Velocidade Media Final e de: " << VelM;
    return 0;
}