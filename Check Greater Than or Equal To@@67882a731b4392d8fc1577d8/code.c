#include<stdio.h>

int main(){
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    if(number1 >= number2){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}