//
// Created by jorge on 02/10/2022.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
    int X1,X2,Y1,Y2;
    cout << left << setw(20) <<"P1(X1,X2)" << right << setw(20) << "P2(X2,Y2)" << endl;

    cout << "X1:";
    cin >> X1;
    cout << "Y1:";
    cin >> Y1;

    cout << "X2:";
    cin >> X2;
    cout << "Y2:";
    cin >> Y2;

    double distance = sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));
    cout << distance;
    return 0;
}