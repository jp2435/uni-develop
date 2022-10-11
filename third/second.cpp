//
// Created by jorge on 10/10/2022.
//
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    srand(time(NULL));
    //cout << 1 + rand() % 100 << endl;
    const int generateNumber = 1 + rand() %100;
    cout << generateNumber << endl;
    int Pick;


    do{
        cout << "Your Pick:";
        cin >> Pick;
        if(Pick < generateNumber){
            cout << "Pick lower :(\n Try again" << endl;
        }else{
            cout << "Pick higer :(\n Try again" << endl;
        }
        cout << "---------------------------" << endl;
    }while(Pick != generateNumber);

    cout << "Congrats you find the number";
    return 0;
}