#include <iostream>

using namespace std;

int main(){
    int arr[101] = {};
    bool Veri = true;
    int inp, counter = 0;

    do{

        cout << "Insere um nr positvo:";
        cin >> inp;

        //cout << "DEV: counter = " << counter << endl;
        if(counter >= 100 - 1){ // Numero do tamanho - 1(index começa em 0)
            Veri = false;
            cout << "Tamanho do Array completado" << endl;
        }else if(inp <= 0){
            Veri = false;
        }

        arr[counter] = inp;
        counter++;
    }while(Veri);


    // cout << "DEV: counter(Final) = " << counter << endl;
    int inpN, counterN = 0;
    cout << "Enter a nr to see number of times:";
    cin >> inpN;

    for(int i = 0; i<counter;i++){
        if(arr[i] == inpN){
            counterN++;
        }
    }
    cout << inpN << " apareceu " << counterN << " vezes" << endl;
}