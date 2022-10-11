//
// Created by jorge on 03/10/2022.
//
#include <iostream>
#include <algorithm>

using namespace std;
bool comp(int a , int b){
    return (a<b);
}
int main(){

    int a,b,c;
    cin >> a >> b >> c;

    cout << std::max({a,b,c}, comp);
    return 0;
}
