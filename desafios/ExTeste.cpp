#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

struct IP{
    unsigned int byte1, byte2, byte3, byte4;
};
typedef struct IP IP_t;
struct Temperaturas{
    float temperatura;
    IP_t ipMaquina;
};
typedef struct Temperaturas Temp;
float readValue(){
    float value;
    cout << "Valores compreendidos em [-30,30]\n";
    do{
        cout << "Introduza tem:";
        cin >> value;
        if(value<-30 || value>30){
            cout << "Valor incorreto\n";
        }
    }while(value<-30 || value>30);
    return value;
}
IP_t readIP(){
    unsigned byte1,byte2,byte3,byte4;
    do{
        cout << "Introduza IP:";
        cin >> byte1 >> byte2 >> byte3 >> byte4;
    }while(byte1 >= 255 || byte2 >= 255 || byte3 >= 255 || byte4 >= 255);
    IP_t ipPessoa= {byte1,byte2,byte3,byte4};
    return ipPessoa;
};
Temp registerValue(){
    float temperatura = readValue();
    IP_t ip = readIP();
    return Temp {temperatura,ip};
}
string IPtoString(IP_t ip){
    string byte1 = to_string(ip.byte1);
    string byte2 = to_string(ip.byte2);
    string byte3 = to_string(ip.byte3);
    string byte4 = to_string(ip.byte4);

    string ipS = byte1 + "." + byte2 + "." + byte3 + "." + byte4;
    return ipS;
}
void Histogram(vector<Temp> *List){
    vector<string> Range;
    Range.push_back("[-30,-20[ | ");Range.push_back("[-20,-10[ | ");
    Range.push_back("[-10,  0[ | ");Range.push_back("[  0, 10[ | ");
    Range.push_back("[ 10, 20[ | ");Range.push_back("[ 20, 30[ | ");
    vector<int> Limits={-20,-10,0,10,20,30};
    vector<int> TempRange={0,0,0,0,0,0};
    for(int i = 0;i<Range.size();i++){
        for(Temp temperatura:*List){
            if(i==0){
                if(temperatura.temperatura < Limits.at(i)){
                    TempRange.at(i) +=1;
                }
            }else{
                float tempe = temperatura.temperatura;
                if(tempe < Limits.at(i) && tempe >= Limits.at(i-1)){
                    TempRange.at(i) += 1;
                }
            }

        }
    }

    for(int i = 0;i<Range.size();i++){
        cout << Range.at(i);
        if(TempRange.at(i)!= 0){
            for(int j = 1;j<=TempRange.at(i);j++){
                cout << "*";
            }
        }
        cout << endl;
    }
};
void WriteToFile(vector<Temp>*Lista){
    vector<Temp> ListaSelecionada;
    ofstream Output;
    float value = 0;
    string name;

    do{
        cout << "Value:";
        cin >> value;
    }while(value <-30 || value > 30);

    cout << "Filename:";
    cin >> name;
    Output.open("../"+name);

    for(Temp atual: *Lista){
        if(atual.temperatura>=value){
            ListaSelecionada.push_back(atual);
        }
    }
    Output << setw(8) << left << "Value" << setw(1) << "| IP\n";
    for(Temp leitura: ListaSelecionada){
        Output << setw(8) << left << leitura.temperatura << setw(2) << "| " << IPtoString(leitura.ipMaquina) << endl;
    }

}
void Menu(){
    cout << "1 - Insert a new sensor measurement\n"
         << "2 - Print histogram with measurement count per range of temperatures\n"
         << "3 - Print saved measurements\n"
         << "4 - Print all measurements above given temperature and save them to a file\n"
         << "0 - Exit\n";
}
int main(){
    vector<Temp> Leituras;
    string nome = "Candido Faisca";
    int nmec = 696969;
    cout<< "1) "<<nome << " " << nmec << endl;

    int option;
    do{
        Menu();
        cout << "Option:";
        cin >> option;
        Temp Measure;
        switch(option){
            case 1:
                Measure = registerValue();
                Leituras.push_back(Measure);
                break;
            case 2:
                Histogram(&Leituras);
                break;
            case 3:
                cout << "\n";
                cout << setw(8) << left << "Value" << setw(1) << "| IP\n";
                for(Temp leitura:Leituras){
                    cout << setw(8) << left << leitura.temperatura << setw(2) << "| " << IPtoString(leitura.ipMaquina) << endl;
                }
                break;
            case 4:
                WriteToFile(&Leituras);
                break;
            case 0:
                return 0;
            default:
                cout << "Incorret option!\n";
                break;
        }
    }while(true);
}