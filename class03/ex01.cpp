#include <iostream>
#include <algorithm>
// Para aceder ao numero maximo representavel
// DBL_MAX usando #include <float>

// A soma de todos o numeros e o minimo e maximo

using namespace std;

int main() {
    double x, soma=0, Max, Min;
    int n = 0;

    cin >> x;
    Max = x;
    Min = x;

    while(x!=0){
        soma = soma + x;
        n++;

        if(x > Max){
            Max = x;
        }
        if(x < Min){
            Min = x;
        }

        cin >> x;
    }

    cout << "Maior numero: " << Max << endl;
    cout << "Menor numero: " << Min << endl;
    cout << "Media: " << soma/n << endl;


    return 0;
}
