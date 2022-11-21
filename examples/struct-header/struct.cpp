#include "struct.h"

/**
 * Função para imprimir a idade de uma pessoa baseada na struct Pessoa
 * @param cidadao - Pessoa criada através da struct Pessoa
 */
void ImprimirIdade(Pessoa_t cidadao){
    cout << "Idade: " << cidadao.idade << endl;
}

/**
 * Função para imprimir o nome de uma pessoa baseada na struct Pessoa
 * @param cidadao - Pessoa criada através da struct Pessoa
 */
void ImprimirNome(Pessoa_t cidadao){
    cout << "Nome: " << cidadao.nome << endl;
}

/**
 * Função para imprimir a altura de uma pessoa baseada na struct Pessoa
 * @param cidadao - Pessoa criada através da struct Pessoa
 */
void ImprimirAltura(Pessoa_t cidadao){
    cout << "Altura: " << cidadao.altura << endl;
}