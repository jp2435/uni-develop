//
// Created by jorge on 03/10/2022.
//
#include <iostream>

using namespace std;
int switchFun(int month, int year, bool firstTime){
    int lastD;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            lastD = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            lastD = 30;
            break;
        case 2:
            if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
                lastD= 29;
            }else{
                lastD = 28;
            }
            break;
        default:
            cout << endl;
            cout << "Error";
            break;
    }
    (firstTime) ? cout << lastD << endl : cout << "";
    return lastD;


}

int main(){
    int day,month, year, lastD;

    cout << "Day:";
    cin >> day;
    cout << "Month:";
    cin >> month;

    cout << "Year:";
    cin >> year;
    cout << "Number of days in " << month << "/" << year << ":";

    int dayM = day, monthM= month, yearM = year;

    lastD = switchFun(month,year, true);
    if(day > lastD){
        cout << "Error that day dont exist";
        return 0;
    }
    cout << "Next day:";
    if(day+1 > lastD){
        day = 1;
        month += 1;
        if(month > 12){
            year += 1;
            month = 1;
        }
        cout << day <<"/"<<month<<"/"<< year << endl;

    } else{
        cout << day+1 << "/"<<month<<"/"<<year << endl;
    }

    cout << "Previous day:";
    if(dayM -1 < 1){
        monthM -= 1;
        if(monthM < 1){
            yearM -= 1;
            monthM = 12;
        }

        int LAST_DAY_IN_LAST_MONTH = switchFun(monthM,yearM, false);
        cout << LAST_DAY_IN_LAST_MONTH << "/"<< monthM << "/" << yearM << endl;
    }else{
        cout << dayM -1 << "/" << monthM << "/" << yearM<< endl;
    }

    return 0;
}
