#ifndef ID_LIB_H
#define ID_LIB_H

#include <iostream>
using namespace std;

int UUID(){
    static int ID = 0;
    ID+= 1;
    return ID;
}

#endif // ID_LIB_H