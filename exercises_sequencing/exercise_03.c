/*
 PT-BR

 O programa a seguir lê dois números inteiros a e b (−10^6 ≤ a, b ≤ 10^6) e
 mostra a soma dos mesmos.

    #include <stdio.h>

    int soma(int a, int b){
        int s = a+b;
        return s;
    }

    int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",soma(a,b));
        return 0;
    }

 Modifique o programa para que o mesmo mostre a multiplicação, ao invés da soma,
 entre a e b. Realize testes com os valores a seguir:

 10 e 20
 11 e 22
 13 e 31
 1001 e 201
 29183 e 2321
 23291 e 39281
 93827 e 82836

*/

#include <stdio.h>

int mult(int a, int b){
    int s = a*b;
    return s;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",mult(a,b));
    return 0;
}