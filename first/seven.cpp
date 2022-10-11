//
// Created by jorge on 02/10/2022.
//
#include <iostream>
#include <cmath>
#define PI 3.15149

using namespace std;
int main(void){
    int catA, catB;
    cout << "Cateto A:";
    cin >> catA;

    cout << "Cateto B:";
    cin >> catB;

    double hipC = sqrt(pow(catA,2) + pow(catB, 2));

    double angleRad = acos(catA/hipC);
    double angleDeg = (180*angleRad)/PI;

    cout << "Hipotenusa C: " << hipC << endl;
    cout << "Angulo AC: " << angleDeg;
    return 0;
}