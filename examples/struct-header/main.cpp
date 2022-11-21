#include <iostream>
#include "struct.h"
using namespace std;

int main(){
    Pessoa_t Chad{26, "Chad", 1.86};

    ImprimirIdade(Chad);
    ImprimirNome(Chad);
    ImprimirAltura(Chad);

    return 0;
}