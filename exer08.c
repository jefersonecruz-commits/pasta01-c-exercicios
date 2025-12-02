#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

int i, n;

    printf("informe um numero para transformar em triplo\n");
    scanf(" %d", &n);
    printf("\nT A B U A D A");
    printf("\n=============");

    for(i = 1;i <= 3;i++){
        printf("\n %d x %2d = %4d", n, i, (n * i));
    }
   
   
    printf("\n=============\n\n\n");

    system("pause");
}
