//
// Created by jorge on 03/10/2022.
//
#include <iostream>
#define price 1.4

using namespace std;

int main(){
    double litres;
    cout << "Number of litres needed:";
    cin >> litres;

    double finalPrice = (litres > 40) ? (price*litres)*0.90: price*litres;

    cout << "Price (€/L): " << price << endl;
    cout << "More than 40L, discount enable of 10%" << endl;
    cout << "Total Price: " << finalPrice;
    return 0;
}
