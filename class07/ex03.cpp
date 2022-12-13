#include <iostream>
#include <algorithm>

using namespace std;

struct Time{
    int Hour;
    int Minute;
    int Second;
};
typedef struct Time Time_t;
struct Student{
    int nmec;
    string name;
};
typedef struct Student Stud_t;
bool CheckTime(Time_t Entrada,int H,int M,int S){
    if(Entrada.Hour > H){
        return true;
    }else if(Entrada.Hour == H){
        if(Entrada.Minute>M){
            return true;
        }else if(Entrada.Minute == M){
            if(Entrada.Second>S){
                return true;
            }
        }
    }
    return false;
}
Time_t RequestTime(Time_t Entrada={}){
    int H,M,S;
    bool EXECUTION = true;

    do{
        cout << "Introduza a hora:";
        cin >> H >> M >> S;

        if((H<0||H>23) || (M<0||M>59) || (S<0||S>59)){
            cout << "Valor errado!\n";
        }else{
            // Como não houve nenhum erro podemos fechar a execução deste prompt
            EXECUTION=false;

            /**
             * Em contra partida se for o pedido de tempo de Saida
             * Será necessário verificar se o valor de Saida não é inferior
             * ao de entrada
            */
            if(CheckTime(Entrada,H,M,S)){
                cout << "Valor de Saida Impossivel!\n";
                EXECUTION=true;
            }
        }

    }while(EXECUTION);
    return Time_t{H,M,S};
}
bool IsBackNewLine(unsigned char c){
    return (c == '\n');
}
Stud_t RequestStud(){
    int nmec;
    string name;
    bool EXECUTION = true;
    do{
        cout << "Introduza o nmec:";
        cin >> nmec;
        cout << "Introduza o nome(Finalize com $):";
        getline(cin,name, '$');
        name.erase(remove_if(name.begin(),name.end(), IsBackNewLine), name.end());
        if(nmec<=0){
            cout << "Valor incorreto!\n";
        }else{
            EXECUTION = false;
        }
    }while(EXECUTION);
    return Stud_t{nmec,name};
}
Time_t CalculateTime(Time_t Entrada,Time_t Saida){
    int HCin = 0,MCin = 0;
    int HRes,MRes,SRes;

    SRes = Saida.Second - Entrada.Second;
    if(SRes<0){
        MCin = 1;
        SRes = 60 + SRes;
    }
    MRes = Saida.Minute - Entrada.Minute;
    if(MRes<0){
        HCin = 1;
        MRes = 60 + MRes;
    }
    HRes = Saida.Hour - Entrada.Hour;

    return Time_t{HRes,MRes,SRes};
}
int main(){
    Stud_t Stud;
    Time_t Entrada,Saida,Tempo;
    Stud = RequestStud();
    cout << "Hora de Entrada\n";
    Entrada = RequestTime();
    cout << "Hora de Saida\n";
    Saida = RequestTime(Entrada);
    Tempo = CalculateTime(Entrada,Saida);
    cout << "\n" << "O aluno " << Stud.name << " esteve "
         << Tempo.Hour << "h " << Tempo.Minute << "m e " << Tempo.Second << "s no DETI";
    return 0;
}