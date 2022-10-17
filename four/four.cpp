#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
    int arr[51] = {};
    int OptionMenu;
    bool Exit = false;


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
        if(OptionMenu == 10){
            Exit = true;
        }
        if((OptionMenu < 10 && OptionMenu >0)){
            switch (OptionMenu) {
                case 10:
                    break;
                case 0:
                default:
                    cout << "Numero mal introduzido" << endl;
                    break;
            }
        }
    }while(!(OptionMenu >= 10 || OptionMenu <= 0));

    if(Exit){
        cout << "Exit" << endl;
    }

    return 0;
}
