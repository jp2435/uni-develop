#ifndef STRUCT_HEADER_STRUCT_H
#define STRUCT_HEADER_STRUCT_H

#include <iostream>
using namespace std;
/*
 * Ao usar um estrutura declarada em mode de Header's
 * a estrutura terá de ser sempre declarada no Header (*.h)
 * nunca no (*.cpp) referente ao Header
 */
/**
 * Uma estrutura básica de Pessoa
 *
 * @param idade - Idade em inteiro de Pessoa
 * @param nome - Nome da Pessoa
 * @param altura - Altura em double de Pessoa
 */
struct Pessoa{
    int idade;
    char nome[32];
    double altura;
};
typedef struct Pessoa Pessoa_t;

void ImprimirIdade(Pessoa_t pessoa);
void ImprimirNome(Pessoa_t pessoa);
void ImprimirAltura(Pessoa_t pessoa);

#endif //STRUCT_HEADER_STRUCT_H
