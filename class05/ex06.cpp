#include <iostream>

using namespace std;

void countdown(int n){
    for(n;n>=0;n--){
        cout << n << endl;
    }
}

int main(){
    int inp;
    cout << "Countdown Program" << endl;
    do{
        cout << "Input a n number for count:";
        cin >> inp;
        if(inp>0){
            break;
        }
    }while(true);
    countdown(inp);
    return 0;
}