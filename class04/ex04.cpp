/*
 * Este programa para ser executado de forma correta
 * Necessita de ser executado num terminal externo
 * Para ativar basta clicar em qual o executavel se está a trabalhar
 * Neste caso "Four | Debug", depois em "Edit Configurations..."
 * E por fim, selecionar a check-box de "Run in external console"
 */


#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
    int arr[51] = {};
    int OptionMenu;
    bool Exit = false;

    int counter = 0;
    do {
        cout << "Analysis of a sequence of integers" << endl;
        cout << " 1 - Read a sequence" << endl;
        cout << " 2 - Write a sequence" << endl;
        cout << " 3 - Calculate the maximum value" << endl;
        cout << " 4 - Calculate the minimum value" << endl;
        cout << " 5 - Calculate the mean value" << endl;
        cout << " 6 - Test if the includes even numbers" << endl;
        cout << "10 - End the program" << endl;

        cout << "Choice:";
        cin >> OptionMenu;


        int inp, max, min, soma = 0;
        double media;
        bool LastIndex = false, EvenNumbers = true;

        switch (OptionMenu) {
            case 1:
                system("CLS");
                do{
                    cout << "Insere um numero:";
                    cin >> inp;

                    arr[counter] = inp;

                    if(counter >= 4){
                        cout << "Tamanho do Array completado" << endl;
                        break;
                    }
                    if(inp != 0){
                        counter++;
                    }
                }while(inp !=0);
                system("PAUSE");
                system("CLS");
                break;
            case 2:
                system("CLS");
                cout << "Write a sequence" << endl;

                for(int i = 0;i<counter;i++){
                    if(!LastIndex){
                        cout << arr[i] << ", ";
                    }else{
                        cout << arr[i] << endl;
                    }
                    if(arr[i+2] == 0){
                        LastIndex = true;
                    }
                }
                system("PAUSE");
                system("CLS");
                break;

            case 3:
                system("CLS");
                cout << "Calculate the maximum value" << endl;
                max = arr[0];
                for(int i = 1; i < counter;i++){
                    if(arr[i] > max){
                        max = arr[i];
                    }
                }

                cout << "The max value is " << max << endl;
                system("PAUSE");
                system("CLS");
                break;
            case 4:
                system("CLS");
                cout << "Calculate the minimum value" << endl;

                min = arr[0];
                for(int i = 1; i< counter;i++){
                    if(arr[i] < min){
                        min = arr[i];
                    }
                }
                cout << "The minimum value is " << min << endl;
                system("PAUSE");
                system("CLS");
                break;
            case 5:
                system("CLS");
                cout << "Calculate the mean value" << endl;
                for(int i = 0; i< counter; i++){
                    soma += arr[i];
                }
                media = (double) soma/counter;

                cout << "The mean value is " << media << endl;
                system("PAUSE");
                system("CLS");
                break;
            case 6:
                system("CLS");
                cout << "Testing if only include even numbers" << endl;
                cout << "------------------------------------" << endl;
                for(int i = 0;i<counter;i++){
                    if(arr[i] % 2 != 0){
                        EvenNumbers = false;
                        break;
                    }
                }
                if(EvenNumbers){
                    cout << "True only exist even numbers" << endl;

                }else{
                    cout << "Exist odd numbers" << endl;
                }
                cout << "------------------------------------" << endl;
                system("PAUSE");
                system("CLS");
                break;
            case 10:
                cout << "Exit Program" << endl;
                return 1;
            case 0:
            default:
                cout << "Numero mal introduzido" << endl;
                system("PAUSE");
                system("CLS");
                break;
        }

    }while(true);

    //while(!(OptionMenu >= 10 || OptionMenu <= 0));

    if(Exit){
        cout << "Exit" << endl;
    }

    return 0;
}
