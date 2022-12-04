#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

#include <vector>
#include <string>

using namespace std;

vector<double> lista;


double Getmedia(){
    double soma = 0;
    for(double i : lista){
        soma += i;
    }
    return (double)soma/lista.size();
}
double StandardDeviation(double MediaAr){
    double dp = 0;

    for(double value:lista){
        dp += pow((value-MediaAr),2);
    }
    dp /= lista.size();
    dp = sqrt(dp);
    return dp;

}
void CheckOverAverage(double reference){
    for(double value : lista){
        if(value >= reference){
            cout << value << " acima da referencia\n";
        }
    }
}
int main(){
    string input;
    cout << "Coloque cada valor em uma linha separada\n"
         << "Nome do arquivo ($ para finalizar):";

    getline(cin,input,'$');
    ifstream inputFile;

    /**
     * Necessário voltar um diretório atrás pois os códigos
     * são executados dentro da pasta *cmake-build-debug*
     */
    input = "../" + input;
    input.erase(remove(input.begin(),input.end(), ' '), input.end());
    input.erase(remove(input.begin(),input.end(), '\n'), input.end());
    cout << "Arquivo utilizado: " << input << endl;
    inputFile.open(input);
    // outFile.open("../out.txt");

    if(!inputFile.is_open()){
        cout << "Erro";
        return 0;
    }
    string Text;

    while(getline(inputFile, Text)){
        lista.push_back(stod(Text));
    }

    /*
     * String -> double = stod()
     * String -> Long Double = stold()
     * String -> int = stoi()
     * String -> float = stof()
     */


    double media = Getmedia();
    double DP = StandardDeviation(media);
    cout << "Media Aritmetrica: " << media
         << "\nDesvio padrão: " << DP << endl;
    CheckOverAverage(media);
    inputFile.close();
    return 0;
}
