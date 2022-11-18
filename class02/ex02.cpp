//
// Created by jorge on 02/10/2022.
//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double altura, peso;

    cout << "Altura(m):";
    cin >> altura;

    cout << "Peso(kg):";
    cin >> peso;

    double bmi = peso / pow(altura, 2);
    cout << bmi << endl;
    if(bmi < 18.5){
        cout << "Underweight";
    }else if(bmi <=25){
        cout << "Normal";
    }else if(bmi < 30){
        cout << "Overweight";
    }else {
        cout << "Obese";
    }
    return 0;
}
