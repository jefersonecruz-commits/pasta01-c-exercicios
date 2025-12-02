#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

    float peso1,peso2,media;

    
    printf("Digite o peso da primeira pessoa: ");
    scanf(" %f", &peso1);

    printf("digite peso da segunda pessoa: ");
    scanf(" %f", &peso2);

    media = (peso1 + peso2)/2;

    printf("sua media é: %2f\n",media);

    system("pause");
    return 0;
}