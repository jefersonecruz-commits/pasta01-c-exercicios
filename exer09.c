#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    
  float nota1;

    printf("digite a sua nota: ");
    scanf(" %f" , &nota1);

    if(nota1 >= 6 ){
        printf("sua notas é menos que 6 reprovado");
    }else{
        printf("sua nota esta maior que 6 parabens");
    }
    
    system("pause");

}