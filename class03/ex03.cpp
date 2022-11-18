//
// Created by jorge on 10/10/2022.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Number;
    bool itsPrime = true;



    do{
        cout << "Enter your number:";
        cin >> Number;
    }while(Number<=0);


    for(int n=2; n<=sqrt(Number); n++){
        if(Number % n == 0){
            cout << "O numero não primo";
            itsPrime = false;
            break;
        }
    }
    if(itsPrime){
        cout << "É primo";
    }
    return 0;
}