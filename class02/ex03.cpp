//
// Created by jorge on 02/10/2022.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int first, second;
    cout << "1 numero:";
    cin >> first;

    cout << "2 numero:";
    cin >> second;
    if(first != second){
        cout << std::max(first,second);
    }else{
        cout << "Equal";
    }
    return 0;
}