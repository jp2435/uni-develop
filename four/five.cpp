#include <iostream>

using namespace std;

int main(){
    int arr[101] = {}, arrVeri[101]={};
    bool Veri= true;
    int inp,counter=0;

    do{
        cout << "insere um nr positivo:";
        cin >> inp;

        if(counter >=100-1){
            Veri=false;
            cout << "Tamanho do Array completado" << endl;
        }else if(inp<=0){
            Veri=false;
            break;
        }

        arr[counter] = inp;
        counter++;
    }while(Veri);
    // i for arrVeri j 

    cout << sizeof(arr)/sizeof(arr[0]) << endl;
    arrVeri[0] = arr[0];
    int i = 1;
    for(int index = 1;index<counter;index++){
        Veri = true;
        for(int indexV = 0;indexV<i;indexV++){
            if(arrVeri[indexV] == arr[index]){
                Veri=false;
                break;
            }
        }
        if(Veri){
            arrVeri[i]=arr[index];
            i++;
        }
    }
    for(int j = 0; j<5;j++){
        cout << arrVeri[j] << ", ";
    }

    // Falta demontrar o numero de vezes que cada numero ocorre
    return 0;
}
