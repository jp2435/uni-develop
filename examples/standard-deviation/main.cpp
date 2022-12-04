#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
/*
 * Exemplo de Código:
 * Necessita-se retirar o **desvio padrão** de um dado
 * conjunto de alturas de várias pessoas
 */
vector<double> Height = {1.55, 1.70, 1.80};


int main(){
    // Média Aritmética
    double MediaAri = 0;

    for(double altura: Height){
        MediaAri += altura;
    }
    MediaAri = (double) MediaAri / Height.size();

    double Sum = 0;
    for(double altura: Height){
        Sum += pow((altura-MediaAri),2);
    }
    Sum = (double) Sum / Height.size();

    double DP = sqrt(Sum);
    cout << DP;
    return 0;
}
