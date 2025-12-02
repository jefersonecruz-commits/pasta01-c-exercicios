#include<stdio.h>
#include<stdlib.h>
int main(){
   
    int num1, resp;

    printf("digite o numero: ");
    scanf(" %d" , &num1);

    resp = num1 % 5;
     if(num1 == 0 ){
        printf("seu numero é divisivel por 5");
    }else{
        printf("seu numero não é divisivel por 5");
    }

    system("pause");
    return 0;
}