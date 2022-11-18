//
// Created by jorge on 02/10/2022.
//
#include <iostream>

using namespace std;

int main(void){

    int second;
    cout << "Tempo em segundo:";
    cin >> second;

    int hour = second / 3600;
    int hourRem = second % 3600;
    int minutes = hourRem / 60;
    int minutesRem = hourRem % 60;
    int segundos = minutesRem % 60;

    cout << "Tempo: " << hour << ":" << minutes << ":" << segundos;

    return 0;
}