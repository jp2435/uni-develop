/*
 * Nome: Jorge Costa Pereira
 * N mec: 114412
 */
/*
 * Programa executado em um terminal externo
 */
#include <iostream>
#include <iomanip>

using namespace std;

double calculaMedia(int array[], int array_size){
    int soma = 0;
    for(int i = 0;i<array_size;i++){
        soma+=array[i];
    }
    return (double) soma/array_size;
}
void calculaModulo(int* array, int array_size){
    for(int i = 0;i<array_size;i++){
        if(*(array+i) < 0){
            *(array+i) = -*(array+i);
        }
    }
    // Processo de impressão
    bool LastIndex = false;
    for(int i = 0;i<array_size;i++){
        if(LastIndex){
            cout << *(array+i) << endl;
        }else{
            cout << *(array+i) << " ";
        }
        if((i+1) == array_size -1){
            LastIndex = true;
        }
    }

}
void comparaMedia(int array[], int array_size){
    double media = calculaMedia(array,array_size);
    cout << setfill('-') << setw(9) << left << "Valor" << right << "Posicao\n";
    cout << setfill('-') << setw(16) << "" << endl;
    for(int i = 0;i<array_size;i++){
        if(!(array[i] == media)){
            if(array[i] > media){
                cout << setfill('-') << setw(11) << left << array[i] << right << "maior" << endl;
            }else{
                cout << setfill('-') << setw(8) << left << array[i] << right << "inferior" << endl;
            }
        }else{
            cout << setfill('-') << setw(11) << left << array[i] << right << "igual" << endl;
        }
    }

    cout << endl;
}

int main(){
    cout << "a)\nJorge Costa Pereira, 114412" << endl;

    cout << "b)" << endl;
    int num;
    do{
        cout << "Insira um valor entre 4 e 16:";
        cin >> num;
    }while(num < 4 || num > 16);

    cout << "c)\nInsira "<< num << " valores inteiros:";
    int arr[num];
    for(int i = 0;i<num;i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << "d)\nO conteudo do array e:" << endl;
    bool LastIndex = false;
    for(int i = 0;i<num;i++){
        if(LastIndex){
            cout << arr[i] << endl;
        }else{
            cout << arr[i] << " ";
        }
        if((i+1) == num -1){
            LastIndex = true;
        }
    }

    cout << "e)\nO valor da media e " << calculaMedia(arr,num) << endl;

    cout << "f)\nO conteudo do array modificado e:\n";
    calculaModulo(arr,num);

    cout << "g)\n";
    comparaMedia(arr,num);

    system("PAUSE");
    return 0;
}



