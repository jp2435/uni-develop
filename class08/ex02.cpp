#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
struct Time{
    int Hour;
    int Minute;
    int Second;
};
typedef struct Time Time_t;
struct Student{
    string nome;
    int number;
    Time_t HoraEntrada{0,0,0};
    Time_t HoraSaida;
};
typedef struct Student Stud_t;

vector<Stud_t> Students;
bool IsBackNewLine(unsigned char c){
    return (c == '\n');
}
void RegisterStudent(){
    string nome;
    int number;
    cout << "Nome:";
    getline(cin,nome,'$');
    nome.erase(remove_if(nome.begin(),nome.end(), IsBackNewLine), nome.end());
    cout << "Number:";
    cin >> number;

    Stud_t stud{nome, number};

    cout << "Hora de Entrada(H M S):";
    cin >> stud.HoraEntrada.Hour;
    cin >> stud.HoraEntrada.Minute;
    cin >> stud.HoraEntrada.Second;

    cout << "Hora de Saida(H M S):";
    cin >> stud.HoraSaida.Hour;
    cin >> stud.HoraSaida.Minute;
    cin >> stud.HoraSaida.Second;

    Students.push_back(stud);

}
void ListInformation(){
    int nmec;
    cout << "Introduza o nmec:";
    cin >> nmec;
    bool Checker = false;
    Stud_t* pStudent = nullptr;
    for(Stud_t Stud: Students){
        if(Stud.number == nmec){
            pStudent = new Stud_t{Stud.nome,Stud.number, Stud.HoraEntrada, Stud.HoraSaida};
            Checker = true;
            break;
        }
    }
    if(Checker) {
        cout << "Informação do estudante " << pStudent->nome << endl
             << "Nome: " << pStudent->nome << endl
             << "Nmec: " << pStudent->number << endl
             << "Hora de Entrada: " << pStudent->HoraEntrada.Hour << ":" << pStudent->HoraEntrada.Minute << ":"
             << pStudent->HoraEntrada.Second << endl
             << "Hora de Saida: " << pStudent->HoraSaida.Hour << ":" << pStudent->HoraSaida.Minute << ":"
             << pStudent->HoraSaida.Second << endl;
    }else{
        cout << "Aluno com nmec:" << nmec << " não encontrado\n";
    }
}
void MediaTempo(){
    vector<Time_t> Tempos;
    vector<int> TemposInSec;
    // Retirar o tempo permanecido
    for(Stud_t Stud: Students){
        int HCin=0,MCin=0;
        int HRes,MRes,SRes;

        SRes = Stud.HoraSaida.Second - Stud.HoraEntrada.Second;
        if(SRes<0){
            MCin = 1;
            SRes = 60 + SRes;
        }
        MRes = (Stud.HoraSaida.Minute - Stud.HoraEntrada.Minute) - MCin;
        if(MRes<0){
            HCin = 1;
            MRes = 60 + MRes;
        }
        HRes = (Stud.HoraSaida.Hour - Stud.HoraEntrada.Hour) - HCin;
        Tempos.push_back(Time_t{HRes,MRes,SRes});
    }
    // Tranformar o tempo permanecido em segundos
    for(Time_t Tempo:Tempos){
        int Segundos=0;
        Segundos += Tempo.Second;
        Segundos += Tempo.Minute*60;
        Segundos += Tempo.Hour*60*60;
        TemposInSec.push_back(Segundos);
    }
    // Calcular a média
    int Media=0;
    for(int TempoInSec: TemposInSec){
        Media+= TempoInSec;
    }
    Media = round(Media/TemposInSec.size());
    cout << "Média em segundos:" << Media << endl;
    int Hora = Media / 3600;
    int HoraR = Media % 3600;
    int Minutos = HoraR / 60;
    int MinutosR = HoraR % 60;
    int Segundos = MinutosR % 60;
    cout << "Média de tempo permanecido no DETI: "<<Hora<<":"<<Minutos<<":"<<Segundos<<endl;
}

void Menu(){
    cout << "Escolha uma opcao"<< endl;
    cout << "1 - Registar um estudante" << endl;
    cout << "2 - Listar todas as informações de um estudante" << endl;
    cout << "3 - Calcular a media de tempo estado no DETI" << endl;
    cout << "4 - Terminar o programa" << endl;
}

int main(){
    int input = 0;
    while(true) {
        Menu();
        cout << "Opcao:";
        cin >> input;
        switch (input) {
            case 1:
                RegisterStudent();
                break;
            case 2:
                ListInformation();
                break;
            case 3:
                MediaTempo();
                break;
            case 4:
                return 0;
                break;
            default:
                cout << "Opção inválida\n";
                break;
        }
    }
}