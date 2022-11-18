/*
 * Código executado em terminal externo
 */

#include <iostream>

using namespace std;
int arr[51] = {};
void MenuDisp(){
    cout << "Analysis of a sequence of intergrs" << endl;
    cout << " 1 - Read a sequence" << endl;
    cout << " 2 - Write a sequence" << endl;
    cout << " 3 - Calculate the maximum value" << endl;
    cout << " 4 - Calculate the minimum value" << endl;
    cout << " 5 - Calculate the mean value" << endl;
    cout << " 6 - Test if the includes even numbers" << endl;
    cout << "10 - End the program" << endl;
}
int Exit(){
    cout << "Exit Program";
    return 1;
}
int ReadArr(){
    int inp;
    system("CLS");
    do{
        cout << "Insere um numero:";
        cin >> inp;
    }while(inp != 0);
    system("PAUSE");
    system("CLS");
}

int main(){

    int OptionMenu;
    // bool Exit = false;

    static int counter = 0;
    do{
        MenuDisp();

        cout << "Choice:";
        cin >> OptionMenu;

        switch (OptionMenu) {
            case 1:
                ReadArr();
                break;
            case 10:
                Exit();
                break;
            default:
                cout << "Numero mal introduzido" << endl;
                system("PAUSE");
                system("CLS");
                break;
        }
        counter++;

    }while(counter <2);

    //if(Exit){
    //    cout << "Exit" << endl;
   // }

    return 0;
}