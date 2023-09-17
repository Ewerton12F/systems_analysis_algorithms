/*
 PT-BR

 Altere o programa da questão anterior para que o mesmo mostre na tela a mensagem
 "Olá FULANO, bem-vindo(a) ao mundo da linguagem de programação C!" onde FULANO
 deve ser substituído pelo seu nome.

*/

#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("Olá %s, bem-vindo(a) ao mundo da linguagem de programação C!", name);
    return 0;
}