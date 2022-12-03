#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> lista;

int main(){
    string input;
    cout << "Files name(# to finish):";
    getline(cin,input,'#');
    ifstream inputFile;
    //ofstream outFile;


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
    /*getline(inputFile,Text);
    cout << Text;*/

    while(getline(inputFile, Text)){
        cout << Text << endl;
    }

    // outFile << "Hello";
    
    inputFile.close();
    // outFile.close();
    return 0;
}
