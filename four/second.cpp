#include <iostream>

using namespace std;

int main(){
    int arr[20];
    int inp, counter = 0, soma;
    double media;

    do{
        cout << "Enter a number (1<x<10):";
        cin >> inp;

        if((inp >= 1) && (inp <= 10)){
            arr[counter] = inp;
            counter++;
        }else if(inp != 0){
            cout << "Repeat, invalid num" << endl;
        }
    }while(inp != 0);

    for(int i = 0; i<counter; i++){
        soma += arr[i];
    }
    media = (double) soma/counter;

    // Display num > media
    for(int i = 0;i<counter; i++){
        if(arr[i] > media){
            cout << arr[i] << ", ";
        }
    }

    return 0;
}