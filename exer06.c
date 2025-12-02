#include<stdio.h>
#include<stdlib.h>
int main(){
   
    int idade;
   

    printf("digite sua idade: ");
    scanf(" %d" , &idade);

    printf(" a sua idade é: %d\n",idade);

      char nome[10];

    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("o seu nome é: %s \n", nome);

    system("pause");
    return 0;
}