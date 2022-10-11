//
// Created by jorge on 01/10/2022.
//
#include <iostream>
// Pra poder usar  setw()
#include <iomanip>

using namespace std;

int main(void){

    cout << setw(20) << left << "Last name" << setw(20) << right << "First name" << setw(20) << "Town" << setw(20) << "Country" <<endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    cout << setw(20) << left << "Silva" << setw(20) << right << "Joao" << setw(20) << "Aveiro" << setw(20) << "Portugal" <<endl;
    cout << setw(20) << left << "Almeida" << setw(20) << right << "Maria" << setw(20) << "Madrid" << setw(20) << "Spain" <<endl;
    cout << setw(20) << left << "Santos" << setw(20) << right << "Miguel" << setw(20) << "Moscow" << setw(20) << "Russia" <<endl;
    return 0;
}
