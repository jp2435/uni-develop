#include <iostream>

using namespace std;
int ManyDigits(float number){
    int counter = 0;
    while(number>1){
        number *= 0.1;
        counter++;
    }
    return counter;
}
int main(){
    int inp;
    cout << "Go find how many digits your num use" << endl;
    do{
       cout << "Input:";
       cin >> inp;
       if(inp != 0){
           break;
       }
    }while(true);

    cout << "Your number use " << ManyDigits(inp) << endl;
    return 0;
}