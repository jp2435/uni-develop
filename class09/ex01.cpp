#include <iostream>
#include <fstream>
#include <algorithm>

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
void over(double reference){
    for(double i: lista){
        if(i>=reference){
            cout << "Acima\n";
        }else{
            cout << "Abaixo\n";
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
    cout << input << endl;
    inputFile.open(input);
    // outFile.open("../out.txt");

    if(!inputFile.is_open()){
        cout << "Erro";
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
    over(media);

    inputFile.close();
    return 0;
}
