#include<stdio.h>


int main(){
    int number1;
    scanf("%d",&number1);
    if(number1 % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    return 0;
}