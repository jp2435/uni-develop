//
// Created by jorge on 10/10/2022.
//
#include <iostream>


using namespace std;
int main(){
    int number, soma = 1;

    do{
        cout << "Insira um numero:";
        cin >> number;
    }while(number <= 0);

    for(int i = 2; i <= number/2; i++){
        if(number % i == 0){
            cout << i<<endl;
            soma += i;
        }
    }
    cout << "Soma de todos os divisores: " << soma << endl;
    if(soma != number){
        if(soma < number){
            cout << "Defiecient number";
        }else{
            cout << "Abundant number";
        }
    }else{
        cout << "Perfect number";
    }

    return 0;
}
