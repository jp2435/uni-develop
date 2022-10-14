#include <iostream>

using namespace std;
int main() {
    int arr [20] = {};
    // counter também vai corresponder a length do array
    int inp, counter = 0;
    bool LastIndex = false;

    do{
        cout << "Insere um numero entre 1 e 10, inclusive:";
        cin >> inp;
        if( (inp >= 1) && (inp <= 10)){
            arr[counter] = inp;
            counter++;
        }
        else if(inp != 0){
            cout << "Repete, numero invalido" << endl;
        }
    }while(inp != 0);


    // Realizar a inversão do Array
    int reverseArr[counter], Changer=0;

    for(int j = counter-1; j>=0;){
        reverseArr[Changer++] = arr[j--];
    }

    // For pra display do array
    for(int i = 0; i<20;i++){

        if(arr[i] == 0){
            break;
        }
        if(!LastIndex){
            cout << reverseArr[i] << ", " ;
        }else{
            cout << reverseArr[i] << endl;
        }
        if(arr[i+2] == 0) {
            LastIndex = true;
            // cout << "DEV: arr[i+1] = " << arr[i+1] << endl;
            // cout << "DEV: arr[i+2] = " << arr[i+2] << endl;
        }
    }

    // Tamanho do array = cout << *(&arr + 1) - arr << endl;

    return 0;
}
