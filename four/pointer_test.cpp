//
// Created by jorge on 13/10/2022.
//
#include <iostream>

using namespace std;

int main(){
    int myVar = 69;
    int *poitas = &myVar;
    int *pickerRAM = poitas;
    int pickerVAR = *poitas;

    cout << myVar << endl;
    cout << poitas << endl;
    cout << pickerRAM << endl;
    cout << pickerVAR;
    return 0;
}