
#include<stdio.h>
#include<stdlib.h>

int main(){
   
    float num1,num2,num3,respSoma;

    printf("digite o primeiro numero: ");
    scanf(" %f" , &num1);

    printf("digite o segundo numero: ");
    scanf(" %f" , &num2);

    printf("digite o terceiro numero: ");
    scanf(" %f" , &num3);

    respSoma = num1 + num2 + num3;

    printf("%.1f" ,respSoma);

    system("pause");
    return 0;
}