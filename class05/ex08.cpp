#include <iostream>

using namespace std;
int BinaryCon(int n){
    int bits = 0, resto, res[32] = {};

    if(n==1){
        cout << 1;
        return 0;
    }

    while(n>1){
        resto = 0;
        if(n%2 == 1){
            resto = 1;
        }
        n = (n)/2;

        res[bits] = resto;
        bits++;
        // Sendo a ultima execução e bits já atualição o seu valor
        if(n==1){
            res[bits]= 1;
        }
    }

    int ArrayInBinary[bits], Changer = 0;
    for(int i = bits;i>=0;){
        ArrayInBinary[Changer++] = res[i--];
    }
    for(int i =0;i<=bits;i++){
        cout << ArrayInBinary[i];
    }
}
int main(){
    int number;
    cout << "Decimal=>Binary Converter"<<endl;
    do{
        cout<< "Input your number:";
        cin >> number;
    }while(number<=0);
    BinaryCon(number);
    return 0;
}