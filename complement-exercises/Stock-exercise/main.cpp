#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "libs/ID.h"

using namespace std;

struct Produto{
    int ID = UUID();
    string nome;
    double preco;
    int quantidade;
};
typedef struct Produto Prod_t;
vector<Prod_t> ListaProdutos;

void Menu(){
    system("CLS");
    cout << "1. Insira um produto\n"
         << "2. Imprimir a lista de produtos\n"
         << "3. Imprimir a lista de aquisições (Quantidade inferior a 5)\n"
         << "4. Pesquisar por um produto\n"
         << "5. Calcular o valor em Stock\n"
         << "6. Aplicar inflação 10%\n"
         << "7. Sair\n"
         << "Insira a sua opção:";
}
bool IsSlashNewLine(char c){
    return (c == '\n');
}
void InserirProduto(){
    system("CLS");
    string nome;
    double preco = -1; int precoCheck = 0;
    int quantidade = -1; int quantidadeCheck = 0;
    cout << "Indique o nome do produto (Finalize com $):";
    getline(cin,nome,'$');
    nome.erase(remove_if(nome.begin(),nome.end(), IsSlashNewLine), nome.end());

    while(preco<0){
        if(precoCheck>0){
            cout << "Valor incorreto! Tente novamente\n";
        }
        cout << "Indique o preco do produto:";
        cin >> preco;
        precoCheck++;
    }

    while(quantidade<0){
        if(quantidadeCheck>0){
            cout << "Valor incorreto! Tente novamente\n";
        }
        cout << "Indique o valor de stock:";
        cin >> quantidade;
        quantidadeCheck++;
    }
    
    Prod_t produto{.nome = nome, .preco=preco, .quantidade=quantidade};
    ListaProdutos.push_back(produto);
    system("CLS");
    cout << "*Produto criado com sucesso*\n"
         << setw(12) << left << setfill(' ') << right << "ID: "<< produto.ID << endl
         << setw(12) << left << setfill(' ') << right << "Nome: " << produto.nome << endl
         << setw(12) << left << setfill(' ') << right << "Preco: " << produto.preco << endl
         << setw(12) << left << setfill(' ') << right << "Quantidade: " << produto.quantidade << endl;
    system("PAUSE");
}
void ImprimirProdutos(){
    system("CLS");
    bool CheckFirstTime = true;
    cout << "Lista de produtos\n";
    cout << setw(17) << setfill('-');
    cout << '\n';
    for(Prod_t produto: ListaProdutos){
        if(!CheckFirstTime){
            cout << "/\\/\\/\\/\\/\\/\\/\\/\\\n";
        }
        CheckFirstTime=false;
        cout << "Produto ID:" << produto.ID << endl;
        cout << "Nome: " << produto.nome << endl;
        cout << "Preco: " << produto.preco << endl;
        cout << "Quantidade: " << produto.quantidade << endl;
        cout << "\\/\\/\\/\\/\\/\\/\\/\\/\n";
    }
    system("PAUSE");
}
void AnaliseStock(){
    system("CLS");
    bool Checker = true;
    cout << "Produtos em necessidade de stock\n";
    cout << setw(33) << setfill('-'); cout << '\n';
    for(Prod_t produto: ListaProdutos){
        if(produto.quantidade<5){
            Checker=false;
            cout << setw(12) << left << setfill(' ') << right << "Produto ID: " << produto.ID << endl
                 << setw(12) << left << setfill(' ') << right << "Nome: " << produto.nome << endl
                 << setw(12) << left << setfill(' ') << right << "Preco: " << produto.preco << endl
                 << setw(12) << left << setfill(' ') << right << "Quantidade: " << produto.quantidade << endl
                 << "\\/\\/\\/\\/\\/\\/\\/\\/\n";
        }
    }
    if(Checker){
        cout << "Nao existe necessidade de reposicao de stock\n";
    }
    system("PAUSE");
}
int main(){
    /*
    Prod_t Teste{.nome="Teste Produto", .preco=13.5, .quantidade=7};
    cout << Teste.ID << endl;
    system("PAUSE");*/
    
    int input;
     
    do{
        Menu();
        cin >> input;
        switch (input){
            case 1:
                InserirProduto();
                break;
            case 2:
                ImprimirProdutos();
                break;
            case 3:
                AnaliseStock();
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                system("CLS");
                cout << "O programa ira encerrar\n";
                system("TIMEOUT /T 2");
                return 0;
            default:
                cout << "\nOpção Errada! Tente novamente\n";
                system("PAUSE");
                break;
        }
    }while(true);
    return 0;
}